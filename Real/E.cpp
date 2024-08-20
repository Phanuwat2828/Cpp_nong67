#include <stdio.h>


int main(){
   char name[10]; // input
   char *name_var ; // ค่าคงที่
   int income_week;
   printf("Enter name : ");
   scanf("%s",&name);
   printf("Enter income_week : ");
   scanf("%d",&income_week);
    int month= income_week*4;
    int year = month*12;
    float Bonus = 0;
    // 30000 
    if(month*10.25/100>30000){
        Bonus = year*0.75/100;
    }else{
        Bonus = year*1.75/100;
    }
    printf("%s \n Income year = %d\n Bonus = %.2f\n",name,year,Bonus);
}