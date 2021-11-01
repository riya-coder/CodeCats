#include<stdio.h>
int isLeap(int);

int main(){
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);
	
	if(isLeap(year))
		printf("%d is a leap year",year);
	else
		printf("%d is an ordinary year",year);
	return 0;
}

int isLeap(int year){
	if(year%100==0){
		if(year%400==0)
			return 1;
		else
			return 0;	
	}
		
	else if(year%4==0)	
		return 1;
	else
		return 0;	
		
}
