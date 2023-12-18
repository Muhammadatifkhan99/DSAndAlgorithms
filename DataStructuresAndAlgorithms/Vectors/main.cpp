
#include<iostream>
#include<vector>

using namespace std;

int  main(){
    //the dynamic array class also functions like vectors but we have a built in
    // class vector we can use it...
//    vector<int> *vp = new vector<int>();
    vector<int> v;
    
    vector<int> v2(10,-2);   //all the values are initialized to -2 and this vector have
    //10 elements.....
    vector<int> v3(100);    //create a vector of given size.....
    
    for(int i{0};i<100;i++){
        cout<<"Capacity "<<v.capacity()<<endl;
        cout<<"Size "<<v.size()<<endl;
        v.push_back(i+1);
        
    }
    
    //sorting a vector
    sort(v2.begin(),v2.end());
//    for(int i{0};i<v.size();i++){
//        cout<<v[i]<<endl;
//    }
    cout<<endl;
    
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
    //never use square brackets with vectors because the size will not increase
//    v[3] = 40;
//    v[4] = 50;
    
//    v.push_back(60);
//    v.push_back(70);
//    
    
    //the at() function do bounds checking and verify if an index is valid or not
    //it will not retrieve a value which does not belongs to the vector
//    cout<<endl;
//    cout<<v.at(0)<<endl;
//    cout<<v.at(1)<<endl;
//    v.pop_back();   //pop_back the last element of the array
//    cout<<endl;
    //we can use v.at() or v[i] both are valid because the value of i will always be valid
//    for(int i{0};i<v.size();i++){
//        cout<<v[i]<<" ";
//    }
    cout<<endl;
    
//    cout<<v[0]<<endl;
//    cout<<v[1]<<endl;
//    cout<<v[2]<<endl;
//    cout<<v[3]<<endl;
//    cout<<v[4]<<endl;
    
    return 0;
}