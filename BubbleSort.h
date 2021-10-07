#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <iostream>

using namespace std;

void bubbleSort( int arr[], int sz )
{
    for( int i = 0; i < sz; i++ ){
        for( int y = 0; y < sz - 1; y++ ){
            if( arr[y] < arr[y+1] ) swap( arr[y], arr[y+1] );
        }
    }

    // Ausgeben
    cout << "Bubble Sort:  ";
    for( int i = 0; i < sz; i++ ){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

#endif // BUBBLESORT_H
