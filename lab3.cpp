#include <iostream>
class Figura
{
private:
    double pole;

public:
    void   setPole(double Pole) { pole = Pole; }
    double getPole() { return pole; }

    Figura(double p) : pole{p} {}
};
class Kolo : public Figura
{
public:
    Kolo(double r) : Figura{3 * r ^ 2} { return getPole(); }
};

int main()
{
    Kolo k{2};
}
