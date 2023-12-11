#include<iostream>
using namespace std;

class DynaminArray {
private:
        int *data {};
        int nextIndex {};
        int capacity {};
public:
    DynamicArray(){
        data = new int [5];
        nextIndex = 0;
        capacity = 5;
    }
    void add(int element){
        if(nextIndex == capacity){
            capacity = 2 * capacity;
            int *newData = new int [capacity];
            for(int i{0};i<capacity;i++){
                newData[i] = data[i];
            }
            delete []data;
            data = newData; 
        }
        data[nextIndex] = element;
        nextIndex++;
    }
  int getElement(int i){
      if(i>0 && i< nextIndex){
      return data[i];
      }
      else 
          return -1;
  }  
};