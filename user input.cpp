#include <iostream>

//cout << insertion operation
//cin << extraction operation

int main(){

std::string name;
int age;


std::cout << "what's your age?" <<'\n';
std::cin >> age;

std::cout <<"What's your name?:" << '\n';
//std::cin >> name;
std::getline(std::cin >> std::ws, name); //use this to write with space between the words, like to get a full name. using >>std::ws to clean the buffer.
//If you dont clean the buffer here, it wont let the user use the input because it is going to read '/n' in the memory and understand the line is done, which will print nothing.

//std::cout << "what's your age?" <<'\n';
//std::cin >> age;

std::cout << "Hello " << name <<'\n';
std::cout << "Your age is " << age;





return 0;
}
