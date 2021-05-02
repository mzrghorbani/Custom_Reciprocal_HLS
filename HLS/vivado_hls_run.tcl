############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
delete_project reciprocal_HLS 
open_project reciprocal_HLS
set_top reciprocal_top
add_files lookup.cc
add_files lookup.h
add_files reciprocal_top.cc
add_files reciprocal_top.h
add_files reciprocal_types.h
add_files -tb reciprocal_test.cc -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcvu9p-fsgd2104-2L-e}
create_clock -period 2.77 -name default
source "./vivado_hls_directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog
exit