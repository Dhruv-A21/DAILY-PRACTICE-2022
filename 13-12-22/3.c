#include <stdio.h>

int main(void) {
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    int diff=Y-X;
	    if(diff<0){
	        diff=X-Y;
	    }
	    if(diff%2==1){
	        printf("%d\n",diff/2 + 1);
	    }
	    else{
	        printf("%d\n",diff/2);
	    }
	}
	return 0;
}
