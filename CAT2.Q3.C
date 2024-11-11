#include<stdio.h>
int main(){
float hours_worked, hourly_ wage,gross_pay,tax,net_pay;
//prompt the user to enter details
printf("enter hours worked in a week:");
scanf("%f",&hours_worked);
printf("enter hourly wage:");
scanf("%f",&hourly_wage);
//calculating gross pay for overtime
if(hours_ worked>40){
grosspay=( 40*hourly_wage)+(hours_worked-40)*hourly_wage*1.5;
}else{
gross_pay= hours_ worked*hourly_wage
}
//calculate tax
if (gross_pay<=600){
tax=gross_pay*0.15;
}else {
tax=(600*0.15)+((gross_pay-600)*0.20);
}
//calculating net pay
net_pay=gross_pay-tax;
//print results
printf("grosspay:$%.2f\n",gross_pay);
printf("tax:$%.2f\n",tax);
printf("net pay:$%.2f\n",net_pay);
return 0;
}
