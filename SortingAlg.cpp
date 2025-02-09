// Sorting algos

#include <iostream>
using namespace std;

// selection Sort
void selectionSort(int array[], int size){
    int minIndex;
    int minValue;
    
    for(int i=0; i < size-1; i++){
        minIndex = i;
        minValue = array[i];
        for(int j = i+1; j < size; j++){
            if(array[j] < minValue){
                minIndex = j;
                minValue = array[j];
            }
        }
        swap(array[minIndex], array[i]);
    }
}

// bubble Sort
void bubbleSort(int array[], int size){
    bool swapped;
    for(int i = 0; i < size - 1; i++){
        swapped = false;
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j+1] < array[j]){
                swap(array[j+1], array[j]);
                swapped = true;
            }
        }
        
        if(!swapped){
            break;
        }
    }
}


