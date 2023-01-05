#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    char s[N];
	    scanf("%s",s);
	    for(int i=0;i<N/2;i++){
	        if(s[2*i]=='0'){
	            if(s[2*i+1]=='0'){
	                printf("A");
	            }
	            else{
	                printf("T");
	            }
	        }
	        else{
	            if(s[2*i+1]=='0'){
	                printf("C");
	            }
	            else{
	                printf("G");
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}
