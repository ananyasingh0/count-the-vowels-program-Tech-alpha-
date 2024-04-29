#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    int vowels = countVowels(input);
    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}
