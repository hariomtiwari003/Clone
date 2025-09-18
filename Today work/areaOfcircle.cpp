#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.14159;  // you can also use M_PI from <cmath>

    cout << "Enter radius of circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of circle = " << area << endl;

    return 0;
}
