/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 02 July 2025

Assignment No: 1
Question No: 5
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

    cout << "Array 1: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;

    int d_count = 0; //==> duplicate count re 0 te initialize korram
    for (int i = 0; i < n; i++) {//==> array er value gular moddhe traverse korram
        for (int j = 0; j < i; j++) {//==> array er value er majhe traverse korram ager traversal er upre dependent oiya
            if (arr[i] == arr[j]) {//==> both traversals o dekhram same value ase ni
                d_count++;//==> judi thake taile counter increase korram 1 ta bad diya baki sob consider koria
                break;
            }
        }
    }
    cout << "Duplicate Count: " << d_count << endl;
    cout << endl;


    return 0;
}
