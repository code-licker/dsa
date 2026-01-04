#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortFn(vector<int> &vec, int low, int high, int iteration)
{
    iteration++;
    int mid = (low + high) / 2;
    if (mid >= 0 && iteration <=5)
    {
        cout << "iteration --> " << iteration << " ";
        cout << "mid --> " << mid << " ";
        cout << "arr --> ";
        for (int i = low; i <= high; i++)
        {
            cout << vec[i] << ", ";
        }
        cout << endl;

        mergeSortFn(vec, low, mid, iteration);
        mergeSortFn(vec, mid + 1, high, iteration);
    }

    return vec;
}

void mergeSort(vector<int> &vec)
{
    mergeSortFn(vec, 0, vec.size() - 1, 0);
}

int main()
{
    vector<int> a = {11, 16, 4, 10, 8, 2, 10, 13, 5, 2, 2, 1, 6, 9, 1, 3, 5};
    mergeSort(a);
    cout << "hi mom";
    return 0;
}