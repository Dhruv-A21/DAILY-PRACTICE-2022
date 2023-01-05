#include <stdio.h>

int main(void) {
	int T,N,X,Y,A,B;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d %d",&N,&X,&Y,&A,&B);
	    float a=((float)N/A)*X;
	    float b=((float)N/B)*Y;
	    if(a<b){
	        printf("PETROL\n");
	    }
	    else if(a>b){
	        printf("DIESEL\n");
	    }
	    else{
	        printf("ANY\n");
	    }
	}
	return 0;
}
