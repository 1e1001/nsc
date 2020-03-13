#include <stdio.h>
#include <stdlib.h>

// success
int main(void) {
  if(printf("It can build\n%s\n", getenv("NSC")) || 1) {}
}
