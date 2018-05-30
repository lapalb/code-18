///Example program to show run time polymorphism

#include<bits/stdc++.h>
using namespace std;

class Car{
    protected:
    int tyres;
    public:
    Car(int t)
    {
        tyres=t;
    }
    virtual void show()
    {
        cout<<"Inside the Car Class, the number of tyre is"<<this->tyres;
    }
};

class SuperCar : public Car{
    int nitroBooster;
    public:
    SuperCar(int t,int nb): Car(t)
    {

        nitroBooster=nb;
    }
    void show()
    {
        cout<<"The Number of tyre is "<<this->tyres <<" and number of nitroBooster is "<<this->nitroBooster<<endl;
    }
};

int main()
{
    Car alto(4);
    SuperCar Bugatti(4,2);
    Car * ptr=&Bugatti;
    ptr->show();
}
