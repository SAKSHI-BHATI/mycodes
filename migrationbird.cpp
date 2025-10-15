#include <iostream>
using namespace std;

int migratoryBirds(int arr_count, int* arr) {
    int freq[6] = {0}; // Index 1-5 for bird types

    // Count frequency of each bird type
    for (int i = 0; i < arr_count; i++) {
        freq[arr[i]]++;
    }

    // Find the bird type with the maximum frequency
    int max_freq = 0;
    int bird_type = 0;

    for (int i = 1; i <= 5; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            bird_type = i;
        }
    }

    return bird_type;
}

int main() {
    int birds[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 4, 3};
    int n = sizeof(birds) / sizeof(birds[0]);
    int result = migratoryBirds(n, birds);
    cout << "Most frequent bird type: " << result << endl;
    return 0;
}
