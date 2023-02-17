#include <stdio.h>

int main(void) {
    int N;
	while(1){
	    scanf("%d",&N);
	    if(N==0){
	        break;
	    }
	    else{
	        int flag=0;
	        int a[N];
	        for(int i=0;i<N;i++){
	            scanf("%d",&a[i]);
	        }
	        for(int k=0;k<N;k++){
	            if(a[a[k]-1]!=k+1){
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1){
	            printf("not ambiguous\n");
	        }
	        else{
	            printf("ambiguous\n");
	        }
	    }
	}
	return 0;
}
