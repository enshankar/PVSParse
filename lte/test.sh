#!/usr/bin/env bash

TARGET_PROG=$1
export DYLD_LIBRARY_PATH=$PVS_HOME/lib/pvs2c/lib

cc -w -I${PVS_HOME}/lib/pvs2c/include/ -L${PVS_HOME}/lib/pvs2c/lib/ arrayCount_c.c ltedfapeg_c.c identity_uint8_c.c jsondata_interface_c.c ltedfapegproof_c.c bsparsenum_c.c jsondata_adt_c.c jsonnumber_adt_c.c ltedfapegtest_c.c dfa_c.c ${TARGET_PROG}.c -lgmp -lpvs-prelude -o ${TARGET_PROG}.out && ./$TARGET_PROG.out
