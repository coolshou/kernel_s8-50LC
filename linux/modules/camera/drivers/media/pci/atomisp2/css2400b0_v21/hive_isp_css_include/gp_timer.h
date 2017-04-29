/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __GP_TIMER_H_INCLUDED__
#define __GP_TIMER_H_INCLUDED__

/*
 * This file is included on every cell {SP,ISP,host} and on every system
 * that uses the input system device(s). It defines the API to DLI bridge
 *
 * System and cell specific interfaces and inline code are included
 * conditionally through Makefile path settings.
 *
 *  - .        system and cell agnostic interfaces, constants and identifiers
 *	- public:  system agnostic, cell specific interfaces
 *	- private: system dependent, cell specific interfaces & inline implementations
 *	- global:  system specific constants and identifiers
 *	- local:   system and cell specific constants and identifiers
 */

#include "storage_class.h"

#include "system_local.h"    /*GP_TIMER_BASE address */
#include "gp_timer_local.h"  /*GP_TIMER register offsets */

#ifndef __INLINE_GP_TIMER__
#define STORAGE_CLASS_GP_TIMER_H STORAGE_CLASS_EXTERN
#define STORAGE_CLASS_GP_TIMER_C
#include "gp_timer_public.h"   /* functions*/
#else  /* __INLINE_GP_TIMER__ */
#define STORAGE_CLASS_GP_TIMER_H STORAGE_CLASS_INLINE
#define STORAGE_CLASS_GP_TIMER_C STORAGE_CLASS_INLINE
#include "gp_timer_private.h"  /* inline functions*/
#endif /* __INLINE_GP_TIMER__ */

#endif /* __GP_TIMER_H_INCLUDED__ */