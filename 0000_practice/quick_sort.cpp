#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& vec, int low, int high) {
  int pivot = vec[high];
  int i = low-1;
  for (int j=low; j<=high-1; j++) {
    if(vec[j]<=pivot) {
      i++;
      swap(vec[i], vec[j]);
    }
  }
  swap(vec[i+1], vec[high]);
  return i+1;
}

vector<int> quickSortFn(vector<int>& vec, int low, int high) {
  if(low<high) {
    int p = partition(vec, low, high);
    quickSortFn(vec, low, p-1);
    quickSortFn(vec, p+1, high);
  }
  return vec;
}

void quickSort(vector<int>& vec) {
  quickSortFn(vec, 0, (vec.size()-1));
}

int main() {
  vector<int> a = {11,16,4,10,8,2,10,13,5,2,2,1,6,9,1,3,5};
  quickSort(a);
  cout << "------------------" << endl;
  for(int i=0; i<a.size(); i++)
    cout << a[i] << ", ";
  cout << endl;

  return 0;
}

// int partition(vector<int>& a, int l, int h) {
//   int pivot = a[h];
//   int i = (l-1);
//   for(int j=l; j<=h-1; j++) {
//     if(a[j]>=pivot) {
//       i++;
//       swap(a[i],a[j]);
//     }
//   }
//   swap(a[i+1], a[h]);
//   return (i+1);
// }

// vector<int> quickSortFn(vector<int>& a, int low, int high) {
//   // for(int i=0; i<vec.size(); i++){
//   //   cout << vec[i] << ", ";
//   // }
//   // cout << "--> " << low << ", " << high << endl;
//   if(low < high) {
//     int p = partition(a,low,high);
//     quickSortFn(a, low, p-1);
//     quickSortFn(a, p+1, high);
//   }
//   return a;
// }

// void quickSort(vector<int>& a) {
//   quickSortFn(a, 0, (a.size()-1));
// }