#include <iostream> //isostream is a header file that contains functions for basic input put and output operations.


int main(){

int x; //declaration
int y; // int or integer can only store whole numbers
int sum;

double a; //double is a variable to include decimal number
double reais = 10.02;
double temperature = 25.1;

char initial = 'A'; //single character

bool student = false; //Boolean can only have two states: true or false.
bool power = true; // if it's on = true, if it's off = false

std::string name = "pedro"; // string: objetcs that represents a sequence of text

x = 5;
y = 6;
a = 3.5;
sum = x + y;


std::cout << x <<'\n';//assignment
std::cout << y << '\n';
std::cout << sum << '\n';
std::cout << temperature << '\n';
std::cout << initial << '\n';
std::cout << student << '\n';
std::cout << name << '\n';




return 0;

}
