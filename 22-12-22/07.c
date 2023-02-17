#include <stdio.h>

int main(void) {
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(Z<X+Y){
	        printf("TRAIN\n");
	    }
	    else if(Z==X+Y){
	        printf("EQUAL\n");
	    }
	    else{
	        printf("PLANEBUS\n");
	    }
	}
	return 0;
}
