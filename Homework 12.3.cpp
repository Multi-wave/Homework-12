#include <iostream>

int main() {
    float numbers[15];
    for (int i = 0 ; i < 15 ; ++i){
        std::cout << "Enter a number #" << i << ": ";
        std::cin >> numbers [i];
    }
    float temp;
    for (int i = 0 ; i < 15 ; ++i){
        for (int j = 0; j < 15-i ; ++j){
            if (numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1]= temp;
            }
        }
    }
    for (int i = 0 ; i < 15 ; ++i){
        std::cout << numbers[i] << "\t";
    }
}
