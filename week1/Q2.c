#include<stdio.h>
void findMax(int,int);

int main(){
	int num1,num2;
	
	printf("Enter 2 nos.\n");
	scanf("%d %d",&num1,&num2);
	
	findMax(num1,num2);

	return 0;
}

void findMax(int num1,int num2){
	if(num1>num2)
		printf("%d is maximum\n",num1);
	
	else if(num2>num1)
		printf("%d is maximum\n",num2);	
		
	else
		printf("Numbers are equal\n");	
}