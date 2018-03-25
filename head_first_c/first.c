#include<stdio.h>
#include<stdlib.h>

int main()
{
    int decks;
    puts("输入有几副牌");
    scanf("%i",&decks);
    
    if(decks < 1){
        puts(" not support this param");
        return 1;
    }

    printf("Totally have %i 张牌\n",(decks * 52));

    return 0;
}