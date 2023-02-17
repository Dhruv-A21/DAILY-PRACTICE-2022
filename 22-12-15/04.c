#include <stdio.h>

int main(void) {
	int T,A,B,M;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&A,&B,&M);
	    int big=B,small=A;
	    if(big<A){
	        big=A;
	        small=B;
	    }
	    int a=big-small;
	    int b=(M+small)-big;
	    if(a<b){
	        printf("%d\n",a);
	    }
	    else{
	        printf("%d\n",b);
	    }
	}
	
	return 0;
}
