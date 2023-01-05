#include <stdio.h>
#include <math.h>

int main(void) {
	int T,N,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&X);
	    int a=pow(2,X-N);
	    printf("%d\n",a);
	    
	}
	return 0;
}
