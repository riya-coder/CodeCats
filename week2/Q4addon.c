void prime(int,int);
#include<stdio.h>
#include<math.h>

int main(){
	int stno,endno;
	printf("Enter starting and ending number of range:\n");
	scanf("%d %d",&stno,&endno);
	
	prime(stno,endno);
	return 0;
}

void prime(int stno, int endno){
	int i,j;
	printf("Prime numbers in this range:\n");
	for(i=stno;i<=endno;i++){
		if(i==1)
			i++;
		int flag=1;	
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			}	
		}
		if(flag==1)	
			printf("%d\t",i);
	}
}