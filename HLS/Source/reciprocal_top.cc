#include "reciprocal_top.h"

// Calculating reciprocal
outp_dt reciprocal_top(inp_dt den) {

	ap_uint<1> sb;
	ap_ufixed<WL,IL> den_abs = 0;
	outp_dt outp;
	int shift = 0;

	if(den < 0) {
		den_abs = -den;
		sb = 1;
	} else {
		den_abs = den;
		sb = 0;
	}

	for(int i = 0; i < FL; i++) {
		if(den_abs[i] == 1) {
			shift = FL - i;
			break;
		}
	}

	ap_uint<WL> lshift = den_abs << shift;

	ap_ufixed<WL,1> fval = lookup(lshift);

	ap_ufixed<WL,1> rshift = fval << shift;

	if(sb == 1)
		outp = -rshift;
	else
		outp = rshift;

	return outp;
}
