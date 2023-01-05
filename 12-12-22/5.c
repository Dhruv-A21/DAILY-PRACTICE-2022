#include <stdio.h>

int main(void) {
	int T,x,m,d;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&x,&m,&d);
	    if(m*x<x+d){
	        printf("%d\n",m*x);
	    }
	    else{
	        printf("%d\n",x+d);
	    }
	}
	return 0;
}
