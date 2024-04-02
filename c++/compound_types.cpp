#include <iostream>
#include <string>
using namespace std;

// Implement a program to reverse the elements of an integer array in-place
void reverseInPlace(int arr[]){ //Naming convention for functions?

}


// Create a program to find the largest element in an array of
// floating-point numbers

void largest_element(float arr[]){
    // int length = arr.length(); //Length of integer array?
    // float largest = arr[0];

    // for (int i = 1; i < length-1; i++){
    //     if (arr[i] > largest){
    //         largest = arr[i]; //Avoid accessing twice?
    //     }
    // }
    
    // cout << "Largest element: " << largest << endl;

    //How to use for-each in integer array?: 
    // for (float element : arr){ 
        
    // }
}


//Write a program that calculates the sum of all elements in an integer array

int sum(int arr[]){
    // int length = arr.length(); // how to do length of integer array?
    // int sum;
    // //Loop through int array while adding
    // for (int i = 0; i < length-1; i++){ 
    //     sum += arr[i];
    // }
}

//Write a program that reads two words from the user and prints a 
//message indicating which word comes first in lexicographic order.

void order(std::string word1, std::string word2){
    //TODO: Use a ternary operator to print while checking?

    if (word1 < word2){ // < indicates word1 before word2 in lexiographic order
        cout << word1 << " comes before " << word2 << endl; 
    }
    else if (word2 < word1){
        cout << word2 << " comes before " << word1 << endl; 
    }
    else {
        cout << "The words are equal \n";
    }
}


// Write a program that reads a word from the user and prints it in reverse.
void reverse(string word){
    int length = word.length();

    // Swap characters from beginning to end 
    for (int i = 0; i < length / 2; i++){
        char temp = word[i]; //temp for char on left of swap
        word[i] = word[length - 1 - i]; //set left side to right side 
        word[length - 1 - i] = temp;
    }

    cout << "Reversed word: " << word << endl; 
}

//Using std::reverse function
void reverse2(string word){
    reverse(word.begin(),word.end());
    cout << "Reversed word: " << word << endl; 
}

// Write a program that asks the user to enter
// their name and age. Then, use string operators to 
// format amessage that greets the user and includes their age.

void greet(){
    std::string name;
    int age;

    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Enter your age \n";
    cin >> age;

    cout << "Hello, " << name << ", " << age << ", " << "nice to meet you! \n";
    
}

int main(){
        // Reverse
    string word;
    cout << "Enter a word \n";
    cin >> word;
    reverse(word);

        // Order
    // string word1 = "aab";
    // string word2 = "aab";
    // order(word1,word2);

        // Sum
    
}