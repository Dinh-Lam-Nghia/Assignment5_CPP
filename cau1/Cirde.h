#include <iostream>
using namespace std;

class Cirde{
    private:
        float radius;
        float pi = 3.14159;
        float Area;
        float Diameter;
        float Circumference;

    public:
        Cirde();
        Cirde(float radius); 

        float getRadius();
        void setRadius(float radius);

        float getArea(float radius, float pi);
        float getDiameter(float radius);
        float getCircumference(float radius, float pi);

        void input();

};