/* CELIB - cldnew's C libraries designed for CEMACS
 *
 * Copyright (C) 2009-2010  Yen-Chin, Lee. All Rights Reserved. 
 *
 * This file is part of CELIB.
 *
 * The contents of this file are subject to the terms of one of the
 * following licenses: 
 *
 *    1) GNU Lesser General Public License (GNU LGPL)
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

#ifndef _CE_STRING_H_
#define _CE_STRING_H_

/* Declare CeString Object */
struct _CeString {
        CeUChar* const data;
        CeInt    const len;     /**< string length excluding trailing '\0' */
};
typedef struct _CeString CeString;


/* Declare Public Method */
CeString * ce_string_new(void);
CeInt    * ce_string_set_data(CeString *self, const CeUChar *str);
CeUChar  * ce_string_get_data(CeString *self);



#endif  /* _CE_STRING_H_ */
