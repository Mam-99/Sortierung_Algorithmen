#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <iostream>

using namespace std;

void selectionSort( int arr[], int sz )
{
    for( int i = 0; i < sz; i++ ){
        int min = i;
        for( int j = i+1; j < sz; j++ ){
            if( arr[j] < arr[min] ) min = j;
        }
        if( min != i ) swap( arr[i], arr[min] );
    }

    // Ausgeben
    cout << "Selection Sort:  ";
    for( int i = 0; i < sz; i++ ){
        cout << arr[i] << "  ";
    }
    cout << endl;
}


#endif // SELECTIONSORT_H
