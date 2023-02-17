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
	    //sort
	    for(int i=0;i<N-1;i++){
	        for(int j=0;j<N-1-i;j++){
	            if(a[j]>a[j+1]){
	                int temp=a[j];
	                a[j]=a[j+1];
	                a[j+1]=temp;
	            }
	        }
	    }
	    int sum=0;
	    for(int i=0;i<N;i++){
	        if(a[i]>i+1){
	            sum=-1;
	            break;
	        }
	        else{
	            sum=sum+((i+1)-a[i]);
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
