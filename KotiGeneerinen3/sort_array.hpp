#ifndef SORT_ARRAY_HPP
#define SORT_ARRAY_HPP

template <typename T>
void sortArray(T* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Vaihto
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#endif
