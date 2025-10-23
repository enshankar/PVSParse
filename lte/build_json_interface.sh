#!/usr/bin/env bash
set -eo pipefail

if [[ -z "${PVS_HOME}" ]]; then
    export PVS_HOME=$HOME/SRI/CHALO/FHIRFly/PVS
fi

PVS_BIN=$PVS_HOME/pvs

# $PVS_BIN -batch -E "(pvs2c-theory \"ltedfapegtest\")"

cc -w -g -I$PVS_HOME/lib/pvs2c/include/ -L$PVS_HOME/lib/pvs2c/lib/ identity_uint8_c.c arrayCount_c.c bsparsenum_c.c jsondata_c.c jsondata_interface_c.c dfa_c.c ltedfapeg_c.c ltedfapegproof_c.c ltedfapegtest_c.c jsonnumber_c.c jsondata_interface.c -lgmp -lpvs-prelude -o jsondata_interface.out
