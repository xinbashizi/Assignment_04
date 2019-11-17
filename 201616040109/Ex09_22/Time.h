// Exercise 9.22 Solution: Time.h
#ifndef TIME_H
#define TIME_H
class Time
{
public:
    explicit Time();
    void setSeconds(int);
    unsigned int getSeconds()const;
    void printUniversal()const;
    void printStabdard()const;
    void tick();
private:
   unsigned int seconds;
};
#endif // TIME_H
