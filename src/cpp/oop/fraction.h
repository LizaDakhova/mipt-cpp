//
// Created by dmitry on 2/7/17.
//

#ifndef FRACTION_H
#define FRACTION_H

class fraction {
private:
    int nominator;
    int denominator;
public:
    fraction(int, int);

    int get_nominator();

    int get_denominator();

    double value();

    void print();
};

#endif //FRACTION_H
