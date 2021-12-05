/* The algorithm selection sort proceeds by finding the smallest 
   (or largest, depending on sorting order) element in the unsorted 
   sublist, exchanging it with the leftmost unsorted element and 
   moving the sublist boundaries one element to the right. 
    
   Worst-case Time Complexity: O(n^2) */

// Header files
#include <iostream>

// Function prototype
void selectionSort(int[]);

int main() {

    int numbers[10] = {5, 6, 7, 3, 2, 100, 10, 20, 1, -156};
	selectionSort(numbers);
	
	return 0;
}

// Function to perform selection sort
void selectionSort(int numbers[10]) {
	for (size_t i = 0; i < 9; i++) {
		int minIdx = i; 
		for (size_t j = i + 1; j < 10; j++) {
			if (numbers[j] < numbers[minIdx]) {
				minIdx = j; 
			}
			int tempNumber = numbers[i]; 
			numbers[i] = numbers[minIdx];
			numbers[minIdx] = tempNumber;
		}
	}
	// Printing sorted array to the console
	for (size_t i = 0; i < 10; i++) {
		std::cout << numbers[i] << std::endl;
	}
}

