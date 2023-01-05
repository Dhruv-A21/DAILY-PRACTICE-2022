#include <stdio.h>

int main(void) {
	int T,N,One=0,Neg=0,diff;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    One=0;Neg=0;
	    if(N%2==1){
	        printf("-1\n");
	    }
	    else{
	        for(int i=0;i<N;i++){
	            if(a[i]==1){
	                One++;
	            }
	            else{
	                Neg++;
	            }
	        }
	        diff=One-Neg;
	            if(diff<0){
	                diff=Neg-One;
	            }
	        printf("%d\n",diff/2);
	        
	    }
	}
	return 0;
}
