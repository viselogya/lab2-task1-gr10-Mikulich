#include "../include/codec.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insert_codes(const char *s) {
  size_t len = strlen(s);
  char *out = malloc(len * 5 + 1);
  char *p = out;
  for (size_t i = 0; i < len; i++) {
    *p++ = s[i];
    p += sprintf(p, "%d", (unsigned char)s[i]);
  }
  *p = '\0';
  return out;
}
