#include <stdio.h>

int main(void) {
	int T,M,N,K;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&M,&N,&K);
	    if(M>N*K){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
