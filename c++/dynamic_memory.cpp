#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function named merge that takes two sorted integer arrays as input and returns
// another sorted array of integers that combines the elements from the input arrays.
// Keep in mind the restrictions that arrays have when passed to a function as an
// argument, especially regarding the ability to calculate their size. Test the function's
// correctness by implementing a program that utilizes the function to merge two sorted
// arrays. 

vector<int> merge(const int* arr1, int size1, const int* arr2, int size2){
    vector<int> result;
    int i = 0, j=0;

    // Loop through both arrays
    while(i < size1 && j < size2){

        //Check if arr1 value less than arr2 value 
        if (arr1[i] < arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            //If equal, append array 2 value anyways
            result.push_back(arr2[j]);
            j++;
        }

        // One array is finished, append rest of unfinished array
        while (i < size1){
            result.push_back(arr1[i++]);
        }

        while (j < size2){
            result.push_back(arr1[j++]);
        }

        return result;

    }
}


// Write a program that dynamically allocates memory for an array of integers of a given
// size, initializes the array with random values, prints the array, and then deallocates the
// memory. 

void arrayAllocate(int size){
    int* array = new int[size];
    //Initialize with random values
    for (int i = 0; i < size; i++){
        array[i] = rand() % 10;
    }
    //Print array
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    
    cout << endl;

    delete[] array;

}


// Write a program that dynamically allocates memory for a single integer using new,
// assigns a value to it, prints the value, and then deallocates the memory using delete. 

void intAllocate(int num){
    int* integer = new int(num);
    cout << *integer << endl;
    delete integer;
}


int main(){
    arrayAllocate(5);
}