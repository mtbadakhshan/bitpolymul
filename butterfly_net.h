/*
Copyright (C) 2017 Ming-Shing Chen

This file is part of BitPolyMul.

BitPolyMul is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

BitPolyMul is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with BitPolyMul.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _BUTTERFLY_NET_H_
#define _BUTTERFLY_NET_H_


#include <stdint.h>


#ifdef  __cplusplus
extern  "C" {
#endif



void butterfly_net_half_inp( uint64_t * fx , unsigned n_fx );

void i_butterfly_net( uint64_t * fx , unsigned n_fx );


// (BEGIN) THE FOLLOWING FUNCTION IS ADDED BY M. Badakhshan TO MAKE DIRECT API TO LCH FFT
#include <emmintrin.h> 
#include <immintrin.h> 
void butterfly_net_clmul( __m128i *poly , unsigned n_fx ); 
// (END) THE ABOVE FUNCTION IS ADDED BY M. Badakhshan TO MAKE DIRECT API TO LCH FFT


void butterfly_net_half_inp_clmul( uint64_t * fx , unsigned n_fx );

void i_butterfly_net_clmul( uint64_t * fx , unsigned n_fx );


void butterfly_net_half_inp_256( uint64_t * fx , unsigned n_fx );

void i_butterfly_net_256( uint64_t * fx , unsigned n_fx );



#ifdef  __cplusplus
}
#endif


#endif
