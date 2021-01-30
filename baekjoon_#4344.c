#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int main(void) { 

  int C;
  int i, j;
  int N;
  int *score;
  int sum=0;
  double average = .0;


  scanf("%d", &C);

  for(i=0; i<C; i++){
    scanf("%d", &N);

    score = (int *)malloc(N*sizeof(int));
    if (score == NULL){
      printf("Malloc Error");
      exit(1);
    }

    for(j=0; j<N; j++){
      scanf("%d", &score[j]);
      sum += score[j];
    }

    average= (double)sum /N;
    int count = 0;
    for (int j=0; j<N; j++){
      if(average<score[j]){
        count++;
      }
    }
    printf("%.3f%%\n", (double)count*100/N);

    sum= 0;
    count = 0;
  }


return 0;
}



