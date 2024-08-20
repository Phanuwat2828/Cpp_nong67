#include <stdio.h>

int main(){
    int H=0,M=0,X=0,total=1800;
    printf("Enter H : ");
    scanf("%d",&H);
    printf("Enter M : ");
    scanf("%d",&M);
    printf("Enter X : ");
    scanf("%d",&X);
    printf("Start = %d:%d \n ",H,M);
    // 5 36 5 

    if((M=M+30)>=60){
        M=M-60;
        H=H+1;
    }
    if(M%2!=0){
        total=total+(X*60);
    }
    printf("End = %d:%d \n ",H,M);
    printf("Total Time = %d \n ",total);

    // 5:36 -> 30 m  = 6:6 -- > x 
}