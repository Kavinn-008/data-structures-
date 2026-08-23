#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// =========================
// Base Shape Class
// =========================
class Shape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};


// =========================
// Point
// =========================
class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "(" << x << ", " << y << ")";
    }
};


// =========================
// Line
// =========================
class Line : public Shape {
private:
    Point p1, p2;

public:
    Line(Point a, Point b) {
        p1 = a;
        p2 = b;
    }

    void draw() override {
        cout << "Line: ";
        p1.display();
        cout << " -> ";
        p2.display();
        cout << endl;
    }

    double area() override {
        return 0;
    }

    double length() {
        return sqrt(
            pow(p2.x - p1.x, 2) +
            pow(p2.y - p1.y, 2)
        );
    }
};


// =========================
// Circle
// =========================
class Circle : public Shape {
private:
    Point center;
    double radius;

public:
    Circle(Point c, double r) {
        center = c;
        radius = r;
    }

    void draw() override {
        cout << "Circle: Center ";
        center.display();
        cout << ", Radius = " << radius << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }

    double circumference() {
        return 2 * 3.14159 * radius;
    }
};


// =========================
// Rectangle
// =========================
class Rectangle : public Shape {
private:
    Point topLeft;
    double width;
    double height;

public:
    Rectangle(Point p, double w, double h) {
        topLeft = p;
        width = w;
        height = h;
    }

    void draw() override {
        cout << "Rectangle: Position ";
        topLeft.display();
        cout << ", Width = " << width
             << ", Height = " << height << endl;
    }

    double area() override {
        return width * height;
    }
};


// =========================
// CAD Application
// =========================
class CAD {
private:
    vector<Shape*> shapes;

public:

    void addShape(Shape* shape) {
        shapes.push_back(shape);
    }

    void displayAll() {
        if (shapes.empty()) {
            cout << "\nNo shapes created.\n";
            return;
        }

        cout << "\n===== DRAWING =====\n";

        for (int i = 0; i < shapes.size(); i++) {
            cout << i + 1 << ". ";
            shapes[i]->draw();
        }
    }

    void showAreas() {
        cout << "\n===== AREAS =====\n";

        for (int i = 0; i < shapes.size(); i++) {
            cout << "Shape " << i + 1
                 << " Area = "
                 << shapes[i]->area()
                 << endl;
        }
    }

    ~CAD() {
        for (Shape* shape : shapes) {
            delete shape;
        }
    }
};


// =========================
// Main
// =========================
int main() {

    CAD cad;

    int choice;

    do {

        cout << "\n========== MINI CAD ==========\n";
        cout << "1. Create Line\n";
        cout << "2. Create Circle\n";
        cout << "3. Create Rectangle\n";
        cout << "4. Display Drawing\n";
        cout << "5. Show Areas\n";
        cout << "6. Exit\n";
        cout << "==============================\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {

            double x1, y1, x2, y2;

            cout << "Enter first point (x y): ";
            cin >> x1 >> y1;

            cout << "Enter second point (x y): ";
            cin >> x2 >> y2;

            Point p1(x1, y1);
            Point p2(x2, y2);

            Line* line = new Line(p1, p2);

            cad.addShape(line);

            cout << "Line created!\n";
        }

        else if (choice == 2) {

            double x, y, radius;

            cout << "Enter center (x y): ";
            cin >> x >> y;

            cout << "Enter radius: ";
            cin >> radius;

            Point center(x, y);

            Circle* circle = new Circle(center, radius);

            cad.addShape(circle);

            cout << "Circle created!\n";
        }

        else if (choice == 3) {

            double x, y, width, height;

            cout << "Enter top-left point (x y): ";
            cin >> x >> y;

            cout << "Enter width: ";
            cin >> width;

            cout << "Enter height: ";
            cin >> height;

            Point p(x, y);

            Rectangle* rectangle =
                new Rectangle(p, width, height);

            cad.addShape(rectangle);

            cout << "Rectangle created!\n";
        }

        else if (choice == 4) {
            cad.displayAll();
        }

        else if (choice == 5) {
            cad.showAreas();
        }

        else if (choice == 6) {
            cout << "Exiting CAD...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}