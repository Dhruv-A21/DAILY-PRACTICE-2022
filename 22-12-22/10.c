#include <stdio.h>

int main(void) {
	int T,Z,Y,A,B,C;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d %d",&Z,&Y,&A,&B,&C);
	    if(Z-Y-A-B-C>=0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
