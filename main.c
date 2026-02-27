#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit,celsius;

    //Get temperature in Fahrenheit from user
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fahrenheit);

    //Convert fahrenheit to celsius
    celsius=(fahrenheit-32)*5/9;

    //Print the result
    printf("Celsius %.2f",celsius);
    return 0;
}
