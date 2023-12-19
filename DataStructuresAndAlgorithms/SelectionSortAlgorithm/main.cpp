#include<iostream>
#include<limits.h>
using namespace std;

void SelectionSort(int inputarray [],int n){
    /*for(int i{0};i<=n-2;i++){
        //instead of INT_MAX we can use the first element of the given array 
        //to avoid the heachache of using the limits.h file which can slow our processing
        int smallest =INT_MAX;
//        int minIndex = i;
        for(int j{i+1};j<=n-1;j++){
            if(inputarray[j] < smallest)
                smallest = inputarray[j];
        }
        if(inputarray[i] > smallest){
        swap(inputarray[i],smallest);
    }
    }*/
    for(int i{0};i<=n-2;i++){
        int smallest = i;
        for(int j{i+1};j<=n-1;j++){
            if(inputarray[j] < inputarray[smallest]){
                smallest = j;
            }
        }
        swap(inputarray[i],inputarray[smallest]);
    }
}



int main(){
    int n;
    cin>>n;
    int inputarray[n];
    for(int i{0};i<n;i++){
        cin>>inputarray[i];
    }
    SelectionSort(inputarray,n);
    
    for(int i{0};i<n;i++){
        cout<<inputarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}