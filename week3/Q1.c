void pattern(int);

int main(){
	int n;
	printf("Input number of rows:\n");
	scanf("%d",&n);
	
	pattern(n);
	return 0;
}

void pattern(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf("*");
	printf("\n");		
	}
	
}   