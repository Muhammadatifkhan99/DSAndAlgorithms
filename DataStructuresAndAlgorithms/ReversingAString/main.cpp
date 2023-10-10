#include<iostream>

using namespace std;

int length(char input[]){
    int count {0};
    for(int i{0};input[i] != '\0';i++){
        count ++;
    }
    return count;
}
void reverse(char str []){
    int s = {0};
    int e = length(str) - 1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main(){
    
    char str [] {};
    cin>>str;
    cout<<"The string before reverse is: "<<endl;
    reverse(str);
    cout<<"Reverse string is: "<<str<<endl;
    
    
    return 0;
}