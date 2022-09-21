#include <iostream>

inline void swap(int&, int&);
void selectionSort(int array[], int& size);
inline void printArray(int array[], int& size);

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int array_size = sizeof(array)/sizeof(int);
    printArray(array, array_size);
    selectionSort(array, array_size);
    printArray(array, array_size);
    return 0;
}

inline void swap(int& x, int& y)
{
    int temp = x; x = y; y = temp;
}

void selectionSort(int array[], int& size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(array[min], array[i]);
    }
}

inline void printArray(int array[], int& size)
{
    std::cout << "| ";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " | ";
    }
    std::cout << '\n';
}