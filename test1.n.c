#include <stdio.h>

// NSC err
int main(void) {
  if(printf("It can build\n") || 1) {}
  return 0;
}
