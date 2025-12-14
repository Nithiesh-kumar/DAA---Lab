#include<stdio.h>
#define size 5
void bucketsort(int arr[], int n){
 int bucket[10]={0};
 for(int i=0;i<n;i++){
  bucket[arr[i]]++;
 }
 int index=0;
 for(int i=0;i<10;i++){
  while(bucket[i]--){
   arr[index++]=i;
  }
 }
}
int main(){
 int arr[size];
 for(int i=0;i<size;i++){
  printf("enter element %d: ",i);
  scanf("%d",&arr[i]);
 }
 bucketsort(arr,size);
 for(int i=0;i<size;i++){
 printf("%d\n",arr[i]);
 }
 return 0;
}
