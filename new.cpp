#include <bits/stdc++.h>
using namespace std;

class areaof
{
public:
    double pi = 3.14;
    double area;
    double circlearea(int r)
    {
        area = (pi * r * r);
        return area;
    }

    double trianglearea(int b, int h);
};

double areaof ::trianglearea(int b, int h)
{
    area = 0.5 * (b * h);
    return area;
}
int main()
{
    areaof A1;
    int Circle = A1.circlearea(3);
    int Triangle = A1.trianglearea(4, 5);

    cout << "Area of Circle is " << Circle << endl;
    cout << "Area of Triangle is " << Triangle << endl;
    return 0;
}