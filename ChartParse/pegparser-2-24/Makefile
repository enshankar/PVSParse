CC := gcc-13
LDFLAGS := -lgmp
CFLAGS := -O3 -Wall -Wno-unused-variable -Wno-unused-but-set-variable -Wno-incompatible-pointer-types -g -fsanitize=address,undefined
INCLUDES := -I.
TARGET := ltedfapegtest

all: pvslib.c lex2_c.c sets_c.c identity_c.c file_c.c bytestrings_c.c gen_strings_c.c strings_c.c integertypes_c.c real_defs_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c character_adt_c.c ordinals_c.c ordstruct_adt_c.c identity_uint8_c.c ltedfapegtest_c.c ltedfapegproof_c.c ltedfapeg_c.c dfa_c.c arrayCount_c.c ltedfapegtest_m.c

%.o : %.c      
  $(CC) $(CFLAGS) $(INCLUDES) pvslib.c lex2_c.c sets_c.c identity_c.c file_c.c bytestrings_c.c gen_strings_c.c strings_c.c integertypes_c.c real_defs_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c character_adt_c.c ordinals_c.c ordstruct_adt_c.c identity_uint8_c.c ltedfapegtest_c.c ltedfapegproof_c.c ltedfapeg_c.c dfa_c.c arrayCount_c.c ltedfapegtest_m.c $(LDFLAGS) -o $(TARGET)

clean:
      rm -f *~ $(TARGET)
