#include <stdio.h>

int main(void) {
	int T,d,x,y,z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d",&d,&x,&y,&z);
	    int A=x*7;
	    int B=y*d+z*(7-d);
	    if(A>B){
	        printf("%d\n",A);
	    }
	    else{
	        printf("%d\n",B);
	    }
	}
	return 0;
}
