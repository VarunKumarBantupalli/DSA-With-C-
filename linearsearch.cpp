#include <iostream>
using namespace std;
bool search (int arr[] , int size ,int key ){
 for (int i = 0; i < size ; i++)
 {
   if (key == arr[i])
   {
   return 1   ;
   }
   
   
 }
 return 0;
 
}

int main(){
int key ;
cout <<"enter the key element that need to be find : " <<endl;
cin>>key;
int arr[100] = {2,4,6,7,8,0,9,69,3,3,21,4};
bool found = search(arr , 12 ,key );
if (found){
    cout<<"element found "<<endl;
}
else {
    cout<<"element not found "<<endl;
}


    return 0 ;

}