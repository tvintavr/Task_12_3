#include <iostream>
#include <cassert>

float travelTime(float &distance, float &speed) {
    assert (speed>0);
    assert (distance>0);
    return distance/speed;
}

int main() {
    std::cout<<"Введите расстояние: ";
    float distance;
    std::cin>>distance;

    std::cout<<"Введите скорость: ";
    float speed;
    std::cin>>speed;

    std::cout<<"Время в пути: "<<travelTime(distance, speed)<<std::endl;
}