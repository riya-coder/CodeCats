#include<stdio.h>
int isEven(int);

int main(){
	int num;
	printf("Input number:");
	scanf("%d",&num);
	
	if(isEven(num))
		printf("\nNumber is even");
	
	else
		printf("\nNumber is odd");
}

int isEven(int num){
	if(num%2==0){
		return 1;
	}
	return 0;
}