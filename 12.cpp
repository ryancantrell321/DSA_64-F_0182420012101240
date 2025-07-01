/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 12
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

    int index; //==> je index touch kormu otar input nimu amra
    cout << "Enter the index you want to delete: ";
    cin >> index;

    while (index < n) {
        arr[index] = arr[index + 1];//==> amrar specified index delete koria amra next index o jairam
        index++;//==> loop cholte thakbo until condition is met and deletion thaki amrar array left e di shift korram
    }
    n = n - 1; //==> index size decrease korram due to deletion

    cout << endl;

    cout << "Updated Array: ";
    for (int i = 0; i < n; i++) { //==> Updated Array Output
        cout << arr[i] << " ";
    }

    return 0;
}
