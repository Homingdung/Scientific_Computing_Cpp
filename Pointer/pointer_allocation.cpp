#include <istream>

int main(int argc, char* argv[]){
    int *p_i;//integer pointer
    double *p_d;//real pointer
    p_i=new int;
    p_d=new double;
    *p_i=5;
    *p_d=4.0;
    delete p_i;
    delete p_d;
    return 0;
}