#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    int count=0;
	    //Whisper wrong
	    for(int i=0;i<N-1;i++){
	        if(a[i]!=a[i+1]){
	            count=count+2;
	            if(i>0){
	                if(a[i]!=a[i+1] && a[i]!=a[i-1]){
	                count--;
	                } 
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

