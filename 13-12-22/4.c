#include <stdio.h>

int main(void) {
	int T,N,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&X);
	    int a=N/3;
	    int price=2*a*X;
	    if(N%3!=0){
	        price+=(N%3)*X;
	    }
	    printf("%d\n",price);
	}
	return 0;
}
