#include <stdio.h>

int main(void) {
	int T,items,price;
	long double total;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&items,&price);
	    total=(long double)items*price;
	    if(items>1000){
	        total=0.9*total;
	    }
	    printf("%Lf\n",total);
	}
	return 0;
}
