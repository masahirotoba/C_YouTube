#include <stdio.h>

int by_search(int array2[], int num2, int ans2){
    int first = 0;
    int last = num2 - 1;
        do{
            int center = (first + last) / 2;
            if(array2[center] == ans2)
                return center;
            else if(array2[center] < ans2)
                first = center + 1;
            else last = center -1;
        }while (first <= last);
    return -1;
} 

int main (void){
    int num;
    int ans;
    int array[num];
    int i;
    printf("配列の要素数は？");
    scanf("%d", &num);
    printf("小さい方から入力して下さい\n");
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
    int result = by_search(array, num, ans);
    if(result == -1)
        printf("失敗です");
    else printf("%dは%d番目にありました", ans, result + 1);
    return 0;
} 