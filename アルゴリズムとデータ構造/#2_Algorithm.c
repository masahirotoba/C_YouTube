#include <stdio.h>

int search(int array2[], int num2, int ans2){
    int i = 0;
    array2[num2] = ans2;
    while(1){
        if(array2[i] == ans2)
            break;
        i++;
    }
    if(i == num2)
        return -1;
    else return i;
}

int main (void){
    int num;
    int ans;
    int array[num+1];
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