#include <iostream>
#include <string>
using namespace std;

// Implement a program to reverse the elements of an integer array in-place
// void reverseInPlace(int arr[]){ //Naming convention for functions?


// Implement a function named isPalindrome that checks whether a string received as an
// argument is a palindrome or not. The function should not use generic algorithms.

bool isPalindrome(string str){
    int left = 0;
    int right = str.length() - 1;

    while(left < right){
        while (left < right && !isalnum(str[left])) ++left;
        while (left < right && !isalnum(str[right])) --right;

        if (tolower(str[left]) == tolower(str[right])){
            ++left;
            --right;
            continue;
        }
        else{
            return false;
        }
    }

    return true;

}

// Write a conversion operator that transforms a string into an integer, taking the numeric
// characters from it and converting it to an integer, ignoring the rest of the characters.
// For example, each of the following strings will return 12: " 12", "12", "12abc". 

int integerConvert(string str){
    int converted = 0;

    for(char ch : str){
        if (ch >= '0' && ch <= '9'){
            ch = ch - '0'; //Subtract '0' to get integer value
            converted = converted * 10 + ch;
        }
    }

    return converted;

}

// It seems reasonable to think that multiplying a string by a number involves repeating
// the string the given number of times. For example, "abc" * 3 = "abcabcabc". Implement
// a function that performs this operation. 

string multiplyString(string original_str, int num_times){
    string new_string = original_str;

    for(int i = 1; i < num_times; i++){
        new_string += original_str;
    }

    return new_string;
}

// Two words are said to be anagrams if they have the same characters but in a different
// order, such as the words "team" and "mate". Write a function that returns true if two
// strings are anagrams. 

bool isAnagram(string str1, string str2){
    if (str1.length() != str2.length()){
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}


// Implement a function named isLower that takes a character as an argument and returns
// true if the argument is a lowercase letter. 

bool isLower(char c){
    return c >= 'a' && c <= 'z';
}

// Implement a function named isDigit that takes a character as an argument and returns
// true if the argument is a digit. 

bool isDigit(char c){
    return c >= '0' && c <= '9';
}


// Create a program to find the largest element in an array of
// floating-point numbers

void largestElement(float arr[], int length){
    float largest = arr[0];

    for (int i = 1; i < length-1; i++){
        if (arr[i] > largest){
            largest = arr[i]; //Avoid accessing twice?
        }
    }
    
    cout << "Largest element: " << largest << endl;
}

//Write a program that calculates the sum of all elements in an integer array

int sum(int arr[], int length){
    int sum;
    //Loop through int array while adding
    for (int i = 0; i < length-1; i++){ 
        sum += arr[i];
    }
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
    // string word;
    // cout << "Enter a word \n";
    // cin >> word;
    // reverse(word);

        //Largest 
    // float arr[] = {2.6,3.6,3,2};
    // int length = 4;
    // largestElement(arr, length);

        // Order
    // string word1 = "aab";
    // string word2 = "aab";
    // order(word1,word2);

        //isAnagram
    // string str1 = "team";
    // string str2 = "mat";
    // cout << isAnagram(str1,str2) << endl;

        //multiplyString
    // cout << multiplyString("ab",1) << endl

        //integerConvert
    // cout << integerConvert("hfeo912fa3") << endl;

        //isPalindrome
    // cout << isPalindrome("nurses run") << endl;
    
}