#include <stdio.h>

int main(void) {
	int T,k;
	scanf("%d",&T);
	while(T--){
	    
	    scanf("%d",&k);
	    if(k%2==1){
	        printf("%d\n",(k-1)+3);
	    }
	    else{
	        printf("%d\n",k);
	    }
	}
	return 0;
}
