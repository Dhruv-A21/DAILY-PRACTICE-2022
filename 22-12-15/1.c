#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int a[7];
	    int sum=0;
	    for(int i=0;i<7;i++){
	        scanf("%d",&a[i]);
	        sum=sum+a[i];
	    }
	    if(sum>3){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}
