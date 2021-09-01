#if !defined(HEADER_SCANNER)
#define HEADER_SCANNER

#include <stdio.h>
#include <ctype.h>

enum token{
  FDT,
  CAD,
  SEP
};

char buffer[128];
int get_token();

#endif




