//
// Created by Josiah Arroyo on 2/22/21.
//

#include "Tweet.h"

Tweet::Tweet() {
    ID = 0;
    tweetContent = "";
    sentiment = 2;
}

Tweet::Tweet(DSString ID, DSString tweetContent, int sentiment) {
    this->ID = ID;
    this->tweetContent = tweetContent;
    this->sentiment = sentiment;
}

DSString Tweet::getID() {
    return ID;
}
void Tweet::setID(DSString ID) {
    this->ID = ID;
}

DSString Tweet::getTweetContent() {
    return tweetContent;
}
void Tweet::setTweetContent(DSString tweetContent) {
    this->tweetContent = tweetContent;
}

int Tweet::getSentiment() {
    return sentiment;
}
void Tweet::setSentiment(int sentiment) {
    this->sentiment = sentiment;
}