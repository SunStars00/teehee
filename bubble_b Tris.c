// Online C compiler to run C program online
#include <stdio.h>

void bubble_b(long long *array, long long size) {
    long long needNextPass = 1;  // 1 for true, 0 for false
    long long i,k,temp;
    for (k = 1; k < size && needNextPass; k++) {
        needNextPass = 0;
        for (i = 0; i < size - k; i++) {
            if (*(array+i) > *(array+i+1)) {
               //printf("\nFirst Memory address: %p and value: %d", (void*)&*(array+i), *(array+i));
               //printf("\nSecond Memory address: %p  and value : %d\n", (void*)*(array+i+1), *(array+i+1));
                // Swap adjacent elements
                temp = *(array+i);
                //Using pointers to set the temp value
                *(array+i) = *(array+i+1);
                //setting the address of the current to the next address
                *(array+i+1) = temp;
                //Setting next aress to curent address
                needNextPass = 1;
               // printf("\nSwap First Memory address: %p and value: %d", (void*)&*(array+i), *(array+i));
                //printf("\nTemp Memory address: %p and value: %lld", (void*)temp, temp);
                //printf("\nSwap Second Memory address: %p  and value : %d\n", (void*)*(array+i+1), *(array+i+1));
            }
        }
    }
}

int main() {
     
     long long arr[] = {1, 3, 2, 8,5};
    printf("Array before sorted : ");
    for (int a = 0; a< 5; a++){
        printf("%lld ", arr[a]);
    }
    //Printing the origninal array
    
    printf("\n");
    //adding new line
    
    bubble_b(arr, 5);
    //Calling the bubble sort
    
    printf("Array after sorted : ");
    for (int a = 0; a< 5; a++){
        printf("%lld ", arr[a]);
    }
    //Printing the origninal array after it is sorted
    
    return 0;
}