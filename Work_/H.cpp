#include <stdio.h>

int main(){
    int h=0,m=0,x=0;
    int total =1800;

    printf("Enter H : ");
    scanf("%d",&h);
    printf("Enter M : ");
    scanf("%d",&m);
    printf("Enter X : ");
    scanf("%d",&x);
    printf("Start = %d:%d\n",h,m);
    if((m+=30)>=60){ 
        h+=1;
        m-=60; 
    }
    if(m%2 != 0 ){
        total+= x*60;
    }
    printf("End = %d:%d\n",h,m);
    printf("Total = %d",total);



}