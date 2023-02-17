#include <stdio.h>

int main(void) {
	int T,M,S;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&M,&S);
	    printf("%d\n",M/S);
	}
	return 0;
}
