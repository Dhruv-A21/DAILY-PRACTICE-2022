#include <stdio.h>

int main(void) {
	int T,N,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&X);
	    printf("%d\n",(2*N+1)-X);
	}
	return 0;
}
