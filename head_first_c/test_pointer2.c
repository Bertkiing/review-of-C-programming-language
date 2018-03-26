#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void transfer_str(char str[])
{
	printf("the str is %s \n",str);	
	printf("the str occupies %i bytes \n",sizeof(str)); // 8
	printf("the str length %i \n",strlen(str)); // 13
} 

int main(){
	char chars[] = "My name is Bertking";
	printf("数组变量 的地址: %p \n",chars);
	printf("数组第一个元素的地址:%p \n",&chars[0]);
	
	/*
	* 我们可以发现，数组变量就是首元素的地址。 
	*/
	
	transfer_str(chars);
	return 0;
}
