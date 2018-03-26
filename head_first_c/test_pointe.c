#include<stdio.h>
#include<stdlib.h>

int y = 1;

void change_value(int x){
	x -= 1;
} 

void change_val(int * val){
	*val -= 1;
}

int main(){
	int x = 4;
	// %p 用来格式化地址
	
	// &运算符- 找出变量在存储器上的地址 
	printf("x 保存在 %p \n",&x); 
	
	change_value(x);
	printf("x is %d \n",x); // 4
	change_val(&x);
	printf("Now x is %d \n",x); // 3
	return 0;
} 
