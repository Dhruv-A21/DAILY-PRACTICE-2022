#include <stdio.h>

int main(void) {
	int T,A,B,C;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&A,&B,&C);
	    if(A!=B && A!=C && B!=C){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
