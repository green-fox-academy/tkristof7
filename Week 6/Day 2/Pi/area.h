//
// Created by tothk on 2019. 05. 14..
//

#ifndef PI_AREA_H
#define PI_AREA_H
#define PI 3.14

float areaOfCircle(int radius)
{
    double area = radius * radius * PI;
    return area;
}

float circumferenceOfCircle(int radius)
{
    float circumfence = 2 * radius * PI;
    return circumfence;
}

#endif //PI_AREA_H
