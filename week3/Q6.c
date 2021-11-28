#include<stdio.h>
#include<limits.h>


int main(){
	int n,i;
	printf("Input Array Size:\n");
	scanf("%d",&n);
	printf("Input Array Elements:\n");
	int arr[n];
	
	int max=INT_MIN;
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
		if(arr[i]>max)
		max=arr[i];
	}
	
	int hash[max+1];
	for(i=0;i<max+1;i++)
		hash[i]=0;
		
	for(i=0;i<n;i++){
		int index=arr[i];
		hash[index]++;
	}
	
	int el;
	printf("Input Number:\n");
	scanf("%d",&el);
	
	if(el>=max+1)
		printf("%d is not present inthe array\n",el);
	else	
		printf("%d is present %d times in the array",el,hash[el]);
	
	return 0;
}