#include <stdio.h>

int main(void) {
	int L,B,P,A;
	scanf("%d",&L);
	scanf("%d",&B);
	P=2*(L+B);
	A=L*B;
	if(P>A){
	    printf("Peri\n");
	    printf("%d",P);
	}
	else if(A>P){
	    printf("Area\n");
	    printf("%d",A);
	}
	else{
	    printf("Eq\n");
	    printf("%d",P);
	}
	return 0;
}
