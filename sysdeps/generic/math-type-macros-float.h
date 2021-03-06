/* Helper macros for float variants of type generic functions of libm.
   Copyright (C) 2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_TYPE_MACROS_FLOAT
#define _MATH_TYPE_MACROS_FLOAT

#define M_LIT(c) c ## f
#define M_PFX FLT
#define M_SUF(c) c ## f
#define FLOAT float
#define CFLOAT _Complex float

/* Standard/GNU macro literals do not exist for the float type.  Use
   the double macro constants.  */
#define M_MLIT(c) c

/* Supply the generic macros.  */
#include <math-type-macros.h>

#endif
