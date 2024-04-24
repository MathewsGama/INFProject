#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::count_if

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    string vowels = "AEIOUaeiou";
    return count_if(str.begin(), str.end(), & {
        return vowels.find(c) != string::npos;
    });
}

// Function to reverse a string
string Reverse(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string CapitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalizeNext = true;

    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            }
            else {
                capitalizeNext = true;
            }
        }
    }

    return result;
}

int main() {
    ifstream inFile("your_text_file.txt"); // Replace with your actual file name
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    string word;

    // Read the entire file into fileData
    while (inFile >> word) {
        fileData += word + " ";
    }

    // Remove trailing space
    fileData.pop_back();

    // Calculate and output the number of vowels
    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    // Calculate and output the number of words
    int numWords = count(fileData.begin(), fileData.end(), ' ') + 1;
    cout << "Number of words: " << numWords << endl;

    // Reverse the statement and output
    string reversedStatement = Reverse(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize the second letter of each word and output
    string capitalizedStatement = CapitalizeSecondLetter(fileData);
    cout << "Capitalized statement: " << capitalizedStatement << endl;

    return 0;
}
