#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

bool isCollision(const Circle& circle, const Point& point) {
    double distance = sqrt(pow(circle.center.x - point.x, 2) + pow(circle.center.y - point.y, 2));
    return distance <= circle.radius;
}

bool canReachDestination(int X, int Y, const vector<Circle>& obstacles) {
    Point destination = { X, 0 };
    for (int i = 0; i < obstacles.size(); i++) {
        if (isCollision(obstacles[i], destination)) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int N;
        cin >> N;

        vector<Circle> obstacles(N);
        for (int i = 0; i < N; i++) {
            cin >> obstacles[i].center.x >> obstacles[i].center.y >> obstacles[i].radius;
        }

        bool canReach = canReachDestination(X, Y, obstacles);
        if (canReach) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
