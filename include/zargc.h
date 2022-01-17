#ifndef ZARGC_H
#define ZARGC_H

#include "./zcmd.h"

typedef struct zargc_s zargc_t;

zargc_t* zargc_ctor();
void zargc_dtor(zargc_t*);

void zargc_cmd(zargc_t*, zcmd_t*);
void zargc_cr(zargc_t*, const char*);

void zargc_raise(zargc_t*, const char*);
int32_t zargc_run(zargc_t*, int, const char*[]);

#endif
