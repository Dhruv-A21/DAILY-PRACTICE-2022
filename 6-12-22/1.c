#include<stdio.h>
int main(){
    printf("Vote Donald=Odd and Biden=Even\n");
    int a[3][5];
    for(int i=0;i<3;i++){
        printf("Votes for state %d:",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0){
                a[i][j]=0;
            }
            else if(a[i][j]%2==1){
                a[i][j]=1;
            }
        }
    }
    int D[3]={0,0,0},B[3]={0,0,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                D[i]++;
            }
            else{
                B[i]++;
            }
        }
    }
    int Do=0,Bo=0;
    for(int i=0;i<3;i++){
        if(D[i]>B[i]){
            printf("Donald won in state %d\n",i+1);
            Do++;
        }
        else{
            printf("Biden won in state %d\n",i+1);
            Bo++;
        }
    }
    if(Do>Bo){
        printf("Donald won Overall");
    }
    else{
        printf("Biden won Overall");
    }
    return 0;
}
