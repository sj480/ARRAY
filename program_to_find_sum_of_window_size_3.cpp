#include <iostream>
using namespace std;

int main() {
    int array[9] = {5, 2, 1, 4, 3, 9, 7, 6, 8};
    // int k = 0; 
    // Find the size of the array
    int n = sizeof(array)/sizeof(array[0]);

    // Loop through the array to calculate the sum of all windows of size 3
    for (int i = 0; i <= n-3; i++) // for(int i=0; i <= n-k; i++)
    {
        int sum = 0;
        for (int j = i; j < i+3; j++) // for(int j = i; j < i+k; j++)
        {
            sum += array[j];
        }
        cout << "Sum of window starting at index " << i << " is " << sum << endl;
    }

    return 0;
}
