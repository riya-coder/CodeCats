#include<stdio.h>
void Wday(int);

int main(){
	int wno;
	
	printf("Enter a week number:\n");
	scanf("%d",&wno);
	
	Wday(wno);
	return 0;
}

void Wday(int wno){
	switch(wno){
		case 1: printf("Monday"); break;
		case 2: printf("Tuesday"); break;
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
		case 7: printf("Sunday"); break;
		default: printf("Invalid Input");
	}
	
	
}