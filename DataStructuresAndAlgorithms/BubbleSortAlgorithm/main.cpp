#include<iostream>

using namespace std;

void BubbleSort(int a[],int n){
    
    for(int count{0};count<=n-2;count++){
        for(int j{0};j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int n {};
    cin>>n;
    int a[n];
    for(int i{0};i<n;i++){
        cin>>a[i];
    }
    
    BubbleSort(a,n);
    
    for(int i{0};i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}