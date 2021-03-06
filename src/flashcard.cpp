#include "flashcard.h"

Flashcard::Flashcard(void) {

}

Flashcard::Flashcard(std::string front, std::string back) {
    this->setFront(front);
    this->setBack(back);
}

std::string Flashcard::getFront() {
    return this->front;
}

void Flashcard::setFront(std::string front) {
    this->front = front;
}

std::string Flashcard::getBack() {
    return this->back;
}

void Flashcard::setBack(std::string back) {
    this->back = back;
}

unsigned int Flashcard::getRepetition() {
    return this->repetition;
}

void Flashcard::setRepetition(unsigned int repetition) {
    this->repetition = repetition;
}

unsigned int Flashcard::getInterval() {
    return this->interval;
}

void Flashcard::setInterval(unsigned int interval) {
    this->interval = interval;
}

float Flashcard::getEasinessFactor() {
    return this->easinessFactor;
}

void Flashcard::setEasinessFactor(float easinessFactor) {
    this->easinessFactor = easinessFactor;
}

unsigned long long Flashcard::getPreviousDate() {
    return this->previousDate;
}

void Flashcard::setPreviousDate(unsigned long long previousDate) {
    this->previousDate = previousDate;
}

unsigned long long Flashcard::getNextDate() {
    return this->nextDate;
}

void Flashcard::setNextDate(unsigned long long nextDate) {
    this->nextDate = nextDate;
}
