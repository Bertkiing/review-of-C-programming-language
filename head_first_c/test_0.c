/**
 *头文件：#include <stdlib.h>
atoi() 函数用来将字符串转换成整数(int)，其原型为：

int atoi (const char * str);

【函数说明】atoi() 函数会扫描参数 str 字符串，
跳过前面的空白字符（例如空格，tab缩进等，可以通过 isspace() 函数来检测），
直到遇上数字或正负符号才开始做转换，而再遇到非数字或字符串结束时('\0')才结束转换，
并将结果返回。
 *  
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char card_name[3];
    puts("输入牌名: ");
    scanf("%2s",card_name);

    int val = 0;
    
    switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            // 关于 atoi函数
            val = atoi(card_name);
            break;
    }

    printf(" the num is : %i \n ",val);
    return 0;
}