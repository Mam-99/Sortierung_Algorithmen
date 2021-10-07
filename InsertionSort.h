#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <iostream>

using namespace std;

void insertionSort( int arr[], int sz )
{
    for( int i = 1; i < sz; i++ ){
        int j = i;
        while( j > 0 && arr[j-1] > arr[j] ){
            swap( arr[j-1], arr[j] );
            j--;
        }
    }

    // Ausgeben
    cout << "Insertion Sort:  ";
    for( int i = 0; i < sz; i++ ){
        cout << arr[i] << "  ";
    }
    cout << endl;
}


#endif // INSERTIONSORT_H
