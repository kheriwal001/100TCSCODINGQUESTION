#include <bits/stdc++.h>
using namespace std;

int countWords(string s) {
    int count = 0;
    bool inWord = false;

    for (char ch : s) {
        if (ch != ' ' && !inWord) { 
            count++;  // Start of a new word
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;  // Reset when encountering space
        }
    }

    return count;
}

int main() {
    string str = "  HI   AMY  AND JAY  "; // Multiple spaces test
    cout << countWords(str);
}
