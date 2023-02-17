#include <stdio.h>

int main(void) {
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(A==B || A==C || B==C){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
	return 0;
}
