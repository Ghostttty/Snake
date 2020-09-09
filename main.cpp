#include <QCoreApplication>
#include <QApplication>
#include <QWidget>
#include "snake.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Snake ww;

      ww.setWindowTitle("Snake");
      ww.show();
    return a.exec();
}
