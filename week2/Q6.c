int power(int,int);

int main(){
	int base, exp;
	printf("Enter base and exponent:\n");
	scanf("%d %d",&base,&exp);
	printf("Power:%d",power(base,exp));
	return 0;
}

int power(int base,int exp){
	int i,product=1;
	for(i=1;i<=exp;i++){
		product*=base;
	}
	return product;
}