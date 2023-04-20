#include "sort.h"

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort
 * @array: The array
 * @size: Size
 */
void bubble_sort(int *array, size_t size)
{
unsigned int count = 0, value = 0;
int aux;

if (array == NULL || size < 2)
return;

for (count = 0; count < size; count++)
{
for (value = 0; value < (size - count - 1); value++)
{
if (array[value] > array[value + 1])
{
aux = array[value];
array[value] = array[value + 1];
array[value + 1] = aux;
print_array(array, size);
}
}
}
}
