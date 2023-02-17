#include <stdio.h>
#include <math.h>

int main(void) {
	int T,A,B,small,big;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&A,&B);
	    small=A;big=B;
	    if(small>big){
	        small=B;
	        big=A;
	    }
	    int flag=0;
	    int imax=log2((big/small))+1;
	    for(int i=0;i<=imax;i++){
	        int a=small*pow(2,i);
	        if(a==big){
	            flag=1;
	            break;
	        }
	        
	        
	    }
	    if(flag==1){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
