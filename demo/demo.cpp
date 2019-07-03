#include "demo.h"
#include "inc/ShareLib.h"

demo::demo(QWidget *parent)
    : QWidget(parent)
{
    ShareLib slib;
    int s = 0, S = 0, a = 1, b = 2, c = 3, d = 4;
    s = slib.sum(a, b);
    S = Sum(c, d);

    qDebug() << "s =" << s;
    qDebug() << "S =" << S;
}

demo::~demo()
{

}
