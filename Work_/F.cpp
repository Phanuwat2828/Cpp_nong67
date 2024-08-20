#include <stdio.h>


int main(){
    float sigma=0,lamda=0;

    printf("Enter Sigma : ");
    scanf("%f",&sigma);
    printf("Enter Sigma : ");
    scanf("%f",&lamda);
    printf("Sigma is %.2f Lamda is %.2f\n",sigma,lamda);
    float Mass = sigma/((lamda*0.01)*(lamda*0.01));
    printf("Mass = %.2f\n",Mass);
    char *status;
    if(Mass>25){
        status = "Fat";
    }else{
        status = "Slender";
    }

    printf("You are %s",status);





    return 0;
}