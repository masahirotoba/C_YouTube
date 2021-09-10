#include <stdio.h>
#include <stdlib.h>

int compar (const void *key, const void *value){
    int key2 = *(const int *)key;
    int value2 = *(const int *)value;
    if(key2 < value2)
        return -1;
    else if(key2 > value2)
        return 1;
    else return 0;
}

int main (void){
    int num;
    int array[num];
    int ans;
    int i;
    printf("配列の要素数は？");
    scanf("%d", &num);
    printf("昇順に入力して下さい\n");
    printf("1番目：");
    scanf("%d", &array[0]);
    for(i = 1; i < num; i++){
        do{
            printf("%d番目：", i + 1);
            scanf("%d", &array[i]);
        }while(array[i] < array[i-1]);
    }
    printf("探す数は？");
    scanf("%d", &ans);
    int *result = bsearch(&ans, array, num, sizeof(int), compar);
    if(result == NULL)
        printf("失敗です");
    else printf("%dは%d番目にありました", ans, (int)(result - array + 1));
    return 0;
}