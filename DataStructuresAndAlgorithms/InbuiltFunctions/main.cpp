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

void mystrcpy(char str1[],char str2[]){
    for(size_t i{0};i<strlen(str2);i++){
        str1[i] = str2[i];
    }
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;
}

int main(){
//    cout<<"Enter str1: ";
//    char str1 [100] {};
//    cin.getline(str1,100);
//    cout<<"Enter str2: ";
//    char str2 [100] {};
//    cin.getline(str2,100);
//    cout<<"str1: "<<str1<<endl;
//    cout<<"str2: "<<str2<<endl;
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    cout<<"The length of the str1 is: "<<len1<<endl;
//    cout<<"The length of the str1 is: "<<len2<<endl;
//
//    cout<<"Comparing the two strings: "<<endl;
//    cout<<strcmp(str1,str2)<<endl;
//    if(strcmp(str1,str2) == 0){
//        cout<<str1<<" and "<<str2<<" are same "<<endl;
//    }
//    else{
//        cout<<str1<<" and "<<str2<<" are not same "<<endl;
//    }
//    cout<<boolalpha;
//    cout<<"The out put of our own defined ftn: "<<mystrcmp(str1,str2)<<endl;
    
//    cout<<"THE STRING COPY FUNCTION"<<endl;
//    char one [100] {"abc"};
//    char two [100] {""};
//    cout<<"Before Copying the strings "<<endl;
//    cout<<"string 1 "<<one<<endl;
//    cout<<"string 2 "<<two<<endl;
//    strcpy(two,one);    //this function also copies the null character
//    cout<<"After copy "<<endl;
//    cout<<"string 1 now "<<one<<endl;
//    cout<<"string 2 now "<<two<<endl;
//    
//    cout<<"\n==========User defined strcpy()=========="<<endl;
//    mystrcpy(two,one);
    
    //String n Copy function i.e strncpy
    char hello [100] {"abc"};
    char str2 [100] {"hello"};
    cout<<hello<<" before copying"<<endl;
    strncpy(hello,str2,4);
    cout<<hello<<" After copying"<<endl;
    
    //String concatenation
    for(size_t i{0};i<strlen(str2);i++){
        hello[strlen(hello)+i] = str2[2];
    }
    cout<<hello<<endl;

    return 0;
}                