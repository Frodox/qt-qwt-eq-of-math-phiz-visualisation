/* Some usefull description
 * task
 * date: nov 2012
 * author: Christian Evans
 * Var 1
 **/

//-----------------------------------------------------------------
#include <QApplication>
#include <QTextCodec>

#include "lab1.h"
/*-----------------------------------------------------------------*/

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));

    QApplication app(argc, argv);

    QwtBeginner *wnd = new QwtBeginner;
    wnd->show();

    return app.exec();
}
