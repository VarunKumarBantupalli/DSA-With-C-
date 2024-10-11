#include <iostream>
using namespace std;
int main(){
    int arr1[] = { 1, 4 ,5 ,8};
    int arr2[] = { 2,3,6,7,10,12};
    int arr3[10];
    int i = 0 ; 
    int j = 0 ;
    int k = 0 ;
    while(   k < 10 ){
        if( i == 4){
            while( j != 6){
                arr3[k] = arr2[j] ;
                j++;
                k++;
            }
        }
        else if(j == 6){
            while( i != 4 ){
                arr3[k] = arr1[i] ;
                i++;
                k++;
            }
        }
        else if(arr1[i]  < arr2[j]){
            arr3[k] = arr1[i] ; 
            i++;
            k++;
           

        }
        else{
            arr3[k] = arr2[j] ; 
            j++;
            k++;
        }

    }

    for(int i = 0 ; i < 10 ; i++){
        cout<<arr3[i]<<endl ;
    }
    return  0;
}