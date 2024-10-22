#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція для генерації випадкового масиву
void generateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Генерація чисел від 0 до 99
    }
}

// Функція для виведення масиву
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

// Функція для пошуку індексів мінімального та максимального елементів
void findMinMaxIndexes(const int arr[], int size, int &minIndex, int &maxIndex) {
    minIndex = 0;
    maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
}

// Функція для обчислення суми індексів мінімального та максимального елементів
int sumOfIndexes(int minIndex, int maxIndex) {
    return minIndex + maxIndex;
}

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    const int SIZE = 10;
    int arr[SIZE];

    // Генерація та виведення початкового масиву
    generateArray(arr, SIZE);
    cout << "Initial array:" << endl;
    printArray(arr, SIZE);

    // Пошук індексів мінімального та максимального елементів
    int minIndex, maxIndex;
    findMinMaxIndexes(arr, SIZE, minIndex, maxIndex);

    // Обчислення суми індексів
    int sumIndexes = sumOfIndexes(minIndex, maxIndex);

    // Виведення результатів
    cout << "Min element index: " << minIndex << ", Max element index: " << maxIndex << endl;
    cout << "Sum of indexes: " << sumIndexes << endl;

    return 0;
}
