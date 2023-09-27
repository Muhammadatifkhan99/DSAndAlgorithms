#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    
    cout<<"Finding the largest element in the array"<<endl;
    int a;
    cout<<"Enter the total numbers of element for the array:";
    cin>>a;
    int array [a] {};
    cout<<"Enter the array elements one by one:"<<endl;
    for(size_t i{0};i<a;i++){
        cin>>array[i];
    }
    cout<<"The elements of the array are: "<<endl;
    for(size_t i{0};i<a;i++){
        cout<<array[i]<<" ";
    }
    
    int largest = INT_MIN;
    int smallest= INT_MAX;
    cout<<"\nThe INT_MIN is: "<<INT_MIN<<endl;
    cout<<"\nThe INT_MAX is: "<<INT_MAX<<endl;
    cout<<endl;
    
    cout<<"Displaying the laregest element in the array";
    for(size_t i{0};i<a;i++){
        if(array[i] > largest){
            largest=array[i];
        }
        if(array[i] < smallest){
            smallest = array[i];
        }
        }
    cout<<largest<<endl;
    cout<<endl;
    cout<<"The smallest values is: "<<smallest<<endl;
    
    
    
    
    cout<<endl;
    return 0;
}