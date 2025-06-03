/* make a two array and form the array in which all the
      element is present in this array */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr1[] = {1,1,5,7,9};
    int arr2[] = {2,4,6,8};
    int i=0;  //to iterate the arr1
    int j=0;  //to iterate the arr2
    int k=0;  //to iterate the ans
    int m=5;  //length of arr1
    int n=4;  //length of arr2
    int ans[m+n];

    while(i<m and j<n){
    if(arr1[i]<arr2[j]){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    else{
        ans[k]=arr2[j];
        j++;
        k++;
    }
}
    while(i<m){
        ans[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n){
        ans[k]=arr2[j];
        j++;
        k++;
    }

    for(int i=0; i<m+n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}