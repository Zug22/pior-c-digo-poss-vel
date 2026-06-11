#include <stdio.h>
#include <stdlib.h>

int main(){

  int N = 10000000;
  int D = 32;

  int *a = (int *)malloc(N * sizeof(int));
  if (a == NULL){return 1;}

  for(int i = 0; i < N; i+= D){
    a[i]++;
  }

  return 0;
}
