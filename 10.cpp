/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 10
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
    int n, i;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n]; //==> n sized array create korlam

    cout << "Array Input: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i]; //==> array input newar lagi loop use koria cin use korram loop er vitore
    }

    cout << "Original Array: ";
    for (i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;

    int q;
    cout << "Enter element to insert: ";
    cin >> q;

    cout << "Updated Array: ";
    arr[i] = q; //==> array er index er last e new value insert korram

    for (i = 0; i <= n; i++) {
        cout << arr[i] << " "; //==> updated array display korram
    }


    return 0;
}


