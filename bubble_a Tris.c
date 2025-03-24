#include <stdio.h>
// A simple bubble sort function using array indexing
void bubble_a(long long *array, long long size) {
    //Changed so that the array and its values are pointed to
    long long i, last,t;
    for (last = size - 1; last > 0; last--) {
        for (i = 0; i < last; i++) {
            if (*(array+i+1) < *(array+i)) {
                //printf("\nFirst Memory address: %p and value: %d", (void*)&*(array+i), *(array+i));
               //printf("\nSecond Memory address: %p  and value : %d\n", (void*)*(array+i+1), *(array+i+1));
                //Pointing to the next array value  to see if the current pointed array value is larger
                // Swap adjacent elements
                t = *(array+i);
                //printf("Temp Memory address: %p \n", (void*)t);
                //Assigning the location of the current element to a temp
                *(array+i) = *(array+i+1);
                //Assigning the location of the current value to the next value
                *(array+1+i) = t;
                //Assigning the value in the location given to the temp to the next array location 
                //printf("\nSwap First Memory address: %p and value: %d", (void*)&*(array+i), *(array+i));
                //printf("\nTemp Memory address: %p and value: %lld", (void*)t, t);
                //printf("\nSwap Second Memory address: %p  and value : %d\n", (void*)*(array+i+1), *(array+i+1));
            }
        }
    }
}
int main() {

    long long int arr[] = {10, 15, 2, 6, 1, 7, 8, 9, 3, 5, 4, 11, 12, 13, 14};
    printf("Array before sorted : ");
    for (int a = 0; a< 15; a++){
        printf("%lld ", arr[a]);
    }
    //Printing the origninal array
    
    printf("\n");
    //adding new line
    
    bubble_a(arr, 15);
    //Calling the bubble sort
    
    printf("Array after sorted : ");
    for (int a = 0; a< 15; a++){
        printf("%lld ", arr[a]);
    }
    //Printing the origninal array after it is sorted
    
    return 0;
}