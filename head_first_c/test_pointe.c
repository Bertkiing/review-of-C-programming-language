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
	// %p ������ʽ����ַ
	
	// &�����- �ҳ������ڴ洢���ϵĵ�ַ 
	printf("x ������ %p \n",&x); 
	
	change_value(x);
	printf("x is %d \n",x); // 4
	change_val(&x);
	printf("Now x is %d \n",x); // 3
	return 0;
} 
