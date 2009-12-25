/* CELIB - cldnew's C libraries designed for CEMACS
 *
 * Copyright (C) 2009  Yen-Chin, Lee <coldnew.tw@gmail.com>. 
 *
 * This file is part of CELIB.
 *
 * The contents of this file are subject to the terms of one of the
 * following licenses: 
 *
 *    1) GNU Lesser General Public License (LGPL)
 *    2) Common Development and Distribution License (CDDL)
 *    3) Yen-Chin, Lee, as the author of this code, expressly permits you to
 *       statically or dynamically link your code (or bind by name)
 *       to this file, while you keep this file unmodified.
 *
 * You can select the license that you prefer but you may not use this file
 * except in compliance with one of these Licenses.
 *
 * See the Licenses for the specific language governing permissions and
 * limitations under the Licenses.
 *
 */

#include "cetypes.h"
#include "ceswap.h"

#include <stdio.h>

#define CE_SWAP_CORE  tmp = *p1; *p1 = *p2; *p2 = tmp    

/* CeInt */
inline void  ce_swap_ceint(CeInt *p1, CeInt *p2)
{
        CeInt CE_SWAP_CORE;
}

/* CeChar */
inline void  ce_swap_cechar(CeChar *p1, CeChar *p2)
{
        CeChar CE_SWAP_CORE;
}

/* CeShort */
inline void  ce_swap_ceshort(CeShort *p1, CeShort *p2)
{
        CeShort CE_SWAP_CORE;
}

/* CeFloat */
inline void  ce_swap_cefloat(CeFloat *p1, CeFloat *p2)
{
        CeFloat CE_SWAP_CORE;
}

/* CeDouble */
inline void ce_swap_cedouble(CeDouble *p1, CeDouble *p2)
{
        CeDouble CE_SWAP_CORE;
}


/* end of ceswap.c */
