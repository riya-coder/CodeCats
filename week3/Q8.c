#include <stdio.h>

int main(void) {
	int T=1,G=1,I=1,N=5,Q=1;
	printf("Input T:\n");
	scanf("%d",&T);
	
	while(T--){
		printf("Input G:\n");
	    scanf("%d",&G);
	    while(G--){
	    	printf("Input I,N,Q:\n");
	        scanf("%d %d %d",&I,&N,&Q);
	    
	        if(N%2==0 || I==Q)
	           printf("%d\n",N/2);
	         else
	            printf("%d\n",(N/2+1));
	    }     
	}
	
	return 0;
}