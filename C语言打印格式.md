```
#include<stdio.h>
int main(){
    printf("The length is %d\n",8);
}
```
我们经常看到printf中的%d,%f等。这里做一下统一说明：

格式 | 含义
---|---
%d | 按照十进制整型数打印
%6d | 按照十进制整型数打印，至少6个字符宽
%f | 按照浮点数打印
%6f | 按照浮点数打印，至少6个字符宽
%.2f | 按照浮点数打印，小数点后保留两位小数
%6.2f | 按照浮点数打印，至少6个字符宽，小数点后保留两位小数
%o | 表示八进制数
%x | 表示十六进制数
%c | 表示字符
%s | 表示字符串
%% | 表示百分号(%)本身