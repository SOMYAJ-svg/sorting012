//sorting an array with 0s 1s and 2s of [2,0,2,1,1,0,1,2,0,0]
#include<iostream>
using namespace std;
void sort012(int arr[], int n){
    int low = 0, mid = 0, high = n - 1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
    }
    else if(arr[mid]==1){
            mid++;
        }
    else{
        swap(arr[high],arr[mid]);
        high--;
        }   
    }
}
int main(){
    int arr[] = {2,0,2,1,1,0,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
