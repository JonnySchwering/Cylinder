#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
class Cylinder {
private:
    double radius;
    double height;

public:
    // Constructor
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Getter for radius
    double getRadius() const {
        return radius;
    }

    // Setter for radius
    void setRadius(double r) {
        radius = r;
    }

    // Getter for height
    double getHeight() const {
        return height;
    }

    // Setter for height
    void setHeight(double h) {
        height = h;
    }

    // Calculate the volume of the cylinder
    double calculateVolume() const {
        return M_PI * radius * radius * height;
    }

    // Calculate the surface area of the cylinder
    double calculateSurfaceArea() const {
        return 2 * M_PI * radius * (radius + height);
    }
};

int main() {
    // Create a Cylinder object with radius 3.0 and height 5.0
    Cylinder myCylinder(3.0, 5.0);

    // Display the cylinder's properties
    std::cout << "Cylinder properties:" << std::endl;
    std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
    std::cout << "Height: " << myCylinder.getHeight() << std::endl;
    std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;
    std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;

    // Update the radius and height
    myCylinder.setRadius(4.0);
    myCylinder.setHeight(6.0);

    // Display the updated properties
    std::cout << "\nUpdated Cylinder properties:" << std::endl;
    std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
    std::cout << "Height: " << myCylinder.getHeight() << std::endl;
    std::cout << "Volume: " << myCylinder.calculateVolume() << std::endl;
    std::cout << "Surface Area: " << myCylinder.calculateSurfaceArea() << std::endl;

    return 0;
}
