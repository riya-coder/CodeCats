int armstrong(int);
#include<stdio.h>

int main(){
	int num;
	printf("Input number:\n");
	scanf("%d",&num);
	
	if(armstrong(num))
		printf("%d is an armstrong number",num);
	else
		printf("%d is not an armstrong number",num);	
	return 0;
}

int armstrong(int num){
	int temp=num,rem,sum=0;
	while(num>0){
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	
	if(sum==temp)
		return 1;
	return 0;	
	
}