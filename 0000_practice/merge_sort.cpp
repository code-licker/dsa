#include <iostream>
#include <vector>
using namespace std;

void me(vector<int> &a, int l, int m, int r) {
  // l=0, m=4, r=9, a=[4,2,7,8,2,4,436,8,9,0];
  int ls = m - l + 1; // 5
  int rs = r - m;     // 5

  vector<int> lv(ls); // v[5]
  vector<int> rv(rs); // v[5]

  for (int i = 0; i < ls; i++)
    lv[i] = a[l + i]; // [4,2,7,8,2]
  for (int i = 0; i < rs; i++)
    rv[i] = a[m + i + 1]; // [4,436,8,9,0]

  int i = 0, j = 0;
  int k = l;
  while (i < ls && j < rs) {
    if (lv[i] > rv[j]) {
      a[k] = lv[i];
      i++;
    } else {
      a[k] = rv[j];
      j++;
    }
    k++;
  }
  while (i < ls) {
    a[k] = lv[i];
    i++;
    k++;
  }
  while (j < rs) {
    a[k] = rv[j];
    j++;
    k++;
  }
}

void msf(vector<int> &a, int l, int r) {
  if (l >= r)
    return;
  int mid = l + ((r - l) / 2);
  msf(a, l, mid);
  msf(a, mid + 1, r);
  me(a, l, mid, r);
}

void mergeSort(vector<int> &a) {
  cout << "BEFORE -> ";
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << ", ";
  cout << endl;

  msf(a, 0, a.size() - 1);

  cout << "AFTER -> ";
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << ", ";
  cout << endl;
}

int main() {
  vector<int> a = {4, 2, 7,  8,  2, 4,    436, 8,  9,  0,  2, 3, 52,
                   6, 8, 98, 11, 3, 5543, 1,   23, 45, 51, 3, 8};
  mergeSort(a);
  return 0;
}