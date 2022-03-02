#include <iostream>
#include<time.h>
using namespace std;
template<typename T>
void MaxElement(T arr[])
{ 
    T maxvalue = arr[0];
    for (int i = 0; i < 12; i++) 
    {
        if (arr[i] > maxvalue) 
        {
            maxvalue = arr[i];
        }
    }
    cout << "—амый удачный мес€ц: " << maxvalue;
}
template<typename T>
void Max(T arr[])
{
    T maxvalue = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
        }
    }
    cout << "\n—амый удачный за 5 мес.=>:" << maxvalue;
}


template <typename T>
void PrintArr(T arr[])
{	
    srand(time(0));
    for (int i = 0; i < 12; i++)
    {
        arr[i] = rand() % 10000;
        cout << arr[i] << " " << endl;
      
    }
}
template<typename T>
void SortAlgo(T arr[])
{
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < 12; i++) 
    {
        j = i;
        for (int k = i; k < 12; k++) 
        {
            if (arr[j] > arr[k]) 
            {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        cout << "[" << i + 1 << "]";
        cout << arr[i] << " " << endl;
    }
    
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[12];
    PrintArr(arr);
    SortAlgo(arr);
    MaxElement(arr);
    Max(arr);
}
   