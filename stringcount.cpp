#include<stdio.h>
int size(int arr[],int n);
int main(){
    int arr[8]={1,2,3,4};
    int length=0;
    length = size(arr,0);
    printf("Length is %d",length);
    return 0;
}
int size(int arr[],int n){
    static int count=0;
    if(arr[n]=='\0'){
        return count;
    }
    else{
        count++;
        size(arr,n+1);
    }
}
