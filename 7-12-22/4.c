#include <stdio.h>

int main(void) {
	int T,N,C,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&N,&X,&C);
	    int a[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    int coin=0,sum=0;
	    for(int i=0;i<N;i++){
	        if(X-a[i]>C){
	            a[i]=X;
	            coin=coin+C;
	        }
	        sum=sum+a[i];
	    }
	    printf("%d\n",sum-coin);
	    
	}
	return 0;
}
