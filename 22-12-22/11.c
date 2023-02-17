#include <stdio.h>

int main(void) {
	int T,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&X);
	    if(X<100){
	        printf("Easy\n");
	    }
	    else if(X<200){
	        printf("Medium\n");
	    }
	    else{
	        printf("Hard\n");
	    }
	}
	return 0;
}
