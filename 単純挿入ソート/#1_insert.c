#include <stdio.h>

void insert (int y[], int num3){
    int i, j, tmp;
    for(i = 1; i < num3; i++){
        j = i;
        tmp = y[j];
        while(j>0 && y[j-1]>tmp){
            y[j] = y[j-1];
            j--;
        }
        y[j] = tmp;
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
    printf("■単純挿入ソート後\n");
    insert(array, num);
    show(array, num);
    return 0;
}