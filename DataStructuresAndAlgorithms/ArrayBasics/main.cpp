#include <iostream>

using namespace std;

int main() {
    
//    int intarray [5] {2,3,4,2,5};
//    for(size_t i{0};i<5;++i){
//        cout<<intarray[i]<<endl;
//    }
    
    //when we initialize an array with some values and other values are left non-initialize
    //they became zero by default such as demonstarted below
    
    int array1 [10] {1,2,3,4,5};
    cout<<"The first 5 values are initialized while the rest will be zero:"<<endl;
    for(size_t i{0};i<10;i++){
        cout<<array1[i]<<endl;
    }
    cout<<"For initializing only one value, checking the rest of values"<<endl;
    int array2 [10] {22};
    for(size_t i{0};i<10;++i){
        cout<<array2[i]<<endl;
    }
    
    //Garbage Values if a variable or an array is not initialized
    int arr[10] {};
    cout<<"Garbage values"<<endl;
    for(size_t i{0};i<10;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
    cout<<"Initializing Array through loop"<<endl;
    cout<<endl;
    
    int arr1 [10] {};
    for(size_t i{0};i<10;i++){
        arr1[i] = i*i;
    }
    for(size_t i{0};i<10;i++){
        cout<<arr1[i]<<" ";
        cout<<endl;
    }
    cout<<endl;
    
    //Sizeof
    cout<<"Size of Operator"<<endl;
    int a;
    cout<<"Size of int is:"<<sizeof(a)<<endl;
    int d[10] {1,3,4};
    cout<<"Szie of int array is:"<<sizeof(d)<<endl;
    
    cout<<endl;

}