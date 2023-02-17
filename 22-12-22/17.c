#include <stdio.h>

int main(void) {
	int T,R;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&R);
	    if(R>=2000){
	        printf("1\n");
	    }
	    else if(R>=1600){
	        printf("2\n");
	    }
	    else{
	        printf("3\n");
	    }
	}
	return 0;
}
