/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 01 July 2025

Assignment No: 1
Question No: 9
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

    cout << "Even Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { //==> even array er lagi amra check korram amrar array er element even ni
            cout << arr[i] << " "; //==> result output or
        }
    }
    cout << endl;

    cout << "Odd Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {//==> odd array er lagi amra check korram amrar array er element odd ni
            cout << arr[i] << " "; //==> result output or
    }
    cout << endl;
    return 0;
}
