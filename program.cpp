#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
    double area[3];
    double pi;
    double a[3]={5.0,1.0,4.5};
    int b[2][3]={{1,-4,-3},{8,-2,9}};

    pi = M_PI;
    area[0] = pi;
    area[1] = pi*4;
    area[2] = pi*9;
    std::cout<<area[0]<<std::endl;
    std::cout<<area[1]<<std::endl;
    std::cout<<area[2]<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;

}