#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
          // going to right
        if(key > arr[mid]){
            start=mid+1;
        }
        // going to left
        if(key<arr[mid]){
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
    }
   // return -1;   //not found
}



int main()
{
   int arr[12]={99,33,1,3444,123,-123,-90,1000,12,9989,23,2};
    
    int index=binarySearch(arr,12,123);
    cout<<"TIME COMPLEXITY OF IS O(logn) "<<endl;

    cout<<" index of 123 is "<<index<< endl;
    return 0;
}