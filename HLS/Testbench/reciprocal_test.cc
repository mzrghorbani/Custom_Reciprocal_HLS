#include <iostream>
#include "reciprocal_types.h"
#include "reciprocal_top.h"

int main() {

	inp_dt den = -15.25;

	outp_dt outp = reciprocal_top(den);

	std::cout << "outp: " << outp << std::endl;

	double error = (1/double(den)) - double(outp);

	std::cout << "error: " << error << std::endl;

	return 0;
}
