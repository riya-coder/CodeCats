#include<stdio.h>
float grossSalary(float);

int main(){
	float basicSalary;
	
	printf("Enter basic salary:\n");
	scanf("%f",&basicSalary);
	
	printf("Gross Salary: %.2f",grossSalary(basicSalary));
	return 0;
}

float grossSalary(float basicS){
	float hra,da;
	
	if(basicS<=10000){
		hra=basicS+0.2;
		da=basicS+0.8;
	}
	
	else if(basicS>10000 && basicS<=20000){
		hra=basicS+0.25;
		da=basicS+0.9;
	}
	
	else{
		hra=basicS+0.3;
		da=basicS+0.95;
	}
	
	return basicS+hra+da;
		
}