#include <iostream> //isostream is a header file that contains functions for basic input put and output operations.


//the const keyword specifies that a variable1's value is constant
//tells the compiler to prevent anything from modifying it
//read-only
//const are named with uppercase


int main(){

const double PI = 3.14159;// to avoid for example letting someone to chance our variable pi and thus changing our result, we add const at the variable.
double radius = 10;
double circumference = 2 * pi * radius;

std::cout <<circumference << "cm";


}
