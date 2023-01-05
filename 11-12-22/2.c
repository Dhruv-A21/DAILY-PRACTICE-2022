#include <stdio.h>
#include <math.h>

int main(void) {
	int T,A,B;
	long int N;
	scanf("%d",&T);
	while(T--){
	    scanf("%ld %d %d",&N,&A,&B);
	    int matches=log2(N);
	    printf("%d\n",(matches*A)+((matches-1)*(B)));
	}
	return 0;
}
