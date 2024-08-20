//  Lab G.


#include <stdio.h>

int main(){
    float money=0;
    float discount=0,pay=0;
    printf("Enter Money : ");
    scanf("%f",&money);
    if(money>=3000000){
        discount = 3000000*0.035;
       pay= 3000000-discount;
       money = money-pay;
       printf("Cottage Style\n Discount : %.2f\n Pay : %.2f \n Balance : %.2f\n",discount,pay,money);

    }else if(money>=2500000){
       discount = 2500000*0.03;
       pay= 2500000-discount;
       money = money-pay;
       printf("Contemporary Style\n Discount : %.2f\n Pay : %.2f \n Balance : %.2f\n",discount,pay,money);

    }else if(money>=1000000){
       discount = 1000000*0.025;
       pay= 1000000-discount;
       money = money-pay;
        printf("Modern Style\n Discount : %.2f\n Pay : %.2f \n Balance : %.2f\n",discount,pay,money);
    }else{
        printf("Money Not enough");
    }
// 2m 1m 25k
// 1m 
}