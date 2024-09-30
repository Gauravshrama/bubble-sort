#include<iostream>
using namespace std;
int bubble_sort(int arr[], int n){

    for( int i = 1 ; i <= n ; i++){
        
        for(int  j = 0; j < n-i ; j++){
          
           if(arr[j] > arr[j+1]){
              
              swap(arr[j],arr[j+1]);
              }
        }
    }
    cout <<" the sorted array is:"6
     << endl;
       for (int i = 0 ; i < n; i++){
        cout<< arr[i] << endl;
       }
     return 1;
}
int main(){
      int arr[] = {};
      int n;
      cin>> n;
      for (int i = 0 ; i < n ; i++)
           cin>> arr[i];

      cout<< bubble_sort(arr,n);

    
}