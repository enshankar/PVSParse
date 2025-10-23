# Check for PVS_HOME environment variable.
ifeq ($(PVS_HOME),)
    $(error PVS_HOME is not set. Please set this environment variable.)
endif

TARGETS := bsparsestr bsparsenum dfa jsondata_interface jsondata_debug lte stringutils itoa jsondata djsondata_test example

# --- Target-Specific Source Files ---

jsondata_interface_SRCS := \
    identity_uint8_c.c \
    arrayCount_c.c \
    bsparsenum_c.c \
    bsparsestr_c.c \
    jsondata_c.c \
	jsonnumber_c.c \
    ltedfapeg_c.c \
    jsondata_interface_c.c \
    ltedfapegproof_c.c \
    ltedfapegtest_c.c \
    stringutils_c.c \
    dfa_c.c \
    itoa_c.c \
    jsondata_interface.c

jsondata_debug_SRCS := \
    identity_uint8_c.c \
    arrayCount_c.c \
    bsparsenum_c.c \
    bsparsestr_c.c \
    jsondata_c.c \
	jsonnumber_c.c \
    ltedfapeg_c.c \
    jsondata_interface_c.c \
    ltedfapegproof_c.c \
    ltedfapegtest_c.c \
    stringutils_c.c \
    dfa_c.c \
    itoa_c.c \
    jsondata_debug.c

lte_SRCS := \
    identity_uint8_c.c \
    arrayCount_c.c \
    ltedfapeg_c.c \
    ltedfapegproof_c.c \
    ltedfapegtest_c.c \
    dfa_c.c \
    stringutils_c.c \
    ltedfapegtest_m.c

bsparsestr_SRCS := \
    stringutils_c.c \
    bsparsestr_c.c \
    bsparsestr.c

bsparsenum_SRCS := \
    bsparsenum_c.c \
    bsparsenum.c

dfa_SRCS := \
    stringutils_c.c \
    dfa_c.c \
    dfa.c

stringutils_SRCS := \
    stringutils_c.c \
    stringutils.c

itoa_SRCS := \
    itoa_c.c \
    itoa.c

jsondata_SRCS := \
    stringutils_c.c \
    itoa_c.c \
    jsondata_c.c \
    jsondata.c

djsondata_test_SRCS := \
    stringutils_c.c \
    itoa_c.c \
    fmap_c.c \
    jsondata_c.c \
    jslt_helpers_c.c \
    djsondata_test_c.c \
    djsondata_test.c


example_SRCS := \
    stringutils_c.c \
    itoa_c.c \
    jsondata_c.c \
    jslt_helpers_c.c \
    example_c.c \
    example.c \


pvsjson_lib_SRCS := \
    identity_uint8_c.c \
    arrayCount_c.c \
    bsparsenum_c.c \
    bsparsestr_c.c \
    jsondata_c.c \
	jsonnumber_c.c \
    ltedfapeg_c.c \
    jsondata_interface_c.c \
    ltedfapegproof_c.c \
    ltedfapegtest_c.c \
    stringutils_c.c \
    dfa_c.c \
    itoa_c.c \
    example_c.c \
    jslt_helpers_c.c \
    jsondata_lib.c

# --- Shared Library Target ---

pvsjson_OBJS := $(pvsjson_lib_SRCS:.c=.o)
pvsjson_lib: $(pvsjson_OBJS)
	$(CC) $(LDFLAGS) -shared -o libpvsjson$(SHARED_LIB_EXT) $^ $(LDLIBS)

# --- Global Build Settings ---

CC       := cc
CFLAGS   := -w -g -I$(PVS_HOME)/lib/pvs2c/include 
LDFLAGS  := -L$(PVS_HOME)/lib/pvs2c/lib #-fsanitize=address -fno-omit-frame-pointer 
LDLIBS   := -lgmp -lpvs-prelude

ifeq ($(DEBUG_MODE),true)
    CFLAGS += -fsanitize=address,undefined
    LDFLAGS += -fsanitize=address,undefined
endif

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
    LIB_PATH_VAR := DYLD_LIBRARY_PATH
    SHARED_LIB_EXT := .dylib
else
    LIB_PATH_VAR := LD_LIBRARY_PATH
    SHARED_LIB_EXT := .so
endif
LIB_DIR := $(PVS_HOME)/lib/pvs2c/lib

# --- Generic Rules (Automation) ---

# This section automatically generates the necessary build rules for each target.
# You shouldn't need to edit anything below this line.

# Template for creating build and run rules for a target
define TARGET_template
$(1)_OBJS := $$($(1)_SRCS:.c=.o)

$(1): $$($(1)_OBJS)
	$(CC) $(LDFLAGS) $$^ -o $$@ $(LDLIBS)

run-$(1): $(1)
	$(LIB_PATH_VAR)=$(LIB_DIR) MallocNanoZone=0 ./$$<
endef

# Generate the specific rules for each target defined in the TARGETS list
$(foreach target,$(basename $(TARGETS)),$(eval $(call TARGET_template,$(target))))

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# --- Main Commands ---

.DEFAULT_GOAL := all
all: pvsjson_lib

clean:
	rm -f *.o *.out $(TARGETS) libpvsjson$(SHARED_LIB_EXT)

.PHONY: all clean $(foreach target,$(basename $(TARGETS)),run-$(target))
