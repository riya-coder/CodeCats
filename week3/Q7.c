#include<stdio.h>
#include<limits.h>

int main(){
	int n,i;
	printf("Input Array Size:\n");
	scanf("%d",&n);
	
	int arr[n],max=INT_MIN,min=INT_MAX;
	printf("Input Array Elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];	
	}
	
	printf("The largest element is %d\n",max);
	printf("The smallest element is %d\n",min);
	
	int smax=INT_MIN,smin=INT_MAX;
	for(i=0;i<n;i++){
		if(arr[i]==max || arr[i]==min)
			continue;
		if(arr[i]>smax)
			smax=arr[i];	
		if(arr[i]<smin)
			smin=arr[i];
						
	} 	
	printf("Second largest is %d\n",smax);
	printf("Second smallest is %d\n",smin);
	
	return 0;
}