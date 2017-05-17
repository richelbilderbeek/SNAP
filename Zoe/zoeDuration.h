/******************************************************************************\
zoeDuration.h - part of the ZOE library for genomic analysis
 
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

#ifndef ZOE_DURATION_H
#define ZOE_DURATION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zoeDistribution.h"
#include "zoeFeature.h"
#include "zoeTools.h"

struct zoeDuration  {
	zoeLabel          label;
	int               distributions;
	zoeDistribution * distribution;
};
typedef struct zoeDuration * zoeDuration;

void        zoeDeleteDuration (zoeDuration);
zoeDuration zoeNewDuration (zoeLabel, int, const zoeDistribution *);
zoeDuration zoeReadDuration (FILE *);
void        zoeWriteDuration (FILE *, const zoeDuration);
score_t     zoeScoreDuration (const zoeDuration, coor_t);

#endif
