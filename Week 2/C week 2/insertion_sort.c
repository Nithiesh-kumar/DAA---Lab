#include<stdio.h>
#define size 5
void insertionsort(int arr[], int n){
for(int i=1;i<n;i++){
   int key=arr[i];
   int j=i-1;
   while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=key;
}
}

int main(){
 int arr[size];
 for(int i=0;i<size;i++){
  printf("enter element %d: ",i);
  scanf("%d",&arr[i]);
 }
 insertionsort(arr,size);
 for(int i=0;i<size;i++){
 printf("%d\n",arr[i]);
 }
 return 0;
}
