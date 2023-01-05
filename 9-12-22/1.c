#include <stdio.h>

int main(void) {
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    int total=X*(Y/Z);
	    if(Y%Z!=0){
	        total=total+X;
	    }
	    printf("%d\n",total);
	}
	return 0;
}
