#include <iostream>
#include <cmath>

int main(){

double a;
double b;
double c;

std::cout << "Informe lado A: ";
std::cin >> a;

std::cout << "Informe lado B: ";
std::cin >> b;

//a = pow(a,2);
//b = pow(b,2);

c = sqrt(pow(a, 2) + pow(b, 2)); //Code using less lines

std::cout << "O lado C é: " << c;

return 0;
}
