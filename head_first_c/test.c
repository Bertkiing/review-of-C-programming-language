/**
 * C语言是一种很小的语言，如果不使用外部库，它几乎什么也干不了。
 * 为了告诉编译器程序要使用哪些外部代码，需要包含(include)相关库的头文件。
 * stdio.h是最常见的头文件[std是标准(standard的缩写),io是(input/output的缩写)];
 * In a word, stdio 就是 标准的输入/输出库，即可以在终端读写数据的代码。
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
    puts("Hello,World");
    return 0;
}