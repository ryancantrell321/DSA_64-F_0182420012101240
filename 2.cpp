/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 01 July 2025

Assignment No: 1
Question No: 2
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

    //==> ino amra array size hisabe n integer input nimu
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n]; //==> n sized array create korlam

    cout << "Array Input: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //==> array input newar lagi loop use koria cin use korram loop er vitore
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = n - 1; i >= 0; i--) {//==> i > 0 diya amra array loop kormu reverse order e after amra i re n - 1 index porjonto initialize korsi
        cout << arr[i] << " "; //==> array jegula input nisi otar reversed output korram
    }
    cout << endl;

    return 0;
}
