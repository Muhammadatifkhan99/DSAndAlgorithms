
#include<iostream>
#include<vector>

using namespace std;

int  main(){
    //the dynamic array class also functions like vectors but we have a built in
    // class vector we can use it...
    vector<int> *vp = new vector<int>();
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //never use square brackets with vectors because the size will not increase
//    v[3] = 40;
//    v[4] = 50;
    
    v.push_back(60);
    v.push_back(70);
    cout<<v.at(0)<<endl;
    cout<<v.at(1)<<endl;
//    cout<<v[0]<<endl;
//    cout<<v[1]<<endl;
//    cout<<v[2]<<endl;
//    cout<<v[3]<<endl;
//    cout<<v[4]<<endl;
    
    return 0;
}