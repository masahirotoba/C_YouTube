#include <stdio.h>

void swap (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void select (int y[], int num3){
    int i, j, min;
    for(i = 0; i < num3 - 1; i++){
        int min = i;
        for(j = i + 1; j < num3; j++){
            if(y[j] < y[min])
                min = j;
        }
        swap(&y[i], &y[min]);
    }
}

void show (int x[], int num2){
    int i;
    for(i = 0; i < num2; i++){
        printf("%d, ", x[i]);
    }
    printf("\n");
}

int main (void){
    int num;
    int array[num];
    int i;
    printf("要素数を入力して下さい");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }
    printf("■１回目の出力\n");
    show(array, num);
    printf("■単純選択ソート後\n");
    select(array, num);
    show(array, num);
    return 0;
}