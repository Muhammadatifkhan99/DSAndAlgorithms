#include <iostream>
using namespace std;
int main(){
    
    char str[100] {};
    cin>>str;
    cout<<"The string is "<<str<<endl;
    int count {0};
    for(int i{0};str[i] != '\0';i++){
        
        count ++;
    }
    cout<<"Output of the for loop "<<count<<endl;
    
    return 0;
}