#include <iostream>

int main(int argc, char* argv[]){
    int array1[10]={1,2,3,4,5,6,7,8,9,10};
    int array2[10]={11,12,13,14,15,16,17,18,19,20};
    int* ptr1;
    int* ptr2;
    int* ptr_temp;

    ptr1 = &array1[0];
    ptr2 = &array2[0];
    std::cout<<"ptr1 array = ";
    for (int k = 0; k<10;k++){
        std::cout<<ptr1[k]<<"";
    }
    std::cout<<std::endl;
    
    std::cout<<"ptr2 array =";
    for (int k=0;k<10;k++){
        std::cout<<ptr2[k]<<"";
    }
    std::cout << std::endl;
    std::cout << std::endl;


    //Now switch the arrays around
    ptr_temp = ptr2;
    ptr2 = ptr1;
    ptr1 = ptr_temp;

    std::cout<<"ptr1 array =";
    for (int k =0;k<10;k++){
        std::cout<<ptr1[k]<<"";
    }

    std::cout<<std::endl;
    std::cout<<"ptr2 array = ";
    for (int k=0;k<10;k++){
        std::cout<<ptr2[k]<<"";

    }
    std::cout<<std::endl;

    return 0;

}