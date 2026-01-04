
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &vec, int low, int high)
{
    int pivot = vec[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (vec[j] >= pivot)
        {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return (i + 1);
}

vector<int> quickSortFn(vector<int> &vec, int low, int high)
{
    if (low < high)
    {
        int piv = partition(vec, low, high);
        quickSortFn(vec, low, piv - 1);
        quickSortFn(vec, piv + 1, high);
    }
    return vec;
}

void quickSort(vector<int> &vec)
{
    quickSortFn(vec, 0, vec.size()-1);
}

void insertionSort(vector<int> &vec) {
    for(int i=1; i<vec.size(); i++) {
        for (int j=i; j>0; j--) {
            if(vec[j] > vec[j-1]) {
                int temp = vec[j];
                vec[j] = vec[j-1];
                vec[j-1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> a = {11, 16, 4, 10, 8, 2, 10, 13, 5, 2, 2, 1, 6, 9, 1, 3, 5};
    // quickSort(a);
    insertionSort(a);
    cout << "------------------" << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ", ";
    cout << endl;

    return 0;
}