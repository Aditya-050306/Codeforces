#include<iostream>
using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + 32;
        }
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i]>= 'A' && s2[i] <= 'Z') {
            s2[i]+=32;
        }
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] < s2[i]) {
            cout << -1;
            return 0;
        }
        if (s1[i] > s2[i]) {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}