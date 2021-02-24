//
// Created by Josiah Arroyo on 2/22/21.
//

#include "Word.h"

//default constructor
Word::Word() {
    this->str = "";
    this->countPos = 0;
    this->countNeg = 0;
}

//constructor with preset DSString and countPos and countNeg
Word::Word(DSString str, int countPos, int countNeg) {
    this->str = str;
    this->countPos = countPos;
    this->countNeg = countNeg;
}

//returns the DSString
DSString Word::getDSString() {
    return str;
}
//sets the DSString
void Word::setDSString(const DSString &str) {
    this->str = str;
}

//Checks the count of Positives
int Word::getPositive() {
    return countPos;
}
//Checks the count of Positives
void Word::setPositive(int countPos) {
    this->countPos = countPos;
}

//Checks the count of Negatives
int Word::getNegative() {
    return countNeg;
}
//Checks the count of Negatives
void Word::setNegative(int countNeg) {
    this->countNeg = countNeg;
}




