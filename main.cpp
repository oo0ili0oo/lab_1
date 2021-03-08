#include <cmath>
#include <iostream>

using namespace std;

double check(const string& x){
    double y;
    do
    {
        cin.clear();
        cin.sync();
        cout << "Enter " << x << ":";
        cin>>y;
        if(y <= 0)
            cout<<"That is not positive number!\n";
    }while(y<=0);
    return y;
}

int main() {
    double height, distance, corner, speed;
    const double pi(3.1415), gravity(9.8);

    height = check("H");
    distance = check("L");

    corner = (atan(4 * height / distance) * 180 / pi);
    cout << "Corner is " << corner;

    speed = sqrt(gravity * distance / (sin(2 * corner * pi / 180)));
    cout << "\n" << "Speed is " << speed;

    return 0;
}