#include <iostream>

using namespace std;

int main(){
    int n{0};
    cout<<"Enter the number of elements for the array: ";
    cin>>n;
    
    int numbers[n] {};
    
    
    cout<<"Enter the array elements:";
    for(int i{0};i<n;i++){
        cin>>numbers[i];
    }
    cout<<"The array elements are: ";
    for(int i{0};i<n;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<"The array elements in reverse order are: ";
    for(int i{n-1};i>=0;i--){
        cout<<numbers[i]<<" ";
    }
    
    
    cout<<endl;
    return 0;
}