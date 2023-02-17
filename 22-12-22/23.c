#include <stdio.h>

int main(void) {
	int T,L,R;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&L,&R);
	    int count=0;
	    for(int i=L;i<=R;i++){
	        int a=i%10;
	        if(a==2 || a==3 || a==9){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
