// Searching Algorithms

#include <iostream>
using namespace std;

// linear search
int linearSearch(int arr[], int size, int key){
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            return key;
        }
    }
    
    return -1
}

// binary search
int binarySearch(int arr[], int size, int key){
    int left = 0, int right = size -1;
    
    while(left <= right){
        int middle = (left + right)/2;
        if(arr[middle] == key){
            return key;
        }
        else if(arr[middle] > key){
            right = middle - 1;
        }
        else{
            left = middle + 1;
        }
    }
    
    return key;
}


