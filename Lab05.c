#include <stdio.h>

struct Data {
        char a[3];
        int b;
        short c;
        double d;
    };
    //The data struct for task 4 and 5
    
void task1(int arr[]){
    printf("The address of arr[2] starting from 0x1000 is 0x%X\n", 0x1000+(4*2));
    printf("The actual address is %p\n\n", (void *)&arr[2]);
    printf("The address of arr[4] starting from 0x1000 is 0x%X\n", 0x1000+(4*4));
    printf("The actual address is %p\n\n", (void *)&arr[4]);
}
//This function calculates the address starting from 0x1000 and also shows the actual address

void task2(int matrix[3][4]){
    printf("The address of matrix[%i][%i] starting from 0x2000 is 0x%X\n", 2,1, 0x2000+(4*((4*2)+1)));
    printf("The actual address is %p\n\n", (void *)&matrix[2][1]);
    
    printf("The address of matrix[%i][%i] starting from 0x2000 is 0x%X\n", 0,3, 0x2000+(4*((4*0)+3)));
    printf("The actual address is %p\n\n", (void *)&matrix[0][3]);
}
//This function calculates the address starting from 0x2000 and also shows the actual address

void task3(int* jagged[]){
    printf("The address of jagged[%i][%i] starting from 0x2000 is 0x%X\n", 1,2, 0x3000+(4*((3*1)+2)));
     printf("The actual address is %p\n\n", (void *)&jagged[1][2]);
}
//This function calculates the address starting from 0x3000 and also shows the actual address

void task4(struct Data task4test){
    for(int i = 0; i < 3; i++){
        printf("The address of Data.a[%i] starting from 0x4000 is 0x%X\n", i, 0x4000+i);
        printf("The actual address is %p\n\n", (void *)&task4test.a[i]);
    }
    printf("The address of Data.b starting from 0x4000 is 0x%X\n", 0x4002+(1*2));
        printf("The actual address is %p\n\n", (void *)&task4test.b);
    printf("The address of Data.c starting from 0x4000 is 0x%X\n", 0x4004+4);
        printf("The actual address is %p\n\n", (void *)&task4test.c);
    printf("The address of Data.d starting from 0x4000 is 0x%X\n", 0x4008+8);
        printf("The actual address is %p\n\n", (void *)&task4test.d);
}
//This function calculates the address starting from 0x4000 and also shows the actual address

void task5(struct Data data[]){
    
    printf("The address of Data[1].b starting from 0x5000 is 0x%X\n", 0x5000+(2+4+2+8+2));
    printf("The actual address is %p\n\n", (void *)&data[1].b);
    
    printf("The address of Data[2].c starting from 0x5000 is 0x%X\n", 0x5000+((2*3)+(4*3)+(2*2)+(8*2)));
    printf("The actual address is %p\n\n", (void *)&data[2].c);
    
    printf("The address of Data[0].d starting from 0x5000 is 0x%X\n", 0x5000+(2+4+2+8));
    printf("The actual address is %p\n\n", (void *)&data[0].d);
    
}
//This function calculates the address starting from 0x5000 and also shows the actual address

int main() {
    int arr[5] = {10,20,30,40,50};\
    //The array for task 1
    printf("The calculations and addresses for task 1\n");
    task1(arr);
    //Task 1 calculation and actual address
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    //The array for task 2
    printf("The calculations and addresses for task 2\n");
    task2(matrix);
    //Task 2 calculation and actual address
    
    int* jagged[3];
    int row1[] = {1, 2};        jagged[0] = row1;
    int row2[] = {3, 4, 5};     jagged[1] = row2;
    int row3[] = {6, 7, 8, 9};  jagged[2] = row3;
    //The array for task 3
    
    printf("The calculations and addresses for task 3\n");
    task3(jagged);
    //Task 3 calculation and addresses
    
    struct Data task4test = {{'A', 'B', 'C'}, 10, 20, 40.0};
    //The specified data struct for task 4 that I moved from task 5's specific one
    
    printf("The calculations and addresses for task 4\n");
    task4(task4test);
    //Task 4 calculation and addresses
    
    struct Data dataset[3] = {
    {{'A', 'B', 'C'}, 10, 20, 40.0},
    {{'D', 'E', 'F'}, 50, 60, 80.0},
    {{'G', 'H', 'I'}, 90, 100, 120.0}
    };
    //The specified data struct for task 5
    
    printf("The calculations and addresses for task 5\n");
    task5(dataset);
    //Task 5 calculation and addresses
}