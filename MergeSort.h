#ifndef MERGESORT_H
#define MERGESORT_H
#include <iostream>

using namespace std;

void merge( int arr[], int low, int mid, int high )
{
    int i, j, k = low;

    // n1: size of the new part left of array, n2: size of the new part right of array
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // leftside and rightside of array initialize
    int *Left = new int[n1];
    int *Right = new int[n2];

    // element of array divide
    for( i=0; i<n1; i++ ){
        Left[i] = arr[low+i];
    }
    for( i=0; i<n2; i++){
        Right[i] = arr[mid+i+1];
    }

    // merge leftside and rightside together
    i = 0;
    j = 0;
    while( i<n1 && j<n2 ){
        arr[k++] = (Left[i] <= Right[j]) ? Left[i++] : Right[j++];
    }

    // check which part are not merged
    while( i<n1 ) arr[k++] = Left[i++];
    while( j<n2 ) arr[k++] = Right[j++];
}


void mergeSort( int arr[], int low, int high )
{
    if( low < high ){
        int mid = low + ( high - low ) / 2; // middle point calculate
        mergeSort( arr, low, mid );         // recursiv for leftside
        mergeSort( arr, mid+1, high );      // recursiv for rightside
        merge( arr, low, mid, high );       // merge all part together
    }
}

#endif // MERGESORT_H
