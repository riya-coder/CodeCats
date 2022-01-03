#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void signUp();
void Signin();
void display();
void addtocart();
bool  isLogin=false;

void Delay(){
	int delay,d;
	for(delay=0;delay<=30000;delay++){
		for(d=0;d<=30000;d++);
	}
}


struct User{
	char name[50];
	char add[100];
	int mob;
	char email[50];
	int pwd;
	
};
void signUp(){
	struct User u;
	
	printf("===================================\n");
	printf("SIGN UP\n");
	printf("===================================\n\n");
	printf("Enter Name:");
	fgets(u.name,50,stdin);
	printf("Address:");
	fgets(u.add,100,stdin);
	printf("Mobile number:");
	scanf("%d",&u.mob);
	printf("Email:");
	scanf("%s",u.email);
	printf("Password(only digits):");//password consists of digits
	scanf("%d",&u.pwd);
	
	
	FILE *p=fopen("signIn.txt","r");
	char buffer[50];
	int flag=1;
	if(p==NULL)
		goto ENTER;
	
	while(!feof(p)){
		fscanf(p,"%s",buffer);
		if(!(strcmp(buffer,u.email))){
			printf("\nEmail address already registered\nRegister using another email id or sign in\n");
			Delay();
			flag=0;
			break;
		}
	}
	fclose(p);
	ENTER: if(flag){
		printf("\nYou have successfully signed up. Your email address is your username\n");
		Delay();
	
	//FILE *fp=fopen("userdetail.txt","a");
	FILE *fp=fopen("user.txt","a");
	
	fprintf(fp,"%s\t%s\t%d\t%s\t%d\n",u.name,u.add,u.mob,u.email,u.pwd);
	fclose(fp);
	
	FILE *p=fopen("signIn.txt","a");
	fprintf(p,"%s\t%d\n",u.email,u.pwd);
	fclose(p);
	}
	
	else{
		printf("1. Sign up again\n");
		printf("2. Sign in\n");
		printf("3. Back to home page\n");
		printf("Enter your choice:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1: getchar(); signUp(); break;
			case 2: getchar(); Signin(); break;
			case 3: return;
			default: system("cls");
		}
	}
		
	
}

struct Item{
	int id;
	char name[50];
	float mrp;
	float gst;
	float price;
	float discount;
};



void display(){
	struct Item s[100];
	int i=0;
	FILE *fp=fopen("names.txt","r");
	
	for(i=0;i<3;i++){
		fscanf(fp,"%d",&s[i].id);
		getc(fp);
		fscanf(fp,"%s",s[i].name);
		getc(fp);
		fscanf(fp,"%f",&s[i].mrp);
		getc(fp);
		
		s[i].gst=0;
		if(s[i].mrp>500){
				s[i].gst=s[i].mrp*0.18;
				s[i].mrp=s[i].mrp+s[i].gst;
		}
		
		
		s[i].discount=0;
		if(s[i].mrp>600)
			s[i].discount=0.3*s[i].mrp;
		
		s[i].price=s[i].mrp-s[i].discount;	
	}
		
	fclose(fp);
	fp=fopen("price.txt","w");
	for(i=0;i<3;i++)
		fprintf(fp,"%d\t%.2f\n",s[i].id,s[i].price);
	fclose(fp);	
	printf("\t\t\t\t===================================\n");
	printf("\t\t\t\t\tCOLLEGE MUST HAVES\n");
	printf("\t\t\t\t===================================\n\n");
	printf("Product id\tProduct Name\t\tMRP\t\tGST\t\tDiscount\tBuy Price\n");
	printf("===================================================================================================\n\n");
	for(i=0;i<3;i++){
		printf("%d ",s[i].id);
		printf("\t\t%s  ",s[i].name);	
		printf("\t\t%.2f ",s[i].mrp);
		printf("\t\t%.2f ",s[i].gst);
		printf("\t\t%.2f ",s[i].discount);
		printf("\t\t%.2f\n",s[i].price);
		
	}
	getchar();
	printf("Do you want to add items to the cart?(y/n):");
	char ch;
		scanf("%c",&ch);
		if(ch=='y'){
			if(isLogin)
				addtocart();
			else{
				printf("Sign in or register to add items to the cart\n");
				getchar();
				Delay();
				printf("1. Sign in again\n");
				printf("2. Not registered? Sign up\n");
				printf("3. Back to home page\n");
				printf("Enter your choice:");
			int choice;
			scanf("%d",&choice);
			switch(choice){
				case 1: getchar(); Signin(); break;
				case 2: getchar(); signUp(); break;
				case 3: return;
				default: system("cls");
			}
				
			}	
		}
			
}


void addtocart(){
	int n,i;
	char ch;
	double bill=0;
	FILE *fp=fopen("price.txt","r");
	printf("How many items you want to purchase?:");
	scanf("%d",&n);
	int cart[n];
	printf("Enter the product id of the items you wish to place in the cart?\n");
	for(i=0;i<n;i++){
			scanf("%d",cart+i);
		while(!feof(fp)){
			int bufferid;
			fscanf(fp,"%d",&bufferid);
			if(bufferid==cart[i]){
				getc(fp);
				float amt;
				fscanf(fp,"%f",&amt);
				bill+=amt;
				break;
			}
				while((ch=getc(fp))!='\n');	
		}
	}
	fclose(fp);
	printf("BILL:%.2lf",bill);	
	
	Delay();
	
}



void Signin(){
	char username[50];
	int pass;
	printf("===================================\n");
	printf("SIGN IN\n");
	printf("===================================\n\n");
	printf("Enter username(email id):");
	fgets(username,50,stdin);
	printf("Enter password:");
	scanf("%d",&pass);
	
	FILE *p=fopen("signIn.txt","r");
	char buffern[50];
	int bufferp;
	if(p==NULL)
		goto WRONG;
	
	while(!feof(p)){
		fscanf(p,"%s %d",buffern,&bufferp);
		getc(p);
			if(bufferp==pass && (strcmp(buffern,username))){
			printf("Sign in successfull!!\n");
			Delay();
			isLogin=true;
			break;	
		}
	}
	fclose(p);
	WRONG: if(isLogin==false){
		printf("Wrong details\n");
		printf("1. Sign in again\n");
		printf("2. Not registered? Sign up\n");
		printf("3. Back to home page\n");
		printf("Enter your choice:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1: getchar(); Signin(); break;
			case 2: getchar(); signUp(); break;
			case 3: return;
			default: system("cls");
		}
	}
	else
	display();
	
}