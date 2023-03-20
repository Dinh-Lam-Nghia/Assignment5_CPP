#include "Cirde.h"


Cirde::Cirde(){
    this->radius = 0.0;
}

Cirde::Cirde(float radius){
    this->radius = radius;
    getArea(this->radius, this->pi);
    getDiameter(this->radius);
    getCircumference(this->radius, this->pi);

}

float Cirde::getRadius(){return this->radius;};
void Cirde::setRadius(float radius){this->radius = radius;};

float Cirde::getArea(float radius, float pi){
    return this->Area = pi * radius * radius;
}

float Cirde::getDiameter(float radius){
    return this->Diameter = radius * 2.0;
}

float Cirde::getCircumference(float radius, float pi){
    return this->Circumference = 2.0 * pi * radius;
}

void Cirde::input(){
    cout << "radius: " << this->radius << endl
         << "Area: " << this->Area << endl
         << "Diameter: " << this->Diameter << endl
         << "Circumference: " << this->Circumference << endl;
}