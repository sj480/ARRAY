#include <iostream>
using namespace std;

int main()
{
    char array[7] = {'a', 'b', 'd', 'e', 'd', 'b', 'a'};
    int n = 7; // the size of the array is 7, not array[7]
    int i = 0; 
    int j = n - 1; 

    while (i <= j) // compare until both pointers meet in the middle
    {
        if (array[i] != array[j])
        {
            cout << "The given array is not a palindrome" << endl;
            return 0; // exit the program with a status of 0 (success)
        }
        i++;
        j--;
    }

    cout << "The given array is a palindrome" << endl;
    return 0; // exit the program with a status of 0 (success)
}
