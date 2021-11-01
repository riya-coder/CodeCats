#include<stdio.h>
void sumN(int);

int main(){
	int n;
	printf("Enter number of natural numbers:\n");
	scanf("%d",&n);
	
	sumN(n);
	return 0;
}

void sumN(int n){
	int i,evensum=0,oddsum=0;
	
	printf("First %d natural numbers are:\n",n);
	for(i=1;i<=n;i++){
		if(i & 1)
			oddsum+=i;
		else
		  	evensum+=i;	
		printf("%d ",i);  	
	}
	printf("\nSum of odd numbers:%d",oddsum);
	printf("\nSum of even numbers:%d",evensum);
	
}