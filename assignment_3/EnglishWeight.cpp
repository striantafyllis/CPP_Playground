//
// Created by Spyros Triantafyllis on 12/21/22.
//

#include <iostream>
#include <cmath>
#include "EnglishWeight.h"

using namespace std;

EnglishWeight EnglishWeight::operator+(const EnglishWeight& other) const {
    return EnglishWeight(this->raw_ounces + other.raw_ounces);
}

EnglishWeight EnglishWeight::operator-(const EnglishWeight& other) const {
    return EnglishWeight(this->raw_ounces - other.raw_ounces);
}

double EnglishWeight::operator/(const EnglishWeight& other) const {
    return this->raw_ounces / other.raw_ounces;
}

EnglishWeight EnglishWeight::operator*(double factor) const {
    return EnglishWeight(factor * this->raw_ounces);
}

EnglishWeight EnglishWeight::operator/(double factor) const {
    return EnglishWeight(this->raw_ounces / factor);
}

EnglishWeight operator*(double factor, const EnglishWeight &weight) {
    return weight * factor;
}

ostream& operator<<(ostream& stream, const EnglishWeight& weight) {
    return stream << weight.get_pounds() << "lb " << weight.get_ounces() << "oz";
}

istream& operator >>(istream& stream, EnglishWeight &weight) {
    unsigned int pounds;
    double ounces;

    stream >> pounds >> ounces;

    weight.set(pounds, ounces);
    return stream;
}



