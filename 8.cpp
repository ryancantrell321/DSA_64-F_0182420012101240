/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 8
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

    int max = 0; int min = 0; //==> max and min value 0 te initialize korram loop or baire

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

    cout << "Maximum element in the Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[max]) { //==> check korram amrar array er value kita array er maximum thaki beshi ni.
            max = i; //==> judi beshi oy taile amra max variable ta update korram to store larger element
        }

    }
    cout << arr[max] << " " << endl;

    cout << "Minimum element in the Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[min]) {//==> check korram amrar array er value kita array er minimum thaki kom ni.
            min = i; //==> judi kom oy amra lowest value update korram min o.
        }
    }
    cout << arr[min] << " " << endl;


    return 0;
}
