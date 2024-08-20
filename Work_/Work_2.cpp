#include <stdio.h>


int main(){
    int r =0,h=0;

    printf("Enter r : ");
    scanf("%d",&r);
    printf("Enter h : ");
    scanf("%d",&h);

    float area = 3.14*(r/2)*(r/2)*h;
    int time = area/1.5;
    int h_t = (time-time%3600)/3600;
    int m_t = (time%3600-time%3600%60)/60;
    int s_t = time%3600%60;
    printf("Time = h:%d m:%d s:%d ",h_t,m_t,s_t);

}