#include <cmath>
#include <iostream>

int main() {
    double height, distance, corner, speed;
    const double pi(3.1415), gravity(9.8);

    std::cout << "Enter H" << std::endl;
    std::cin >> height;

    std::cout << "Enter L" << std::endl;
    std::cin >> distance;

    corner = (atan(4 * height / distance) * 180 / pi);
    std::cout << corner << std::endl;

    speed = sqrt(gravity * distance / (sin(2 * corner * pi / 180)));
    std::cout << speed << std::endl;

    return 0;
}