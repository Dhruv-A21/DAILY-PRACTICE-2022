#include <stdio.h>

int main(void) {
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    int a=Y/X;
	    if(a*X>=Y){
	        printf("%d\n",a-1);
	    }
	    else{
	        printf("%d\n",a);
	    }
	}
	return 0;
}
