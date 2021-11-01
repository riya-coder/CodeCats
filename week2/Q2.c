int fact(int);
#include<stdio.h>

int main(){
	int num;
	printf("Input number:\n");
	scanf("%d",&num);
	if(num<0){
		printf("Factrial of negative number does not exist");
		return 0;
	}
		
	printf("Factorial of %d:%llu",num,fact(num));
	
	return 0;
}

int fact(int num){
	if(num==0 || num==1)
		return 1;
	return num*fact(num-1);	
}