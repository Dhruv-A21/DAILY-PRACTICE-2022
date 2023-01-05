#include <stdio.h>

int main(void) {
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(Y-X<=2*Z){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
