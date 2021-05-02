#ifndef RECIPROCAL_TYPES_H
#define RECIPROCAL_TYPES_H

#include "ap_fixed.h"

const int WL = 8;
const int FL = 2;
const int IL = WL - FL;

typedef ap_fixed<WL,IL> inp_dt;
typedef ap_fixed<WL,1> outp_dt;

#endif
