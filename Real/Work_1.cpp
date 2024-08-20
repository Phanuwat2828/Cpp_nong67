#include <stdio.h>

int main(){
    int r =0;
    printf("Enter R : ");
    scanf("%d",&r);
    float lek = r*r*r; // ด้าน X ด้าน X สูง 
    float cycle = (float)4/3*3.14*((r/2)*(r/2)*(r/2));
    float total = lek-cycle;
    printf("%.2f",total);
}