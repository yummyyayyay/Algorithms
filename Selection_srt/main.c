// selection sort
#include <stdio.h>
#define SIZE 100


void input(int* arr,int n){
    for(int i = 0; i < n ; i++){
        printf("Enter %dth element:",i);
        scanf("%d",&arr[i]);
    }
}

void selection_sort(int* arr,int n){
    int i = 0;
    int min = i;

    while(i != n){
        for(int j = i+1 ; j < n;j++){
            if(arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        i++;
    }

    //print the sorted array
    for(int k = 0;k<n;k++){
        printf("%d ",arr[k]);
    }
}

int main(){
    int array[SIZE],n;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    input(array,n);

    selection_sort(array,n);

    return 0;
}