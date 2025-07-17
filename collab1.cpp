#include <iostream>
#include <string>

//umm so first the function is made like 
//like this
//so 
//here we have inserted an array hmne array dedi iss function ko ki ye operation kisi array mai hona yess yess write
//hme size bhi dena hoga array ko
//then we have to g
int n;//ye gloabal variable hai and a function needs a local variable
//gloabal variable mtlb jo tumne kiya main or any other function se bahar

//ek function hmesha apne local variable ko prefrence dega

int Linearsearch(int arr[] ,int n,int target){//here n refers to local

    //now we would create a loop 
    for(int i = 0;i<n;i++){
        if(arr[i] == target){//here we are running a loop when our target matchs the element in  array 
            return target; //it would return target
            //dekho how it would work
            //loop clega from i = 0
            //so arr[0] == target  here arr 0th element check krega ki match hua nhi hua to next
            //arr[1] == target here arr would check its 1st element ki match hua ki nhi 
            //asse krte krte it would go to lets assume size hai 5 toh 
            //arr[5] == target tak check krega mil gya toh thik wrna not found print krwayenge 
        }
        else{
            cout<<"Not Found"
        }
    }
}
using namespace std;

int main() {
    int arr[5];


    cout<<" enter elements : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //now we would ask ki kya dhoondna
    //we would create a target variable
    int target;
    int size = sizeof(arr)/sizeof(arr[0]);

    return 0;
}
