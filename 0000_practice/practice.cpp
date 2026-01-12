#include <iostream>
#include <vector>
using namespace std;

int pa(vector<int> &v, int l, int h) {
  int piv = v[h];
  int i = l - 1;
  for (int j = l; j < h; j++) {
    if (v[j] > piv) {
      i++;
      swap(v[i], v[j]);
    }
  }
  swap(v[i + 1], v[h]);
  return i + 1;
}

vector<int> qsf(vector<int> &v, int l, int h) {
  if (l < h) {
    int p = pa(v, l, h);
    qsf(v, l, p - 1);
    qsf(v, p + 1, h);
  }
  return v;
}

void qs(vector<int> &v) { qsf(v, 0, v.size() - 1); }

int main() {
  vector<int> a = {2, 1, 6, 10, 4, 1, 3, 9, 7};
  qs(a);
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " - ";
  return 0;
}