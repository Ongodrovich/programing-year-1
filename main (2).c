//*Program to calculate the simple reinterpret_cast
//preprocessor directive-scanf(),printf();
#include<stdio.h>
#include<math.h>
int main(){
    float Principal,Rate;
    double Simple_interest;
    int time;
    printf("Enter principal,rate and time\n");
    scanf("%f %f %d",&Principal,&Rate,&time);
    Simple_interest =(Principal*Rate*time)/100.0;
    printf("Amount = Rates.%0.2f\n",Principal);
    printf("Rate = Rates.%0.2f\n",Rate);
    printf("Time = %d years\n",time);
    printf("Simple interest = %0.2f\n",Simple_interest);
     
    return 0;
}