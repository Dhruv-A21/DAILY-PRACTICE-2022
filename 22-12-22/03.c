#include <stdio.h>

int main(void) {
	int T,A,B,C,D;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d",&A,&B,&C,&D);
	    int X=C/A;
	    int Y=D/B;
	    if(C%A!=0){
	        X++;
	    }
	    if(D%B!=0){
	        Y++;
	    }
	    printf("%d\n",X+Y);
	}
	return 0;
}
