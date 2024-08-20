#include <stdio.h>

int main(){
    float Money=0,Pay=0,Balance=0,Discount=0;
    printf("Enter Money : ");
    scanf("%f",&Money);
    if(Money>=3000000){
        Discount = 3000000*0.035;
        Pay = 3000000-Discount;
        Balance = Money-Pay;
        printf("Cottage \n Discount %.2f THB\n Pay %.2f THB\n Balance %.2f THB",Discount,Pay,Balance);
       
    }else if(Money>=2500000){
        Discount = 2500000*0.03;
        Pay = 2500000-Discount;
        Balance = Money-Pay;
        printf("Contemporary \n Discount %.2f THB\n Pay %.2f THB\n Balance %.2f THB",Discount,Pay,Balance);
    }else if(Money>=1000000){
         Discount = 1000000*0.025;
        Pay = 1000000-Discount;
        Balance = Money-Pay;
        printf("Modern style \n Discount %.2f THB\n Pay %.2f THB\n Balance %.2f THB",Discount,Pay,Balance);
    }else{
        printf("Money Not enough");
    }

    
}