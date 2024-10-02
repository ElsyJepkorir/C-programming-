#include<stdio.h>
int main (){
int age;
float annual_income;

printf("enter your age:");
scanf("%d",&age);

printf("enter your annual_income in shillings:");
scanf("%f",&annual_income);

if(age>=21&annual_income>=21000){
printf("congratulations you qualify for a loan ");
}
else {
printf("unfortunately ylou don't qualify for a loan this time");
}

return 0;

}

