#include <stdio.h>

int main(){
    float sigma=0,lamda=0;
    char *status="";
    printf("Enter Sigma : ");
    scanf("%f",&sigma);
    printf("Enter Lamda : ");
    scanf("%f",&lamda);
    printf("Sigma is %.2f , Lamda is %.2f\n",sigma,lamda);
    float mass = sigma/((lamda*0.01)*(lamda*0.01));
    printf("Mass = %.2f\n",mass);
    if(mass>25){
        status = "FAT.";
    }else{
        status = "Slender";
    }
    printf("YOU ARE %s",status);
}