#include <stdio.h>

int main(void) {
	int T,N;
	int a[6]={100,50,10,5,2,1};
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int n=N,sum=0;
	    for(int i=0;i<6;i++){
	        sum=sum+n/a[i];
	        n=n%a[i];
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
