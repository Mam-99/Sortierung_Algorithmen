#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>

using namespace std;

int partition( int arr[], int start, int end )
{
    int pivotIndex = start;
    int pivotValue = arr[end];
    for( int i=start; i<end; i++ ){
        if( arr[i] < pivotValue ){
            swap( arr[i], arr[pivotIndex] );
            pivotIndex++;
        }
    }
    swap( arr[pivotIndex], arr[end] );

    return pivotIndex;
}

void QuickSort( int arr[], int start, int end )
{
    if( start >= end ) return;

    int index = partition( arr, start, end );
    QuickSort( arr, start, index - 1 );
    QuickSort( arr, index + 1, end );
}

#endif // QUICKSORT_H
