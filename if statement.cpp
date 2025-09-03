#include <iostream>

//statements = do something if the condition is true. if not true, then dont do it.

int main()
{

int age;

std::cout << "Informe sua idade: ";
std::cin >> age;

if (age >= 100){
std::cout << "Você ja bateu as botas!";
}

else if (age >= 18){
std::cout << "Você pode dirigir";
}
else if (age < 0){
std::cout << "Você nem nasceu ainda!";
}
else{
std::cout << "Você não pode dirigir!";
}
return 0;
}
