#include<stdio.h>
char grade(float);

int main(){
	float phy,chem,bio,math,comp;
	
	printf("Enter marks of physics,chem,bio,math and computer: \n");
	scanf("%f %f %f %f %f",&phy,&chem,&bio,&math,&comp);
	
	float per=(phy+chem+bio+math+comp)/5;
	
	printf("Percentage: %.2f %%\n",per);
	printf("Grade: %c",grade(per));
	
	return 0;
}

char grade(float per){
	if(per>=90)
		return 'A';
	else if(per>=80)
		return 'B';
	else if(per>=70)
		return 'C';
	else if(per>=60)
		return 'D';
	else if(per>=40)
		return 'E';
	else
		return 'F';					
}