#include <stdio.h>

void swap (int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubble (int y[], int num3){
  int i, j;
  for(i = 0; i < num3 - 1; i++){
    for(j = num3 - 1; j > i; j--){
      if(y[j-1] > y[j])
        swap(&y[j], &y[j-1]);
    }
  }
}

void show (int x[], int num2){
  int i;
  for(i = 0; i < num2; i++){
    printf("%d、", x[i]);
  }
  printf("\n");
}

int main (void){
  int num;
  int array[num];
  int i;
  printf("要素数を入力して下さい\n");
  scanf("%d", &num);
  for(i = 0; i < num; i++){
    scanf("%d", &array[i]);
  }
  printf("■１回目の入力\n");
  show(array, num);
  printf("■バブルソート後\n");
  bubble(array, num);
  show(array, num);
  return 0;
}