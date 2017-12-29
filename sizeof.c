
# include<stdlib.h>
# include<stdio.h>
# include<string.h>
int main(){
	printf("the length is %d \n",sizeof(""));//1
	printf("the strlen is %d \n",strlen(""));//0
	
	printf("the sizeof ABC is return:%d \n",sizeof("ABC"));//4
	printf("the strlen ABC is return:%d \n",strlen("ABC"));//3
} 
