/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 6
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

    cout << "Unique Array Elements: ";
    for (int i = 0; i < n; i++) {
        //==> array er value gular moddhe traverse korram
        int j = 0;
        while (j < i) {
            if  (arr[i] == arr[j]) {//==> both traversals o dekhram same value ase ni
                break;
            }
            j++;
        }
        if (i == j) { //==> //==> duplication exclusion er bade judi duita index mili jay, amra just otar upre base koria ith unique index print kormu
            cout << arr[i] << " ";
        }
    }

    cout << endl;


    return 0;
}
