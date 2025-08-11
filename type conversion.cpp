#include <iostream>

int main (){

//type conversion = conversion a value of one data type do another
// implicit = automatic
// explicit = Precede valeu with new data type


//double x = (int) 3.14;

//char x = 100; or std::cout << (char) 100; - same result!

int correct = 8;
int question = 10;


double score = correct/(double)question * 100;

std::cout << score << "%";


return 0;
}
