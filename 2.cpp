#include <iostream>

void merge(int* start, int* mid) {
  while (start < mid) {
    if (*mid < *start) {
      // Swap elements
      int temp = *start;
      *start = *mid;
      *mid = temp;
      // Move mid pointer one step back
      mid--;
    } else {
      // Move start pointer one step forward
      start++;
    }
  }
}

int main() {
  int arr[10] = {5, 2, 8, 3, 1, 6, 4, 7, 9, 0};
  int* start = arr;
  int* mid = arr + 5; // Middle element of the array

  std::cout << "Original array: ";
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  merge(start, mid);

  std::cout << "Array after merge: ";
  for (int i = 0; i < 10; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}