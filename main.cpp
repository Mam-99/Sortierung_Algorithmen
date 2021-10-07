#include <iostream>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
using namespace std;

int main()
{
    int arrList[7]{ 2, 8, 5, 3, 9, 4, 1 };

    // Bubble Sortierung
    bubbleSort( arrList, 7 );

    // Insertion Sortierung
    insertionSort( arrList, 7 );

    // Selection Sortierung
    bubbleSort( arrList, 7 );
    selectionSort( arrList, 7 );

    // Merge Sortierung
    int arrList2[7]{ 2, 8, 5, 3, 9, 4, 1 };
    mergeSort( arrList2, 0, 6 );

    cout << "Merge Sort:  ";
    for( int i = 0; i < 7; i++ ){
        cout << arrList2[i] << "  ";
    }
    cout << endl;

    // Quick Sortierung
    int arrList3[7]{ 2, 8, 5, 3, 9, 4, 1 };
    QuickSort( arrList3, 0, 6 );

    cout << "Quick Sort:  ";
    for( int i = 0; i < 7; i++ ){
        cout << arrList2[i] << "  ";
    }
    cout << endl;

    // Heap Sortierung
    int arrList4[7]{ 2, 8, 5, 3, 9, 4, 1 };
    HeapSort( arrList4, 7 );

    cout << "Heap Sort:  ";
    for( int i = 0; i < 7; i++ ){
        cout << arrList2[i] << "  ";
    }
    cout << endl;

    system("PAUSE");
    return 0;
}
