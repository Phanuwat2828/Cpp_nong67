#include <stdio.h>


int main(){
    int radius=0;
    printf("Enter radius : ");
    scanf("%d",&radius);
    float cycle = (float)4/3*3.14*((radius/2)*(radius/2)*(radius/2));
    
    printf("%.2f",(radius*radius*radius)-cycle);
}