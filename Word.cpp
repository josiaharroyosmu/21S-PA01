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

bool Word::getStopWord() {
    return stopWord;
}
void Word::setStopWord(bool stopWord) {
    this->stopWord = stopWord;
}

//list of Words taken from https://gist.github.com/sebleier/554280
bool Word::checkIfStopWord(DSString stopWord) {
    if (stopWord == "a" || stopWord == "i" || stopWord == "me" || stopWord == "myself" || stopWord == "we" || stopWord == "our" || stopWord == "ours" || stopWord == "ourselves" || stopWord == "you" ||stopWord == "your" || stopWord == "yours" || stopWord == "yourself" || stopWord == "yourselves" || stopWord == "he" || stopWord == "him" ||
            stopWord == "his" || stopWord == "himself" || stopWord == "she" || stopWord == "her" || stopWord == "hers" || stopWord == "herself" || stopWord == "it" || stopWord == "its" ||
            stopWord == "itself" || stopWord == "they" || stopWord == "them" || stopWord == "their" || stopWord == "theirs" || stopWord == "themselves" || stopWord == "what" || stopWord == "which" || stopWord == "who" || stopWord == "whom" || stopWord == "this" || stopWord == "that" ||
            stopWord == "these" || stopWord == "those" || stopWord == "am" || stopWord == "is" || stopWord == "are" || stopWord == "was" ||
            stopWord == "were" || stopWord == "be" || stopWord == "been" || stopWord == "being" || stopWord == "has" || stopWord == "have" || stopWord == "had" ||
            stopWord == "having" || stopWord == "do" || stopWord == "does" || stopWord == "did" || stopWord == "doing" || stopWord == "an" ||
            stopWord == "the" || stopWord == "and" || stopWord == "but" || stopWord == "if" || stopWord == "or" || stopWord == "because" ||
            stopWord == "as" || stopWord == "until" || stopWord == "while" || stopWord == "of" || stopWord == "at" || stopWord == "by" ||
            stopWord == "for" || stopWord == "with" || stopWord == "about" || stopWord == "against" || stopWord == "between" || stopWord == "into" ||
            stopWord == "through" || stopWord == "during" || stopWord == "before" || stopWord == "after" || stopWord == "above" || stopWord == "below" ||
            stopWord == "to" || stopWord == "from" || stopWord == "up" || stopWord == "down" || stopWord == "in" || stopWord == "out" || stopWord == "on" ||
            stopWord == "off" || stopWord == "under" || stopWord == "over" || stopWord == "again" || stopWord == "further" || stopWord == "then" || stopWord == "than" ||
            stopWord == "once" || stopWord == "here" || stopWord == "there" || stopWord == "when" || stopWord == "where" || stopWord == "why" || stopWord == "how" ||
            stopWord == "all" || stopWord == "any" || stopWord == "both" || stopWord == "each" || stopWord == "few" || stopWord == "more" || stopWord == "most" ||
            stopWord == "other" || stopWord == "some" || stopWord == "such" || stopWord == "no" || stopWord == "nor" || stopWord == "not" || stopWord == "only" ||
            stopWord == "same" || stopWord == "so" || stopWord == "than" || stopWord == "too" || stopWord == "very" || stopWord == "can" || stopWord == "will" ||
            stopWord == "don't" || stopWord == "should" || stopWord == "now")
        return true;
    else
        return false;
}






