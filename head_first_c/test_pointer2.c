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
	printf("������� �ĵ�ַ: %p \n",chars);
	printf("�����һ��Ԫ�صĵ�ַ:%p \n",&chars[0]);
	
	/*
	* ���ǿ��Է��֣��������������Ԫ�صĵ�ַ�� 
	*/
	
	transfer_str(chars);
	return 0;
}
