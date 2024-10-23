#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Point2D {
public:
    double x;
    double y;

    Point2D() : x(0), y(0) {}
    Point2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    void setX(double x) {
        this->x = x;
    }
    void setY(double y) {
        this->y = y;
    }
    double getX() {
        return this->x;
    }
    double getY() {
        return this->y;
    }
    
    double isEqual(const Point2D& other){
        return this->x == other.x && this->y == other.y;
     }
};

class Rectangle {
public:
    // TODO
    Point2D bottomLeft;
    double width;
    double height;
    
    Rectangle(const Point2D& bottomLeft, const Point2D& topRight) {
        this->bottomLeft = bottomLeft;
        this->width = abs(bottomLeft.x - topRight.x);
        this->height = abs(bottomLeft.y - topRight.y);
    }
    void setBottomLeft(Point2D bottomLeft) {
        this->bottomLeft = bottomLeft;;       
    }
    void setWidth(double width) {
        this->width = width;
    }
    void setHeight(double height) {
        this->height = height;
    }

    Point2D getBottomLeft() {
        return this->bottomLeft;
    }
    double getWidth() {
        return this->width;
    }
    double getHeight() {
        return this->height;
    }

    double perimeter() {
        return 2 * (this->width + this->height);
    }
    double area() {
        return this->width * this->height;
    }
    bool isEqual(const Rectangle& other) {
        return this->bottomLeft.isEqual(other.bottomLeft) && this->width == other.width && this->height == other.height;
    } 
};

int main() {
    Point2D p1(0,0);
    Point2D p2(10,20);
    
    Rectangle r1(p1, p2);
    Rectangle r2(p1, p2);

    cout<< r1.getWidth() << " " << r1.getHeight() << endl;
    cout<< r2.perimeter() << endl;
    cout<< r1.area() << endl;
    cout<< r2.getWidth() << " " << r2.getHeight() << endl;
    cout<< r2.area() << endl;
    
    string message = r1.isEqual(r2)? "rectangles are equal" : "rectangles are not equal";
    cout<< message << endl;


    return 0;
}