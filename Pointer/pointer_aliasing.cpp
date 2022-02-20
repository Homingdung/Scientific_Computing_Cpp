#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int row_number;
    int*p_rn;//pointer to store the address of an interger variable
    row_number = 20;
    p_rn = &row_number;
    std::cout<<"Memory address of row_number"<<p_rn<<std::endl;
    std::cout<<"Actual value of row_number"<<*p_rn<<std::endl;
    return 0;

}