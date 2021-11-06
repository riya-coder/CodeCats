#include<stdio.h>
void calNotes(int);

int main(){
	int amt;
	
	printf("Enter an amount:\n");
	scanf("%d",&amt);
	
	calNotes(amt);
	return 0;
}

void calNotes(int amt){
	int count_500=0,count_100=0,count_50=0,count_20=0,count_10=0,count_5=0,
	count_2=0,count_1=0;
	
	while(amt>0){
		if(amt>=500){
			count_500++;
			amt-=500;
		}
			
		else if(amt>=100){
			count_100++;
			amt-=100;
			
		}
			
		else if(amt>=50){
			count_50++;
			amt-=50;
		}
			
		else if(amt>=20){
			count_20++;	
			amt-=20;
		}
			
		else if(amt>=10){
			count_10++;	
			amt-=10;
		}
			
		else if(amt>=2){
			count_2++;
			amt-=2;
		}
			
		else{
			count_1++;	
			amt-=1;
		} 
								
	}
	
	printf("Notes:\n");
	printf("500 notes:%d\n",count_500);
	printf("100 notes:%d\n",count_100);
	printf("50 notes:%d\n",count_50);
	printf("20 notes:%d\n",count_20);
	printf("10 notes:%d\n",count_10);
	printf("5 notes:%d\n",count_5);
	printf("2 notes:%d\n",count_2);
	printf("1 notes:%d\n",count_1);
}