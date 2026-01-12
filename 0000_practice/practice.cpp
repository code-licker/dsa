#include <iostream>
#include <vector>
using namespace std;

void me(vector<int> &v, int l, int m, int r) {
  int s1 = m - l + 1;
  int s2 = r - m;

  vector<int> L(s1), R(s2);

  for (int i = 0; i < s1; i++)
    L[i] = v[l + i];
  for (int j = 0; j < s2; j++)
    R[j] = v[m + 1 + j];

  int i = 0;
  int j = 0;
  int k = l;

  while (i < s1 && j < s2) {
    if (L[i] >= R[j]) {
      v[k] = L[i];
      i++;
    } else {
      v[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < s1) {
    v[k] = L[i];
    i++;
    k++;
  }

  while (j < s2) {
    v[k] = R[j];
    j++;
    k++;
  }
}

void msf(vector<int> &v, int l, int r) {
  if (l >= r)
    return;
  int m = l + ((r - l) / 2);
  msf(v, l, m);
  msf(v, m + 1, r);
  me(v, l, m, r);
}

void ms(vector<int> &v) {
  msf(v, 0, v.size() - 1);
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " - ";
}

int main() {
  vector<int> a = {2, 1, 6, 10, 4, 1, 3, 9, 7};
  ms(a);
  return 0;
}