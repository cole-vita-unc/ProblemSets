#include <iostream>
#include <string>

using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = findMax(5, 10);
    cout << "Max of 5 and 10: " << intMax << endl;

    double doubleMax = findMax(3.14, 2.71);
    cout << "Max of 3.14 and 2.71: " << doubleMax << endl;

    string strMax = findMax(string("apple"), string("banana"));
    cout << "Max of 'apple' and 'banana': " << strMax << endl;

    return 0;
}