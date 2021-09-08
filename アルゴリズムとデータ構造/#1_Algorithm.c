#include <stdio.h>

int search(int array2[], int num2, int ans2){
    int i;
    for(i = 0; i < num2; i++){
        if(array2[i] == ans2)
            return i;
    }
    return -1;
}

int main (void){
    int num;
    int ans;
    int array[num];
    int i;
    printf("配列の要素数は？");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        printf("%d番目：", i + 1);
        scanf("%d", &array[i]);
    }
    printf("探す数は？");
    scanf("%d", &ans);
    int result = search(array, num, ans);
    if(result == -1)
        printf("失敗です");
    else printf("%dは%d番目にありました", ans, result + 1);
    return 0;
}