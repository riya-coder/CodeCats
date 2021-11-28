void pattern(int);

int main(){
	int n;
	printf("Input number of rows:\n");
	scanf("%d",&n);
	
	pattern(n);
	return 0;
}

void pattern(int n){
	int i,j,space;
	for(i=1;i<=n;i++){
		
		for(space=i;space<n;space++)
			printf(" ");
		for(j=1;j<2*i;j++)
			printf("*");	
	printf("\n");		
	}
			
}   