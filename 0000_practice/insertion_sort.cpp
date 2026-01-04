#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int>& vec) {
    for(int i=1; i<vec.size(); i++) {
        for(int j=i; j>0; j--) {
            if(vec[j] < vec[j-1]) {
                int temp = vec[j];
                vec[j]=vec[j-1];
                vec[j-1] = temp;
            }
        }
    }
    return vec;
}

int main() {
    vector<int> a = {11,16,4,10,8,2,10,13,5,2,2,1,6,9,1,3,5};
    insertionSort(a);
    cout << "---------Insertion Sort---------" << endl;
    for(int i=0; i<a.size(); i++)
        cout << a[i] << ", ";
    cout << endl;
    return 0;
}