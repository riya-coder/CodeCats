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
	int i,sum=0;
	
	printf("First %d natural numbers are:\n",n);
	for(i=1;i<=n;i++){
		sum+=i;
		printf("%d ",i);
	}
	printf("\nSum:%d",sum);
}