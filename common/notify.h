/*
 * Notification function
 *
 * Copyright (c) 2006-2008, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _NOTIFY_H )
#define _NOTIFY_H

#include "common.h"

#include <stdio.h>

#if defined( __cplusplus )
extern "C" {
#endif

extern int libewf_notify_verbose;

void libewf_notify_set_values(
      FILE *stream,
      int verbose );

#define notify_set_values \
	libewf_notify_set_values

void libewf_notify_printf(
      char *format,
      ... );

#define notify_printf \
	libewf_notify_printf

#define notify_verbose_printf \
	if( libewf_notify_verbose != 0 ) libewf_notify_printf

#define notify_warning_printf \
	if( libewf_notify_verbose != 0 ) libewf_notify_printf

void libewf_notify_dump_data(
      void *data,
      size_t size );

#define notify_dump_data( data, size ) \
	if( libewf_notify_verbose != 0 ) libewf_notify_dump_data( data, size )

#if defined( __cplusplus )
}
#endif

#endif

