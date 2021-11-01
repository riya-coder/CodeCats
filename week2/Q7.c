int Z(long long int);
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	int long long arr[n];
	printf("Enter %d positive integers less than 10^9\n",n);
	
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	printf("No. of zeroes in above entered nos.:\n");
	for(i=0;i<n;i++)
		printf("%d\n",Z(arr[i]));
	return 0;	
}

int Z(long long int num){
	int sum=0;
	while(num>0){
		sum+=num/5;
		num/=5;
	}
	return sum;
}