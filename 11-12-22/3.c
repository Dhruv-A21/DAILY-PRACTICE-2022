#include <stdio.h>

int main(void) {
	int T,N,count=0;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int S[N];
	    int D[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&S[i]);
	    }
	    for(int i=0;i<N;i++){
	        scanf("%d",&D[i]);
	    }
	    count=0;
	    for(int i=0;i<N;i++){
	        if(S[i]==D[i]){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}
