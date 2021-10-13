#include <stdio.h>

void swap (int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubble (int y[]){
  int i, j;
  for(i = 0; i < 4; i++){
    for(j = 4; j > i; j--){
      if(y[j-1]> y[j])
        swap(&y[j], &y[j-1]);
    }
  }
}

void show (int x[]){
  int i;
  for(i = 0; i < 5; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
}

int main (void){
  int array[5] = {5, 2, 4, 3, 1};
  printf("■１回目の出力\n");
  show(array);
  printf("■バブルソート後\n");
  bubble(array);
  show(array);
  return 0;
}