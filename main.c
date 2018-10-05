/*
 * This program was made with the intention of applying the quadratic formula for any given a, b, and c values
 *
 * Mario Emilio Aguilar Chung
 * A01411210@itesm.mx
 * 10/04/2018
 */
#include <stdio.h>
#include <math.h>

double a;
double b;
double c;
double min = 0;
double max = 0;

//Establish the equation for when the discriminant will be subtracted
double minval (double a, double b, double c){
    double min = 0;
    min = ((0-b) - (sqrt(pow(b,2)-(4*a*c))))/(2*a);
    return min;
}
//Establish the equation for when the discriminant will be added
double maxval (double a, double b, double c){
    double max = 0;
    max = ((0-b) + (sqrt(pow(b,2)-(4*a*c))))/(2*a);
    return max;
}

int main() {
    //Greet the user, and ask for input
    printf ("Welcome to the program that will help you solve quadratic equations without having to memorize the quadratic formula \n");
    printf ("Give me the value of a: \n");
    scanf ("%lf", &a);
    //Establish that 0 cannot be a value for a
    while (a == 0) {
        printf ("Sorry, cannot divide by zero, please input another number: \n");
        scanf ("%lf", &a);
    }
    printf("Give me the value of b: \n");
    scanf ("%lf", &b);
    printf("Give me the value of c: \n");
    scanf ("%lf", &c);
//Send to the functions
    min = minval(a,b,c);
    max = maxval (a,b,c);

//Establish what happens when we have a negative root
    if (pow(b,2) < 4*a*c) {
        printf ("The value of the discriminant is negative. Therefore, there is no solution");
    }
    //Print results
    else {
        printf ("The lowest value of the root is %lf \n", min);
        printf ("The highest value of the root is %lf \n", max);
    }
    return 0;
}