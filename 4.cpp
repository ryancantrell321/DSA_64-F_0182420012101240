/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 01 July 2025

Assignment No: 1
Question No: 4
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
    int arr2[n]; //==> Array 2
    cout << "Array Input: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //==> array input newar lagi loop use koria cin use korram loop er vitore
    }

    cout << "Array 1: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;

    cout << "Array 2 [Copied]: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        arr2[i] = arr[i]; //==> loop diya amra array 2 te array 1 or values set korram
        cout << arr2[i] << " "; //==> array 2 er values output diar

    }
    cout << endl;


    return 0;
}
