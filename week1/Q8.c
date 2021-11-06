#include<stdio.h>
void roots(float,float,float);

int main(){
	float a,b,c;
	
	printf("Enter coefficients of x^2,x and the constant term:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	roots(a,b,c);
	
	return 0;
}

void roots(float a,float b,float c){
	if(a==0){
		printf("It's not a quadratic equation.");
		return;
	}
	
	float root1, root2;
	float D=b*b - 4*a*c;
	
	if(D>0){
		root1=(-b+sqrt(D))/(2*a);
		root2=(-b-sqrt(D))/(2*a);
		printf("Real and distinct roots: %.2f, %.2f",root1,root2);
	}
	
	else if(D==0){
		root1=root2=-b/2*a;	
		printf("Real and equal roots: %.2f",root1);
	}
	
	else{
		root1=root2=(sqrt(-D))/2*a;
		float root=-b/2*a;
		printf("Imaginary and distinct roots: %.2f+%.2fi, %.2f-%.2fi",root,root1,root,root2);
	}
			
}


