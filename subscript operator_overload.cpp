#include <iostream>
#include<string>
using namespace std;
template <typename Satish>
class DynamicArray {
private:
    Satish* data;        // Pointer to the array's first element
    int capacity;     // Total capacity of the array
    int size;         // Current number of elements

    // Function to resize the array when needed
    void resize(int new_capacity) {
        Satish* temp = new Satish[new_capacity];  // Allocate new array with increased capacity
        
        // Copy old data to the new array
        for (int i = 0; i < size; ++i) {
            temp[i] = data[i];
        }
        
        // Delete old array and assign new array
        delete[] data;
        data = temp;
        capacity = new_capacity;
    }

public:
    // Constructor
    DynamicArray() {
        size = 0;
        capacity = 2;            // Start with a small capacity
        data = new Satish[capacity]; // Allocate initial memory
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;  // Free allocated memory
    }

    // Function to add elements
    void add(Satish value) {
        if (size == capacity) {
            resize(capacity * 2);  // Double the capacity when full
        }
        data[size++] = value;      // Add the new element and increment size
    }

    // Function to get an element at a specific index
    Satish& operator[](int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        std::cerr << "Index out of bounds!" << std::endl;
        //return -1;  // Return an invalid value if index is out of bounds
    }

    // Function to remove the last element
    void remove() {
        if (size > 0) {
            size--;  // Simply decrease the size; the data remains in memory
        }
    }

    // Function to get the size of the array
    int getSize() const {
        return size;
    }

    // Function to get the capacity of the array
    int getCapacity() const {
        return capacity;
    }
};

int main() {
    DynamicArray<int> arr;
    DynamicArray<string> arr1;

    // Adding elements
    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.add(40);
    
    // Adding elements
    arr1.add("Satish");
    arr1.add("Ravi");
    arr1.add("Varun");
    arr1.add("Kiran");

    // Getting elements
    for (int i = 0; i < arr.getSize(); i++) {
        std::cout << "Element at index " << i << ": " << arr[i] << std::endl;
    }
    // Getting elements
    for (int i = 0; i < arr1.getSize(); i++) {
        std::cout << "Element at index " << i << ": " << arr1[i] << std::endl;
    }

    // Removing an element
    arr.remove();
    std::cout << "After removing an element, size: " << arr.getSize() << std::endl;
    // Removing an element
    arr1.remove();
    std::cout << "After removing an element, size: " << arr1.getSize() << std::endl;

    return 0;
}
