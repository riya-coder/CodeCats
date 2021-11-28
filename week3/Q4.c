void pattern(int);

int main(){
	int n;
	printf("Input N(no. of rows in upper triangle of X):\n");
	scanf("%d",&n);
	
	pattern(n);
	return 0;
}

void pattern(int n){
	int i,s,space,temp=n-1;
	for(i=1;i<=n;i++){
		for(space=1;space<i;space++)
			printf(" ");
		printf("*");
		if(i!=n){
			for(s=1;s<2*temp;s++)
			printf(" ");
		
		printf("*");
		temp--;	
		}	
			
	printf("\n");		
	}
	
	temp=n-1;
	for(i=1;i<n;i++){
		for(space=1;space<temp;space++)
			printf(" ");
		temp--;
		printf("*");
		for(s=1;s<2*i;s++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	
			
}   