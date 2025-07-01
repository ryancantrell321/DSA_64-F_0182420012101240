/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 7
Topic: Array Manipulation in C++

Course: Data Structures Sessional
Course Code: CSE-2112
Course Teacher: Nahidul Islam
Institution: Leading University, Sylhet

Language: C++
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int c = 0; //==> c value 0 te initialize korram loop or baire

    //==> ino amra array size hisabe n integer input nimu
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n]; //==> n sized array create korlam

    cout << "Array Input: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //==> array input newar lagi loop use koria cin use korram loop er vitore
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;

    cout << "Frequency: " << endl;
    for (int i = 0; i < n; i++) {//==> amrar array input o traverse korram
        c = 0; //==> counter or value initially 0 rakhram
        for (int j = 0; j < n; j++) { //==> amrar previously selected index er loge check korer kuno mil ase ni.
            if (arr[i] == arr[j]) {
                c++; //==> judi ola thake taile frequency counter increase oite thakbo for each occurrences
            }
        }
        cout << arr[i] << " Occurs " << c << " times" << endl; //==> amra frequency of each element display korram
    }

    return 0;
}
