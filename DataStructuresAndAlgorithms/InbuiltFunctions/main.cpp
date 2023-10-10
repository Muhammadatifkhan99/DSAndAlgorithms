#include<iostream>
#include<cstring>

using namespace std;

bool mystrcmp(char str1[],char str2[]){
    if(strlen(str1) != strlen(str2)) return false;
    for(size_t i{0};str1[i] != '\0';i++){
        if(str1[i] != str2[i])
        return false;
    }
        return true;
}

int main(){
    cout<<"Enter str1: ";
    char str1 [100] {};
    cin.getline(str1,100);
    cout<<"Enter str2: ";
    char str2 [100] {};
    cin.getline(str2,100);
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    cout<<"The length of the str1 is: "<<len1<<endl;
    cout<<"The length of the str1 is: "<<len2<<endl;

    cout<<"Comparing the two strings: "<<endl;
    cout<<strcmp(str1,str2)<<endl;
    if(strcmp(str1,str2) == 0){
        cout<<str1<<" and "<<str2<<" are same "<<endl;
    }
    else{
        cout<<str1<<" and "<<str2<<" are not same "<<endl;
    }
    cout<<boolalpha;
    cout<<"The out put of our own defined ftn: "<<mystrcmp(str1,str2)<<endl;
    
    return 0;
}                