#include <stdio.h>
int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int count=0;
	    if(N==1){
	        printf("no\n");
	    }
	    else{
	        for(int i=2;i<=N/2;i++){
	            if(N%i==0)
	            count++;
	        }
	        if(count==0){
	            printf("yes\n");
	        }
	        else{
	            printf("no\n");
	        }
	   }
	}
	return 0;
}
