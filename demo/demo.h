#ifndef DEMO_H
#define DEMO_H

#include <QWidget>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <QDebug>

class demo : public QWidget
{
    Q_OBJECT

public:
    demo(QWidget *parent = 0);
    ~demo();
};

#endif // DEMO_H
