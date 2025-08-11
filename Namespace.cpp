
#include <iostream>

namespace first{
int x = 1;
}

namespace second{
int x = 2;
}

int main (){

 //Namespace = provides a solution for preventing name conflicts in larger projects. Each entity needs a unique name.
 //a namespace allows for identically named entities as long as the space name are different.

 int x = 0;

std::cout << first::x <<'\n';
std::cout <<second::x;


 return 0;
}
