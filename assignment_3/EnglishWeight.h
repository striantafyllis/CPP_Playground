//
// Created by Spyros Triantafyllis on 12/21/22.
//

#ifndef C___PLAYGROUND_ENGLISHWEIGHT_H
#define C___PLAYGROUND_ENGLISHWEIGHT_H

#include <iostream>
#include <cmath>

using namespace std;

class EnglishWeight {
public:
    EnglishWeight() :
    EnglishWeight(0.0) {}

    EnglishWeight(unsigned int pounds, double ounces) :
    EnglishWeight(pounds * 16 + ounces) {}

    void set(int pounds, double ounces) {
        if (ounces < 0 || ounces > 16) {
            throw invalid_argument("Bad number of ounces");
        }
        set(pounds * 16 + ounces);
    }

    double get_ounces() const {
        return fmod(raw_ounces, 16);
    }

    unsigned int get_pounds() const {
        return (unsigned int) ((raw_ounces - get_ounces()) / 16);
    }

    EnglishWeight operator+(const EnglishWeight &) const;
    EnglishWeight operator-(const EnglishWeight &) const;
    double operator/(const EnglishWeight &) const;
    EnglishWeight operator*(double) const;
    EnglishWeight operator/(double) const;

private:
    double raw_ounces;

    EnglishWeight(double raw_ounces) {
        set(raw_ounces);
    }

    void set(double raw_ounces) {
        if (raw_ounces < 0) {
            throw new invalid_argument("Negative weights not supported");
        }

        this->raw_ounces = raw_ounces;
    }
};

EnglishWeight operator*(double, const EnglishWeight &);

ostream& operator<<(ostream&, const EnglishWeight &);
istream& operator>>(istream&, EnglishWeight&);


#endif //C___PLAYGROUND_ENGLISHWEIGHT_H
