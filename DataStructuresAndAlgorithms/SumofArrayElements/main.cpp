#include<iostream>

int main(){
    std::cout<<"Enter the total number of elements in the array"<<std::endl;
    int n{};
    std::cin>>n;
    //input
    int array [n] {};
    std::cout<<"Enter the elements of the array"<<std::endl;
    for(size_t i{0};i<n;i++){
        std::cin>>array[i];
    }
    std::cout<<"Array elements before finding the sum"<<std::endl;
    for(size_t i{0};i<n;i++){
        std::cout<<array[i]<<" ";
    }
    int sum {0};
    std::cout<<"The sum of the elements in the array is:";
    for(size_t i{0};i<n;i++){
        sum = sum + array[i];
    }
    std::cout<<sum<<std::endl;
    
    
    std::cout<<std::endl;
    return 0;
}