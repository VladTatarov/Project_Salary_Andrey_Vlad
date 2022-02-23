#include <iostream>
using namespace std;
template <typename T>
T SortAlgo(T arr[10],T lenD)
{
    lenD = 10;
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < lenD; i++) 
    {
        j = i;
        for (int k = i; k < lenD; k++) 
        {
            if (arr[j] > arr[k])
            {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}
int main()
{
	
}