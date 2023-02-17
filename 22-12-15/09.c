#include <stdio.h>

int main(void) {
	int T,N,K;
	scanf("%d",&T);
	while(T){
	    scanf("%d %d",&N,&K);
	    int a[N][2];
	    int max=0;
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i][0]);
	        if(max<a[i][0]){
	            max=a[i][0];
	        }
	    }
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i][1]);
	    }
	    int sum=0;
	    //check
	    if(max<K){
	        sum=-1;
	        goto GLA;
	    }
	    //sort
	    for(int i=0;i<N-1;i++){
	        for(int j=0;j<N-1-i;j++){
	            if(a[j][1]>a[j+1][1]){
	                int temp0=a[j][0];
	                int temp1=a[j][1];
	                a[j][0]=a[j+1][0];
	                a[j][1]=a[j+1][1];
	                a[j+1][0]=temp0;
	                a[j+1][1]=temp1;
	            }
	        }
	    }
	    
	    
	    int k=0,dish=0;
	    
	    for(int i=0;i<N;i++){
	        if(a[i][0]==k){
	            continue;
	        }
	        if(dish>=K){
	            break;
	        }
	        k=a[i][0];
	        sum=sum+a[i][1];
	        dish=dish+1;
	    }
	    GLA:
	    printf("%d\n",sum);
	    
	    T=T-1;
	}
	return 0;
}
