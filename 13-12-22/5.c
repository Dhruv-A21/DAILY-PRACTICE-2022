#include <stdio.h>

int main(void) {
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    int x=X/2;
	    int fruits=x;
	    if(x>Y){
	        fruits=Y;
	    }
	    printf("%d\n",fruits);
	}
	return 0;
}
