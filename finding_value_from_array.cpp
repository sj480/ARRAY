#include <iostream>
using namespace std; 

int main()
{
    int array[7] = {5, 6, 2, 1, 8, 7, 3};
    int index = -1; // initialize index to -1 (not found)

    for (int i = 0; i < 7; i++) 
    {
        if (array[i] == 8) 
        {
            index = i; // update index to the current position if the value is found
            break; // exit the loop as soon as the value is found
        }
    }
    
    if (index != -1)
    {
        cout << "The value 8 was found at index " << index << endl;
    }
    else
    {
        cout << "The value 8 was not found in the array" << endl;
    }



    return 0; 
}