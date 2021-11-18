#include <stdio.h>

int main (void){
    int num;
    int box[num];
    printf("配列の個数は？");
    scanf("%d", &num);
    int i;
    for(i = 0; i < num; i++){
        box[i] = i + 1;
    }
    for(i = 0; i < num; i++){
        printf("box[%d]：%d\n", i, box[i]);
    }
    return 0;
}