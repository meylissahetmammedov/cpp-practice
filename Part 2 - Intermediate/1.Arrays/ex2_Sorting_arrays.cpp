#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j)
{
  int tamp = numbers[i];
  numbers[i] = numbers[j];
  numbers[j] = tamp;
}

void sort(int numbers[], int size)
{
  for (int pass = 0; pass < size; pass++)
  {
    for (int i = 1; i < size; i++)
      if (numbers[i] < numbers[i - 1])
        swap(numbers, i, i - 1);
  }
}

int main()
{
  int numbers[] = {20, 40, 10, 50, 45};
  sort(numbers, size(numbers));
  for (int number : numbers)
    cout << number << endl;

  system("PAUSE");
  return 0;
}