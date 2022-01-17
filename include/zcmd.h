#ifndef ZCMD_H
#define ZCMD_H

#include <inttype.h>
#include "./zopt.h"

typedef (uint32_t* delegate_t)(void*);

typedef struct {
  zopt_t* opts;
  uint32_t n_opts;
  delegate_t validate;
  delegate_t handler;
} zcmd_t;

#endif
