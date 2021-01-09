#include <stdio.h>
int calculate_sum(int *array);

int main() {
   int array[10];
   int i;
   int result;
  

   
   for(i=0; i<10; i++) {
      scanf("%d", &array[i]);      
   }
   
   result= calculate_sum(array);

   printf("%d", result);



}

int calculate_sum(int *array){
  int i, sum=0;

  for(i=0; i<10; i++){
    sum+= array[i];
  }

  return sum;
}
