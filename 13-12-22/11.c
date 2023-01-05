#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N][2];
	    int max[12]={0};
	    for(int i=0;i<N;i++){
	        for(int j=0;j<2;j++){
	            scanf("%d",&a[i][j]);
	        }
	    }
	    for(int i=0;i<N;i++){
	        if(max[a[i][0]]<a[i][1]){
	            max[a[i][0]]=a[i][1];
	        }
	   }
	   int sum=0;
	   for(int i=0;i<9;i++){
	       sum=sum+max[i];
	   }
	   printf("%d\n",sum);
	}
	return 0;
}
