#include <iostream>
using namespace std;

int main()
{
    int num[] = {11, 4, 6, 17, 5, 2};
    int size = 6, largest = num[0], smallest = num[0];

    for (int i = 0; i < size; i++)
    {
        if (num[i] <= smallest)
        {
            smallest = num[i];//we can also use min() function to find min between two element!
        }
        if (num[i] >= largest)
        {
            largest = num[i];//we can also use max() function to find min between two element!
        }
    }
    cout << "smallest number is " << smallest << endl
         << "largest number is " << largest;
}