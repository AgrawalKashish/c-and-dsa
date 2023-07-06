#include <iostream>
#include <vector>

using namespace std;

int minimizeDropOperations(vector<int>& numbers) {
    int count = 0;
    int n = numbers.size();
    
    // Count the number of odd numbers
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    // If the number of odd numbers is even, no drops are needed
    if (oddCount % 2 == 0) {
        return count;
    }
    
    // If the number of odd numbers is odd, drop one odd number
    count++;
    
    // Find the first odd number and drop it
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            numbers.erase(numbers.begin() + i);
            break;
        }
    }
    
    return count;
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    
    vector<int> numbers(N);
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    int minDropOperations = minimizeDropOperations(numbers);
    cout << "Minimum drop operations required: " << minDropOperations << endl;
    
    return 0;
}

        
      