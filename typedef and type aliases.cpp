#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t
typedef std::string text_t;
typedef int number_t;
using number_t = int;
using text_t = std::string;

int main(){

 //typedef = reserved keyword use to create an additional name (alias) for another data type.
 // new identifier for an existing type helps with readbility and reduces typos.
 // Use when there is a clear benefit.

 text_t FirstName = "Pedrovski";
 number_t x = 3;

 std::cout <<FirstName << '\n';
 std::cout << x;



return 0;
}
