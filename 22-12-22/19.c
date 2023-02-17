#include <stdio.h>

int main(void) {
	int T,g,c;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&g,&c);
	    printf("%d\n",(c*c)/(2*g));
	}
	return 0;
}
