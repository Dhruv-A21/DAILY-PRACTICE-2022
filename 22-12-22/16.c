#include <stdio.h>

int main(void) {
	int T,A,B;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&A,&B);
	    int diff=B-A;
	    if(diff%3==2){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}
