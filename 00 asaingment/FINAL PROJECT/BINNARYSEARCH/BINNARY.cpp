#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinnarySearch( vector <int> &arr, int start , int end,  int SearchingValue){

    if (start<=end){

        int mid = start + (end - start)/2;

        if (arr[mid] == SearchingValue){
            return mid;
        }else if (arr[mid]<SearchingValue){
            return BinnarySearch(arr,mid+1,end,SearchingValue);
        }else {
            return BinnarySearch(arr,start,mid-1,SearchingValue);
        }

    }
    return -1;

}


int main (){


    vector <int > arr={10, 20, 40, 99, 3, 9, 54,};

    // 3 , 9, 10, 20, 40, 54, 99, 
    sort(arr.begin(), arr.end());

    int SearchingValue=40;
    int n=arr.size();

    
    int idx = BinnarySearch(arr,0,arr.size()-1,SearchingValue);


    if(idx == -1){
        cout << " element not found in array";
    }else {
        cout << SearchingValue <<  " is at index position " << idx << endl;
    }

    return 0;
}
