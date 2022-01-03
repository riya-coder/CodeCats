#include<stdio.h>
#include<stdlib.h>
#include"disp.c"

int main(){
	int c;
	
	do{
		
		printf("\n===================================\n\n");
		printf("Welcome to INDIAN SHOPPING PORTAL\n");
		printf("===================================\n\n");
		printf("MENU\n\n");
		printf("1. Display Items\n");
		printf("2. Sign up\n");
		printf("3. Sign in\n");
		printf("4. Contact us\n\n");
		printf("0. Exit\n\n");
		printf("===================================\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		
		
		switch(c){
			case 1: display();  break;
			case 2: getchar(); signUp(); 
			case 3: break; Signin();
			case 4: break;
			case 0: exit(0); break;
			default: system("cls");
		} //system("cls");
		}while(c!=0);
	
	return 0;
}