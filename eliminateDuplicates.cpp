#include <iostream>
using namespace std;
const int SIZE = 10;

int eliminateDuplicates(int [], int []);
int linearSearch(int [], int );
int main()
{
    int numbers[SIZE];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++)
    {
	      // Read and store numbers in an array if it is new
       cin >>  numbers[i] ;
    }
    int result[SIZE];
    int length;
    length = eliminateDuplicates(numbers, result);

    cout << "The number of distinct integers is " << length << endl;
    cout << "The distinct integers are ";
    for (int i = 0; i < length; i++)
    {
        cout << result[i] << " ";
    }
	   cout << endl;
}

int eliminateDuplicates(int numbers[SIZE], int result[SIZE])
{

    int new_size = 0;
    for (int i = 0; i < SIZE; i++)
    { // For each number in numbers array, array result is passed
      if (linearSearch(result, numbers[i]) == -1)
      {
        result[new_size] = numbers[i]; // Add numbers[i] into temp
        new_size++;
      }
    }

    return new_size;
}

/** The method for finding a key in the list */
int linearSearch(int list[], int key)
{
    for (int i = 0; i < SIZE; i++)
    {
      if (key == list[i])
        return i;
    }
    return -1;
}

//23 65 12 19 97 12 15 19 23 10
