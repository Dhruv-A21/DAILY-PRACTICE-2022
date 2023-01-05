#include <stdio.h>

int main(void) {
	int T,A,C,B;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&A,&C);
	    B=(A+C)/2;
	    if((A+C)%2==0){
	        printf("%d\n",B);
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}
