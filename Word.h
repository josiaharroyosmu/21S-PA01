//
// Created by Josiah Arroyo on 2/22/21.
//

#ifndef INC_21S_PA01_WORD_H
#define INC_21S_PA01_WORD_H
#include "DSString.h"


class Word {
private:
    DSString str;
    int countPos;
    int countNeg;
    bool stopWord;
public:
    Word();
    Word(DSString str, int countPos, int countNeg);
    DSString getDSString();
    void setDSString(const DSString&);
    int getPositive();
    void setPositive(int countPos);
    int getNegative();
    void setNegative(int countNeg);
    bool getStopWord();
    void setStopWord(bool stopWord);
    bool checkIfStopWord(DSString stopWord);
};




#endif //INC_21S_PA01_WORD_H
