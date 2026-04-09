#include <iostream>
#include <chrono> // ✅ for time measurement
using namespace std;

int main()
{

    // ⏱️ Start time
    auto start = chrono::high_resolution_clock::now();

    // ===== Your Code =====
    int age = 25;
    cout << "My age is " << age << endl;
    cout << sizeof(age) << endl;

    float pi = 3.14;
    cout << "Value of pi is " << pi << endl;
    cout << sizeof(pi) << endl;

    char grade = 'A';
    cout << "My grade is " << grade << endl;
    cout << sizeof(grade) << endl;

    double distance = 12345.6789;
    cout << "Distance is " << distance << endl;
    cout << sizeof(distance) << endl;

    bool is_It_safe = true;
    cout << "Is it safe? " << is_It_safe << endl;
    cout << sizeof(is_It_safe) << endl;
    // =====================

    // ⏱️ End time
    auto end = chrono::high_resolution_clock::now();

    // ⏱️ Duration
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    cout << "\nExecution time: " << duration.count() << " microseconds" << endl;

    return 0;
}