int rev(int);
#include<stdio.h>

int main(){
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	
	printf("Reverse of %d is %d",num,rev(num));
	return 0;
}

int rev(int num){
	int rev_num,rem;
	for(rev_num=0;num>0;num=num/10){
		rem=num%10;
		rev_num=rev_num*10 + rem;
	}
	return rev_num;
}