#include <cstdlib>
#include <iostream>

// This program inputs two numbers x and y and outputs their sum 

int main(){
    int x, y;
    
    std::cout <<"Please enter two numbers: ";
    
    // input number1 and number2
    std::cin >>x >>y;
    
    // compute their sum                 
    int sum = x + y;
    
    std::cout <<"Their sum of " <<x <<" and " <<y <<" is "  <<sum << std::endl;

    // terminate successfully
    return EXIT_SUCCESS;
}