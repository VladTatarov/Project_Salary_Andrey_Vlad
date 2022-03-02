#include <iostream>
#include<time.h>
using namespace std;
template<typename T>
void MaxElement(T arr[])
{ 
    T maxvalue = arr[0];
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
void PrintArr(T arr[])
{	
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 1000;
        cout << "[" << i+1 << "]" << endl;
        cout << arr << endl;
    }
}
template<typename T>
void SortAlgo(T arr[])
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < 10; i++) 
    {
        j = i;
        for (int k = i; k < 10; k++) 
{
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
    int arr[10];
    PrintArr(arr);
    SortAlgo(arr);
    MaxElement(arr);
}
   