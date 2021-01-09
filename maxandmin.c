#include <stdio.h>

int main(void) {
  int array[5]
  int i,j;
  int min, max;
  int tmp;

  for(i=0; i<5; i++){
    scanf("%d, &array[i]");
  }

  // bubble sort

  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
      if(array[j]> array[i]){
        tmp=array[i];
        array[i]= array[j];
        array[j]= tmp;
        //bubble sort: acending order
      }
    }
  }
  for(i=0; i<5; i++){
    printf("%d", array[i]);
  }
  min= array[0];
  max= array[4];
  print("");
  return 0;
}
