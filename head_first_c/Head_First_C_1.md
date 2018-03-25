```
/* 
* 史上最简单的C程序
* Only 打印 Hello,World.
*/
#include <stdio.h>

int main(){
    printf("Hello,World");
    return 0;
}

```

> 大学时期学C语言，一直对于C 都是爱恨交织，同时又有一种若即若离的感觉，虽然工作与C语言接触较少，但是对于C语言总有一种敬畏，亦可说是征服的欲望。故又考虑到考研的OS需要用到，So 捡起来... Head First 系列的书自不必多说，良师益友型...


### 常识
C 语言有三种标准：
1. ANSI C ---20世界80年代
2. C99    ---1999年制定的标准
3. C11    ---2011年发布的最新标准

对于上面hello.c 每句代码都有其存在的意义(存在即合理)
* 对于include语句：#include<stdio.h> 就是引用了C语言的标准IO库。类比于Java,JavaScript的import语句引入第三方库；

* 所有的C代码都在函数中运行。而main函数是程序中所有代码的起点(Think a twice,Java 之中不也是 main函数是入口...)。

**在ANSI C标准中，main()函数可以是void类型。但是在C99标准中main()函数的返回类型是int类型**

--------
>C语言是一种编译型语言，即计算机不会直接解释代码,而是需要将.c文件先编译为机器代码,Then the Computer can run...

为了编译代码,需要一个叫**编译器**的程序.

### 最流行的C编译器
1. **GNU编译器套件**(GNU Compiler Collection),(also known as GCC). 
很多系统都支持Gcc,Linux & Mac 都内置了Gcc,Window OS 需要自己去安装.[Window下玩转Gcc](https://blog.izgq.net/archives/841/)

2. GCC 支持 ANSI C、C99、C11这三种标准.

3. Use Gcc to compile and run code of C.
    1. 编译程序：gcc first.c -o first  初学者need to pay attention to 这里的first.c 指的是我们所写的源代码; 而-o 后面的 first 指的是编译后的可执行文件的名字,可以跟源代码名字不同。(建议保持一致)
    2. 运行程序: ./ first    执行可执行文件(./ 表示当前目录)

> 上述的两条命令可以由 && 连接符来合二为一：
即： gcc first.c -o first && ./first

4. 通过Gcc编译过的文件，在Window OS 下 的扩展名为first.exe ; 在类UNIX OS 下 only have a first 的文件; 


----
### C 语言不支持现成的字符串
> C语言相比于其他编程语言，抽象层次更低，因此它不直接提供字符串。而是以字符数组来代替。

It's so important that it should be repeated for 3 times.(重要的事情说3遍)

* C 语言使用字符数组来代替字符串;
* C 语言使用字符数组来代替字符串;
* C 语言使用字符数组来代替字符串;

即：字符串Only字符数组;

PS: 当我们使用C语言想要读取字符串中的内容时，它需要知道什么时候到达字符数组的尾部。但是C语言无法确定字符数组的长度，故C 语言加入了哨兵字符(\0)

