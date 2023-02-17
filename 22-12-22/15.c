#include <stdio.h>

int main(void) {
	int T,a,b,c,d;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    float diesel=(float)c/a;
	    float petrol=(float)d/b;
	    if(diesel<petrol){
	        printf("-1\n");
	    }
	    else if(petrol==diesel){
	        printf("0\n");
	    }
	    else{
	        printf("1\n");
	    }
	}
	return 0;
}
