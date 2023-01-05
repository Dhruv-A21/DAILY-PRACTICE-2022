#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    float salary;
	    float DA,HRA;
	    scanf("%f",&salary);
	    if(salary<1500){
	        DA=0.9*salary;
	        HRA=0.1*salary;
	    }
	    else{
	        DA=0.98*salary;
	        HRA=500;
	    }
	    printf("%.2f\n",salary+DA+HRA);
	}
	return 0;
}
