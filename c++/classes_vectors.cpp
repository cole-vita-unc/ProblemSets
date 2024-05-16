#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;


// // 1. Implement a function named isArmstrong that takes an integer and returns true if the number is an Armstrong number, 
// // and false otherwise. An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power 
// // of the number of digits.

bool isArmstrong(int num){
    int sum = 0;
    int size = 0;

    // Count number of digits in integer
    int temp = num;
    while(temp != 0){
        temp /= 10;
        size ++;
    }

    temp = num;

    while(temp != 0){
        // Get the last digit of the number
        int digit = temp % 10;
        //Raise each digit to power of size
        sum += pow(digit,size);
        //Remove last digit of temp 
        temp /= 10;
    }

    return sum == num;
       
}

// 2. Implement a function that takes a string and returns a new string with all the consonants removed. 
// The function should preserve the original order of the vowels in the string.

string removeConsonants(string str){
    string newStr;
    for(char c: str){
        // Use logical OR ||, instead of bitwise | 
       if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            newStr += c;
        }
    }
    return newStr;
}

// 3. Implement a function called replaceSubstring that takes a string, a substring to replace, and a replacement string as arguments. 
// The function should return a new string with all occurrences of the substring replaced by the replacement string.

string replaceSubstring(string str, string replace, string newSub){
    //Str.find returns type of size_t
    size_t position = str.find(replace);
    //Str.find returns npos when substring not found 
    while (position != string::npos) {

        str.replace(position, replace.length(), newSub);
        position = str.find(replace, position + newSub.length());
    }
    return str;
}

// 4. Implement the main function to test the implemented functions by prompting the user for input and displaying the results. 
// The main function should demonstrate the usage of each function with appropriate test cases.

// 5. Create a class called Circle with the following features:
class Circle{
//   - Private attributes for radius and center coordinates (x and y).
    private:
        double radius;
        double x;
        double y;

    public:
        //  - A constructor that takes the radius and center coordinates as arguments.
        Circle(double radius,double xCord, double yCord){
            radius = radius;
            x = xCord;
            y = yCord;
        }
        // - A default constructor that initializes the radius to 1 and center coordinates to (0, 0).
        Circle(){   
            radius = 1;
            x = 0;
            y = 0;
         }


        //   - A method called area() that calculates and returns the area of the circle.
        double area(){
            return M_PI * radius * radius;
        }

        //   - A method called circumference() that calculates and returns the circumference of the circle.
        double circumference(){
            return radius * 2 * M_PI;
        }



        //   - Overload the + operator to add two Circle objects, 
        //     returning a new Circle object with the sum of their radii and the average of their center coordinates.
        Circle operator+(Circle c1){
           double newRadius = this->radius + c1.radius;
            double newX = (this->x + c1.x) / 2;
            double newY = (this->y + c1.y) / 2;
            return Circle(newRadius, newX, newY);
        }
        
};

// 6. Implement a function that takes a vector of integers and returns the sum of the elements at even indices.

int vectorSum(const vector<int>& vect) {
    int sum = 0;
    for (int i = 0; i < vect.size(); i++) {
        if (i % 2 == 0) {
            sum += vect[i];
        }
    }
    return sum;
}

// 7. Create a class called Book with the following features:

class Book {
    //   - Private attributes for title, author, and publication year.
    private:
        string title; 
        string author; 
        int publicationYear;

    //   - A constructor that takes the title, author, and publication year as input.
    public:
        Book(string title, string author, string publicationYear){
            title = title;
            author = author;
            publicationYear = publicationYear;
        }

        string getTitle(){
            return title;
        }

        string getAuthor(){
            return author;
        }

        int getYear(){
            return publicationYear;
        }

        bool operator>(Book other){
            return publicationYear > other.publicationYear;
        }
};

//   - Private attributes for title, author, and publication year.
//   - A constructor that takes the title, author, and publication year as input.
//   - A method called getTitle() that returns the title of the book.
//   - A method called getAuthor() that returns the author of the book.
//   - A method called getYear() that returns the publication year of the book.
//   - Overload the > operator to compare two Book objects based on their publication year.

// 8. Implement a function that takes a vector of strings and returns a new vector with all the strings converted to uppercase.

vector<string> toUppercase(vector<string>& stringVector) {
    for (string& str : stringVector) {
        int size = str.size();
        for (int i = 0; i < size; i++) {
            str[i] = toupper(str[i]);
        }
    }
    return stringVector;
}


int main(){
    // int num = 153;
    // cout << isArmstrong(num) << endl;

    // string str = "axexixoxu";
    // cout << removeConsonants(str) << endl;

    string str = "catgeekcat";
    string replace = "cat";
    string newSub = "rum";
    
    cout << replaceSubstring(str,replace,newSub) << endl;

        
    Circle c1(3, 2, 2);
    Circle c2(4, 4, 4);
    Circle c3 = c1 + c2;
    cout << "Circle c3 radius: " << c3.area() << " circumference: " << c3.circumference() << endl;
    
}