#include <iostream>
#include <cmath> // For sqrt and round functions

int main() {
    int radius = 10; // Change this to increase or decrease the circle's size
    int diameter = 2 * radius;

    // Center coordinates
    int h = radius;
    int k = radius;

    for (int y = 0; y <= diameter; y++) {
        for (int x = 0; x <= diameter; x++) {
            // Calculate distance from the center
            double distance = sqrt((x - h) * (x - h) + (y - k) * (y - k));

            // If distance is within the radius, print '*'
            if (distance > radius - 0.5 && distance < radius + 0.5) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
