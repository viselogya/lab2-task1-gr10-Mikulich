#include "../include/codec.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <string>\n", argv[0]);
    return 1;
  }
  char *res = insert_codes(argv[1]);
  printf("%s\n", res);
  free(res);
  return 0;
}
