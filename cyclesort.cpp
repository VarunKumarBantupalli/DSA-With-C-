#include <iostream>
#include <vector>
using namespace std;
void cycleSort(vector<int>& v){
    int n = v.size();
    for(int  i = 0 ; i < n ; i++){
        if(v[i] == i+1){
            continue;
        }
        swap(v[i] , v[v[i] - 1]);
    }

}
int main(){
    vector<int> v = {5,1,4,2,3};
    cycleSort(v);
    for(int  i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}