#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter the total numbers of element for the array:";
    cin>>a;
    int array [a] {};
    cout<<"Enter the array elements one by one:"<<endl;
    for(int i{0};i<a;i++){
        cin>>array[i];
    }
    cout<<"The elements of the array are: "<<endl;
    for(int i{0};i<a;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
     
    int start {0};
    int end {a-1};
    while(start <= end){
        swap(array[start],array[end]);
        
        start ++;
        end --;
    }
    
    cout<<"The reverse array is: "<<endl;
    for(int i{0};i<a;i++){
        cout<<array[i]<<" ";
    }
    
    
    
    cout<<endl;
    return 0;
}