#include <stdio.h>

int main(void) {
	int T,A,B,diff;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&A,&B);
	    diff=B-A;
	    if(diff%2==0){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}
