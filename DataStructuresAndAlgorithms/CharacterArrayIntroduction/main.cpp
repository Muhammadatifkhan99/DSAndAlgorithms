#include <iostream>

int main(){
    char name[100] {};
    std::cin>>name;
    std::cout<<name<<std::endl;
    
    name[3] = 'd';
    name[4] = 'x';
    //This will keep printing what ever garbage values it encounters until it finds one of 
    //garbage value that is null i.e'\0'
    std::cout<<name<<std::endl;
    
    
    
    std::cout<<std::endl;
    return 0;
}