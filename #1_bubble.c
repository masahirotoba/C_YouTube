#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[128];
    int year;
    char country[128];
}User;

User arrray[] = {
    {"Abe", 21, "Japan"},
    {"Bob", 25, "America"},
    {"David", 24, "China"},
    {"Elon", 23, "France"},
    {"Steve", 22, "Japan"},
};

int compar (const void *key, const void *value){
    User key2 = *(User *)key;
    User value2 = *(User *)value;
    return strcmp(key2.name, value2.name);
}

int main (void){
    printf("名前による探索を行います\n");
    User temp;
    scanf("%s", temp.name);
    User *p = bsearch(&temp, arrray, 5, sizeof(User), compar);
    if(p == NULL)
        printf("失敗です");
    else printf("%d番目：%sさん %d歳 %s出身",
        (int)(p - arrray + 1),
        (*p).name,
        (*p).year,
        (*p).country
    );
    return 0;
}