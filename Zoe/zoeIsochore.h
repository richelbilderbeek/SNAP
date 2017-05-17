/******************************************************************************\
zoeIsochore.h - part of the ZOE library for genomic analysis
 
Copyright (C) Ian Korf 2002-2013.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

The MIT License (MIT) - opensource.org/licenses/MIT

\******************************************************************************/

#ifndef ZOE_ISOCHORE_H
#define ZOE_ISOCHORE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zoeHMM.h"
#include "zoeTools.h"

struct zoeIsochore  {
	int     count;
	zoeFVec min_GC;
	zoeFVec max_GC;
	zoeTVec hmm_file;
	zoeVec  hmms;
};
typedef struct zoeIsochore * zoeIsochore;

void        zoeDeleteIsochore (zoeIsochore);
zoeIsochore zoeNewIsochore (void);
zoeIsochore zoeReadIsochore (FILE *);
zoeIsochore zoeGetIsochore (const char *);
zoeHMM      zoeSelectIsochore (const zoeIsochore, float);

#endif
