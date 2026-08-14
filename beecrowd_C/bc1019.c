#include <stdio.h>

int main() {

  int N;
  int h = 0, m = 0;

  scanf("%d", &N);

  while (N >= 60) {

    if (N >= 3600) {

      h += 1;
      N -= 3600;

    }

    else if (N >= 60) {

      m += 1;
      N -= 60;
    }
  }

  printf("%d:%d:%d\n", h, m, N);

  return 0;
}
