#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <iostream>

using namespace std;

// Wurzel immer in der Position 0
// Vorganger von i: (i-1)/2
// Nachfolger von i: links -> 2i + 1
//                   recht -> 2i + 2
// Sortierung ist aufgrund Heapify und Max-Heap ausgefuhrt

void heapify( int arr[], int size, int pos )
{
    int largest = pos;  // initialize largest as root
    int left = 2 * pos + 1; // left child
    int right = 2 * pos + 2;    // right child

    // if left child is bigger than root
    if( left < size && arr[left] > arr[largest] ) largest = left;

    // if right child is bigger than largest
    if( right < size && arr[right] > arr[largest] ) largest = right;

    // if largest is not root
    if( largest != pos ){
        swap( arr[pos], arr[largest] );

        // then recursiv heapify for the affected sub-tree
        heapify( arr, size, largest );
    }
}

void HeapSort( int arr[], int size )
{
    // build heap, start form the position ( n/2 - 1 ) and decrement
    for( int i = size/2 - 1; i >= 0; i-- ){
        heapify( arr, size, i );
    }

    // start sorting
    for( int i = size - 1; i > 0; i-- ){
        swap( arr[0], arr[i] ); // move current root to the end

        heapify( arr, i, 0 );   // call max heapify on the reduced heap
    }
}

#endif // HEAPSORT_H
