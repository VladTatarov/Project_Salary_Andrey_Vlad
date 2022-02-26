#include <iostream>
#include<Windows.h>
using namespace std;
template<typename T>
void MaxElement(T arr[],T maxvalue) 
{ 
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] > maxvalue) 
        {
            maxvalue = arr[i];
        }
    }
    cout << "Maxvalue: " << maxvalue;
}

template <typename T>
T PrintArr(T arr)
{	
	const int size = 10;
	int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10000;
        cout << "[" << i << "]" << endl;
        cout << arr << endl;
    }
	
}

template<typename T>
T SortAlgo(T arr[],T lenD)
{
    lenD = 10;
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < lenD; i++) {
        j = i;
        for (int k = i; k < lenD; k++) {
            if (arr[j] > arr[k]) {
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