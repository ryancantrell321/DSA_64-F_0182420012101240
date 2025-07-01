/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 11
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

    int index, item;
    cout << "Enter the index you want to add an element to: ";
    cin >> index;

    cout << "Enter the element you want to add: ";
    cin >> item;

    int j = n - 1; //==> new element add dibar age amra last index consider korram based on array size
    while (j >= index) {//==> array er majhe amra travel korte thakmu as long as amrar insertion index reach kori na
        arr[j + 1] =  arr[j]; //==> amrar existing element re right side e soraisi with the help of j--
        j--; //
    }

    n = n + 1; //==> Array size increased by 1
    arr[index] = item; //==> selected index o new element insert korram amra

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++) { //==> Array Output after update
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


