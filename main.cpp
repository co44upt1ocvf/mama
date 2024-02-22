#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("chcp 65001");
    vector<vector<double>> array(4, vector<double>(4));

    for (int i = 0; i < 4; ++i) {
        cout << "Введите 4 элемента для " << i + 1 << "-й строки через пробел:";
        for (int j = 0; j < 4; ++j) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        double sum = 0;
        for (int j = 0; j < 4; ++j) {
            sum += array[i][j];
        }
        cout << "Среднее арифметическое элементов " << i + 1 << "-й строки: " << sum / 4 << endl;
    }

    return 0;
}