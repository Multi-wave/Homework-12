#include <iostream>

int main() {
    int numbers[] = { 114,111,106,107,108,105,115,108,110,109,112,113,116,117,118 };
    int sumMas = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < 15; ++i) {
        if (numbers[i] > max) max = numbers[i];
        sumMas += numbers[i];
    }
    int sumExp = 0;
    ++max;
    for (int i = 0; i < 15; ++i) {
        sumExp += max - i;
    }
    std::cout << "Match = " << max - (sumExp - sumMas);
}