#include <iostream>
using namespace std;

void print_matrix(int array[10][10]) {
    extern int palindrome_sum(int integers[],int length);
extern int sum_integers(int integers[],int length);
extern bool is_array_palindrome(int integers[],int length);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}