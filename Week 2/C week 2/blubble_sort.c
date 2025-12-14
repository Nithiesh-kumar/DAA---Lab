#include<stdio.h>
#define size 5
void bubblesort(int arr[], int n){
for(int i=0;i<n;i++){
 for(int j=0;j<n-i-1;j++){
  if(arr[j]>arr[j+1]){
   int temp=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=temp; }
 }
}
}
int main(){
 int arr[size];
 for(int i=0;i<size;i++){
  printf("enter element %d: ",i);
  scanf("%d",&arr[i]);
 }
 bubblesort(arr,size);
 for(int i=0;i<size;i++){
 printf("%d\n",arr[i]);  }
 return 0;
}
