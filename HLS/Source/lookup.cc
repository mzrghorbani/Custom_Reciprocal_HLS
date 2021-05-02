#include "lookup.h"

double lookup(ap_uint<WL> idx) {

	const int depth = 256;
	double lookup[depth];

	for(int i = 2; i < depth; i++)
		lookup[i] = 1 / double(i);

	return lookup[idx];
}
