/*
Copyright (C) 2017 Ming-Shing Chen

This file is part of BitPolyMul.

BitPolyMul is free software: you can redistribute it and/or modify
it under the terms of the Lesser GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

BitPolyMul is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with BitPolyMul.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _GF2256_TOWER_ISO_H_
#define _GF2256_TOWER_ISO_H_


#include <stdint.h>


#ifdef  __cplusplus
extern  "C" {
#endif


extern uint64_t gf2256toTower[];

extern uint64_t gfTowerto2256[];

extern uint64_t gf2256toTower_4R[];

extern uint64_t gfTowerto2256_4R[];


#ifdef  __cplusplus
}
#endif


#endif
