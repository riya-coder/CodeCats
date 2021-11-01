int prime(int);
#include<stdio.h>
#include<math.h>

int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	if(num==1){
		printf("1 is neither prime nor composite");
		return 0;
	}
	if(prime(num))
		printf("%d is prime",num);
	else
		printf("%d is not prime",num);	
	
	return 0;
}

int prime(int num){
	int i,s=sqrt(num),flag=1;
	for(i=2;i<s;i++){
		if(num%i==0)
			return 0;
	}
		
	return 1;
}