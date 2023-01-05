#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int flag=0;
	    char s[N];
	    scanf("%s",&s);
	    for(int i=0;i<N/2;i++){
	        if(s[i]!=s[N/2 +i]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
