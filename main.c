int sumNDimArr(const int* arr, const int* lens, const int dims, const int skip) {
    // Calculate the total number of elements in the N-dimensional array.
    int totalElements = 1;
    for (int i = 0; i < dims; ++i) {
        totalElements *= lens[i];
    }

    // If skip is greater than or equal to the total number of elements, return 0.
    if (skip >= totalElements) {
        return 0;
    }

    // Initialize the sum.
    int sum = 0;

    // Start summing from the `skip`-th element to the end.
    for (int i = skip; i < totalElements; ++i) {
        sum += arr[i];
    }

    return sum;
}

#include <stdio.h>

int main(void)
{
    
    //sumNDimArr();
}