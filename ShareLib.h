#ifndef SHARELIB_H
#define SHARELIB_H

#include "sharelib_global.h"

class SHARELIBSHARED_EXPORT ShareLib
{

public:
    ShareLib();

    int sum(int x, int y);

    friend int Sum(int x, int y);
};

int Sum(int x, int y)
{
    return x + y;
}

#endif // SHARELIB_H
