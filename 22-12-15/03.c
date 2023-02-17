#include <stdio.h>

int main(void) {
	int T;
	float H,C,S;
	scanf("%d",&T);
	while(T--){
	    scanf("%f %f %f",&H,&C,&S);
	    int prod=1;
	    if(H>50){
	        prod=prod*2;
	    }
	    if(C<0.7){
	        prod=prod*3;
	    }
	    if(S>5600){
	        prod=prod*5;
	    }
	    switch (prod){
	        case 30:printf("10\n");
	                break;
	        case 6:printf("9\n");
	               break;
	        case 15:printf("8\n");
	               break;
	        case 10:printf("7\n");
	               break;
	        case 2:
	        case 3:
	        case 5:printf("6\n");
	               break;
	        case 1:printf("5\n");
	               break;
	        
	    }
	}
	return 0;
}
