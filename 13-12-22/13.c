#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int n=N;
	    int a,b=0;
	    while(n>0){
	        a=n%10;
	        b=b*10+a;
	        n=n/10;
	    }
	    if(b==N){
	        printf("wins\n");
	    }
	    else{
	        printf("loses\n");
	    }
	}
	return 0;
}
