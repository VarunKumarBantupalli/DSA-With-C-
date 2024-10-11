#include <iostream>
#include <vector>
using namespace std;

void merge ( vector<int>& a ,vector<int>& b ,vector<int>& imp){
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            imp[k++] = a[i++];
        } else {
            imp[k++] = b[j++];
        }
    }
    while (i < a.size()) {
        imp[k++] = a[i++];
    }
    while (j < b.size()) {
        imp[k++] = b[j++];
    }
}
void mergesort(vector<int>& imp){

    int n = imp.size();
        if(n==1){
        return ;
    }
    
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int> a(n1) , b(n2) ;
    for(int  i = 0 ; i < n1 ; i++){
        a[i] = imp[i];
    }
    for(int  i =  0 ; i < n2 ; i++){
        b[i] = imp[n1+i];
    }
    mergesort(a);
    mergesort(b);
    merge(a , b , imp);

}
int main(){
     vector<int> imp  =  {5 ,1 , 3 , 0 , 4 , 9  ,6};

     mergesort(imp);

     for(int  i = 0 ; i < imp.size() ; i++){
        cout<<imp[i]<<" ";
     }

    return  0;
}