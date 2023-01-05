#include <stdio.h>
#include <math.h>

int main(void) {
	int T;
	float RS,B,LS;
	scanf("%d",&T);
	while(T--){
	    scanf("%f %f",&B,&LS);
	    RS=sqrt(LS*LS-B*B);
	    printf("%.5f ",RS);
	    RS=sqrt(LS*LS+B*B);
	    printf("%.5f\n",RS);
	}
	return 0;
}
