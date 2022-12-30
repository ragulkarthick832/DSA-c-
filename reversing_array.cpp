#include <bits/stdc++.h>
using namespace std;
class solution {
public:
    void reversing_array(int arr[],int n, int start, int end){
      while(start<end){
       
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
      }  
        
    }
    void printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int start=0;
        int end=n-1;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        solution ob;
        ob.reversing_array(arr,n,start,end);
        ob.printarray(arr,n);
        


    }
    return 0;
}
