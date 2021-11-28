#include<stdio.h>
void sumEvOd(int[],int);


int main(){
	int n,i,sum=0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
		sum+=arr[i];
	}
	printf("Sum of all elements of array:%d\n",sum);
	sumEvOd(arr,n);
	return 0;
}

void sumEvOd(int arr[],int n){
	int i,eveel,oddel,evepos,oddpos;
	eveel=oddel=evepos=oddpos=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
			eveel+=arr[i];
		else
			oddel+=arr[i];
			
		if(i%2==0)
			evepos+=arr[i];
		else
			oddpos+=arr[i];
	}
	
	printf("%d is sum of even elements\n",eveel);
	printf("%d is sum of odd elements\n",oddel);
	printf("%d is sum of even position elements\n",evepos);
	printf("%d is sum of odd position elements\n",oddpos);

}

