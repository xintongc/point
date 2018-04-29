#include <iostream>
#include "Point.h"

using namespace std;

ostream& operator<<(ostream &output, const Point &point){
    output << "(" << point.x << "," << point.y << ")" << endl;
    return output;
}

istream& operator>>(istream &input, Point &point){
    input >> point.x >> point.y;
    return input;
}

int main() {

    Point point = Point(1,2);
    cout << point;

    cin >> point;
    cout << point;



    return 0;
}