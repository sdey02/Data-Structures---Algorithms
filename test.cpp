#include <iostream>
#include <vector>

struct Array{
    int *array;
    int size {0};
    int length {0};
};

void insert(int index, int value, Array& arr){
    if(index < arr.size){
        int temp {0};
        for(std::size_t i {index}; i < arr.size; i++){
            temp = arr.array[i +1];
            arr.array[i +1] = arr.array[i];
        }
        arr.array[index] = value;
    }
}

void delete_val(int index, Array& arr){
    if((index >= 0) && (index < arr.size)){
        int deleted_value {arr.array[index]};
        for(std::size_t i {index}; i < arr.length - 1; i++){
            arr.array[i] = arr.array[i+1];
        }
        arr.length--;
    }
}

std::size_t linear_search(int value, Array& arr){
    for(std::size_t i {0}; i < arr.size; i++){
        if (arr.array[i] == value){
            return i;
        }
        return 0;
    }
}

std::size_t binary_search(int value, Array& arr) {
    int low = 0;
    int high = arr.size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr.array[mid] == value) {
            return mid;
        } else if (arr.array[mid] > value) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}

void reverse(Array& arr){
    for (std::size_t i {0}; i < arr.size/2 ; i++){
        std::swap(arr.array[i], arr.array[arr.size-1-i]);
    }
}

int main() {
    struct Array arr;
    std::cin >> arr.size;
    arr.array = new int[arr.size];
    arr.length = 3;

    arr.array[0] = 10;
    arr.array[1] = 14;
    arr.array[2] = 138;

    for(std::size_t i {0}; i < arr.size; i++){
        std::cout << arr.array[i] << std::endl;
    }

    return 0;
}


