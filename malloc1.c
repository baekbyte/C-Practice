#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int N;
  int *array;
  int i, sum=0;
  scanf("%d", &N);
// normal format
  array = (int*)malloc(N*sizeof(int));
  if (array == NULL){
    printf("Malloc error!");
    exit(1);
  }
  //
  for (i=0;i<N; i++){
    scanf("%d",&array[i]);
    sum += array[i];
  }

  printf("%d\n", sum);
  return 0;
}
