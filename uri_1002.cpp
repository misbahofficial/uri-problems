#include <iostream>
#include <stdio.h> // for printf function

int main(){

    double R{0};
    std::cin >> R;

    //Storing the area of the circule to the variable A using given formula
    double A{3.14159 * R * R};

    printf("A=%.4lf\n", A);


    return 0;
}