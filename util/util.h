/*
    Copyright (C) 2015-2016 Aean(a.k.a. fhsvengetta)
    All rights reserved.

    IreCore is distributed under the terms of The MIT License.
    You should have received a copy of the MIT License along with this program.
    If not, see <http://opensource.org/licenses/mit-license.php>.
*/

#ifndef ICUTIL_H_INCLUDED
#define ICUTIL_H_INCLUDED

#include "VersionNo.h"

#ifndef IC_LOCAL
#define IC_LOCAL
#endif

extern IC_LOCAL const double ilvlScaleCoeff;
extern IC_LOCAL const char* trinket_list[];
extern IC_LOCAL const char* race_str_param[];
IC_LOCAL int trinket_scaling( int trinket, int itemlvl );
IC_LOCAL int trinket_from_id( int id );

#endif