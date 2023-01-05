#include <stdio.h>

int main(void) {
	int N,i=0;
	scanf("%d",&N);
	int score[N][2];
	for(i=0;i<N;i++){
	    for(int j=0;j<2;j++){
	        scanf("%d",&score[i][j]);
	    }
	}
	int Cscore[N][2];
	for(i=0;i<N;i++){
	    for(int j=0;j<2;j++){
	        if(i==0){
	            Cscore[i][j]=score[i][j];
	        }
	        else{
	            Cscore[i][j]=Cscore[i-1][j]+score[i][j];
	        }
	    }
	}
	int Lead[N][2];
	for(i=0;i<N;i++){
	    Lead[i][0]=1;Lead[i][1]=Cscore[i][0]-Cscore[i][1];
	    if(Lead[i][1]<0){
	        Lead[i][0]=2;Lead[i][1]=Cscore[i][1]-Cscore[i][0];
	    }
	}
	int max=0,k=0;
	for(i=0;i<N;i++){
	    if(max<Lead[i][1]){
	        max=Lead[i][1];
	        k=i;
	    }
	}
	printf("%d %d",Lead[k][0],Lead[k][1]);
	return 0;
}
