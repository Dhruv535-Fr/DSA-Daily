#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 4, 5, 3, 7};
    int size = 6,count;
    cout << "Unique elements:";
    for (int i = 0; i < size; i++)
    {  
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count==1){
            cout << arr[i]<<" ";
        }
    }
    
    
}