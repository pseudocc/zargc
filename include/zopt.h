#ifndef ZOPT_H
#define ZOPT_H

#include <inttype.h>

#define OPT_NAME_LENGTH 20

enum {
  OPT_NUMBER,
  OPT_BOOLEAN,
  OPT_STRING
};

typedef struct {
  char name[OPT_NAME_LENGTH];
  char kind;
  char positional;
  char* choices;
  uint32_t n_choices;
  void** indirect;
  uint32_t n_elements;
  void* default_values;
} zopt_t;

#endif
