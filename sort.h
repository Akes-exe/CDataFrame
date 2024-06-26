#ifndef CDATAFRAME_SORT_H
#define CDATAFRAME_SORT_H

void insertionSort(int tab[], long long *index, int N);

void swapint(int* a, int* b);

void swaplong(long long* a, long long* b);

int partition(int tab[], long long *index, int left, int right);

void quickSort(int tab[], long long *index, int left, int right);

void reverseArray(long long *arr, int size);

int binarySearch(int *arr, int size, int value);

#endif //CDATAFRAME_SORT_H
