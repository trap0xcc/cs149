#include "times2.h"
#include <stdio.h>

#define N 8

void print_array(int *data, int n) {
  puts("+================");
  for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  puts("\n-================");
}

int main() {
  int data[N];
  for (int i = 0; i < N; i++) {
    data[i] = i;
  }
  print_array(data, N);
  times2(data, N);
  print_array(data, N);
  return 0;
}
