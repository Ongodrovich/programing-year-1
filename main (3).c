// Program to calculate compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float p, r;
    double Compound_interest;
    int t, n;

    // Input principal, rate, number of times interest applied per time period, and time period
    printf("Enter principal (p), rate (r), number of times interest applied per time period (n) and time (t in years):\n");
    scanf("%f %f %d %d", &p, &r, &n, &t);
    
    Compound_interest = p * pow((1 + r / (n * 100)), n * t);
   
    printf("Principal = %.2f\n", p);
    printf("Rate = %.2f\n", r);
    printf("Time = %d years\n", t);
    printf("n = %d number of times interest applied per year\n", n);
    printf("Compound Interest = %.2f\n", Compound_interest);
     
    return 0;
}
