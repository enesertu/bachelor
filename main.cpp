#include <iostream>
#include <vector>
#include <map>
#include <random>
#include <ctime>
#include "Bachelor.h"
#include "Master.h"
#include "Doctoral.h"

using namespace std;

struct Point {
    double x;
    double y;
    double z;
};

typedef map<int, Point> MiP;

Point initPoint() {
    Point point;
    srand(time(NULL)); // seed the random number generator with the current time
    point.x = (double)rand() / RAND_MAX * 10;
    point.y = (double)rand() / RAND_MAX * 10;
    point.z = (double)rand() / RAND_MAX * 10;
    return point;
}

void printPoint(const vector<Point>& points) {
    for (int i = 0; i < points.size(); i++) {
        cout << "Point " << i+1 << ": x = " << points[i].x << ", y = " << points[i].y << ", z = " << points[i].z << endl;
    }
}

bool zGT5(const Point& point) {
    return point.z > 5;
}

int main() {
    // Define two objects for Master class and initialize the objects with data 
    Master m1(5, 6, "John", "Doe", "MIT", "Master of Engineering");
    Master m2(8, 7, "Jane", "Smith", "Stanford", "Master of Science");

    // Define two objects for Doctoral class and initialize the objects with data
    Doctoral d1(10, 12, "Bob", "Johnson", "Harvard", "Doctor of Philosophy");
    Doctoral d2(12, 15, "Alice", "Williams", "UC Berkeley", "Doctor of Science");

    // Define a Bachelor * vector with 4 items
    vector<Bachelor*> graduates;
    graduates.push_back(&m1);
    graduates.push_back(&m2);
    graduates.push_back(&d1);
    graduates.push_back(&d2);

    // Use a for loop to call print and performance methods.
    for (int i = 0; i < graduates.size(); i++) {
        graduates[i]->printResume();
        cout << "Performance: " << graduates[i]->performance() << endl;
    }
    // Define a Point vector with 20 items
    vector<Point> pointCloud;
    pointCloud.resize(20);
    // Use a generator function to initialize point vector
    for (int i = 0; i < pointCloud.size(); i++) {
        pointCloud[i] = initPoint();
    }
    // Print the point vector
    printPoint(pointCloud);
    // Define an integer vector with 20 items for mask
    vector<int> mask(20);
    // Use a predicate function to obtain mask vector
    for (int i = 0; i < pointCloud.size(); i++) {
        mask[i] = zGT5(pointCloud[i]);
    }
    // Print the mask vector
    cout << "Mask: [ ";
    for (int i = 0; i < mask.size(); i++) {
        cout << mask[i] << " ";
    }
    cout << "]" << endl;
    // Define a map
    MiP pointMap;
    // Assign point data corresponding to 1's in mask vector
    for (int i = 0; i < mask.size(); i++) {
        if (mask[i] == 1) {
            pointMap[i] = pointCloud[i];
        }
    }
    // Print the map
    cout << "Map: " << endl;
    for (auto it : pointMap) {
        cout << "Point " << it.first << ": x = " << it.second.x << ", y = " << it.second.y << ", z = " << it.second.z << endl;
    }
    return 0;
}


