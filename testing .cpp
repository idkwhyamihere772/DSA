#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[] = {43,56,78,55,98,43,76,34,78,24,87,54,35,78,45,34,78,93,24,67,12};
    //find the size of this array
    cout<<arr;
     int size = sizeof(arr)/ sizeof(arr[0]);
    cout<<size;
}