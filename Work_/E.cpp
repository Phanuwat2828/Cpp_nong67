#include <stdio.h>


int main(){
    
    char name[15];
    int income_week;
    printf("Enter Name : ");
    scanf("%s",&name);
    printf("Enter income : ");
    scanf("%d",&income_week);
    int month = income_week*4;
    int year = month*12;
    int status_bonus = month*10.25/100;
    float bonus=0;
    if(status_bonus>30000){
        bonus= year*0.75/100;
    }else{
        bonus= year*1.75/100;
    }
    printf("%s\nIncome Year = %d\nBONUS = %.2f\n",name,year,bonus);


}