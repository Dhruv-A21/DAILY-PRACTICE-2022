#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X>Y){
	        printf("LOSS\n");
	    }
	    else if(X<Y){
	        printf("PROFIT\n");
	    }
	    else{
	        printf("NEUTRAL\n");
	    }
	}
	return 0;
}
