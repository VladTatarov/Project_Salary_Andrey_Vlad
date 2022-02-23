#include <iostream>
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
int main()
{
	
}