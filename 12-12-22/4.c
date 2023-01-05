#include <stdio.h>

int main(void) {
	int T,N,K;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&K);
	    printf("%d\n",(N/K)*(N/K));
	}
	return 0;
}
