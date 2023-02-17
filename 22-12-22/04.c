#include <stdio.h>

int main(void) {
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    if(X==Y){
	        printf("0\n");
	    }
	    else if(X<Y){
	        printf("%d\n",Y-X);
	    }
	    else{
	        int a=X-Y;
	        if(a%2==0){
	            printf("%d\n",a/2);
	        }
	        else{
	            printf("%d\n",(a/2)+2);
	        }
	    }
	}
	return 0;
}
