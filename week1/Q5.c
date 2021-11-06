#include<stdio.h>
void checkChar(char);

int main(){
	char ch;
	
	printf("Enter a character:\n");
	scanf("%c",&ch);
	
	checkChar(ch);
	return 0;
}

void checkChar(char ch){
	if((ch>='A' && ch<='Z')||(ch>='a'&& ch<='z'))
		printf("%c is an alphabet",ch);
	else if(ch>='0'&& ch<='9')
		printf("%c is a digit",ch);	
	else
		printf("%c is a special character",ch);	
	
}