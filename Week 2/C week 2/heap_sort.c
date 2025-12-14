#include<stdio.h>
#define size 5
void heapify(int arr[], int n, int i){
int largest=i;
int left=2*i+1;
int right=2*i+2;
if(left<n && arr[left] > arr[largest]){
 largest = left;
}
if(right<n && arr[right] > arr[largest]){
 largest = right;
}
if(largest!=i){
 int temp=arr[i];
 arr[i] = arr[largest];
 arr[largest]=temp;
 heapify(arr,n,largest);
}
}

void heapsort(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
int main() {
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    heapsort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}  
