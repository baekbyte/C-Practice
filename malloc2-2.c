#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int N, D;
  int *array;
  int i; 
  scanf("%d", &N);
// normal format
  array = (int*)malloc(N*sizeof(int));
  if (array == NULL){
    printf("Malloc error!");
    exit(1);
  }
  //
  for(i=0; i<N; i++){
    scanf("%d", &array[i]);
  }
  scanf("%d",&D);
  array= (int*)realloc(array, (N-D) * sizeof(int));
  

  printf("remaning student id card: ");
  for(i=0; i<N-D; i++){
    printf("%d\n", array[i]);
  }

  return 0;
}


