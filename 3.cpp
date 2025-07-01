/*
Author: Farhan Nadim Iqbal
GitHub: github.com/ryancantrell321
Date: 01 July 2025

Assignment No: 1
Question No: 3
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

    cout << "Array: ";
    for (int i = 0; i < n; i++) {//==> i < n diya amra array loop kormu forward order e
        cout << arr[i] << " "; //==> array jegula input nisi ota output korram
    }
    cout << endl;


    int sum = 0; //==> sum variable initialize korlam 0 te
    int p = 0; //==> array traversal er lagi p variable set korlam 0 te
    while (p < n){ //==> ino dekhmu amra je p kita n times porjonto traverse korte parbo ni
        sum += arr[p]; //==> judi pare taile amra sum variable add kormu amrar array input er values sobtir loge.
        p++; //==> amrar dorkar forward array traversal so forward korram
    }
    cout << "Sum of Array elements: " << sum << endl; //==> loop er baire overall sum print diar so that single sum value print oy


    return 0;
}
