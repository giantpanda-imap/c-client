/* ========================================================================
 * Copyright 1988-2006 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

/*
 * Program:	Newline routines
 *
 * Author:	Mark Crispin
 *
 * Date:	1 August 1988
 * Last Edited:	30 August 2006
 */


/* Function prototypes */

unsigned long strcrlfcpy (unsigned char **dst,unsigned long *dstl,
			  unsigned char *src,unsigned long srcl);
unsigned long strcrlflen (STRING *s);
