#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;

    cout << "Enter the number of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = static_cast<float>(sum) / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}