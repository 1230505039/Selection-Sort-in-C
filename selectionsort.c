#include <stdio.h>
#include <stdlib.h>

//int array[] = {3, 5, 1, 0, 4, 2}

//3, 5, 1, 0, 4, 2
//0, 5, 1, 3, 4, 2
//0, 1, 5, 3, 4, 2
//0, 1, 2, 3, 4, 5
//0, 1, 2, 3, 4, 5 

void swap(int* number1, int* number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}


void selectionSort(int arr[], int sizeOfArr){
    int j, index2;
    int index = 0 ;
    int number;
    for(int i = 0 ; i < sizeOfArr ; i++){
        int flag = 0;
        number = arr[i];
        for(j = i + 1 ; j < sizeOfArr; j++){
            if(number > arr[j]){
                number = arr[j];
                index2 = j;
                flag = 1;
            }
            else{
                continue;
            }
        }
        if(flag == 1){
            swap(&arr[index], &number);
            arr[index2] = number;
            index++;
        }
    }
}

void print(int arr[], int sizeOfArr){
    for(int i = 0 ; i < sizeOfArr ; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    system("cls");

    int arr[] = {9, 8, 1, 4, 5, 6, 2, 3, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    selectionSort(arr, n);
    print(arr, n);

    return 0;
}