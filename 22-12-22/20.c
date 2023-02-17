#include <stdio.h>

int main(void) {
	int T,a,b;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&a,&b);
	    if((a+b)%2==1){
	        printf("Alice\n");
	    }
	    else{
	        printf("Bob\n");
	    }
	}
	return 0;
}
