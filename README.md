This repository contains the source and testbench files to implement the reciprocal module IP core in High-Level Synthesis.

To excecute the code clone the repository by

	git clone https://gitlab.cern.ch/mghorban1/custom-reciprocal-hls.git
	
In HLS run add links script to create links and workspace

	sh add_links

Once the workspace is created, change the directory to workspace and run

	vivado_hls -f vivado_hls_run.tcl

