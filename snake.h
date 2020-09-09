#pragma once
#include <QKeyEvent>
#include <QWidget>
#include <QtGamepad/QGamepad>
#include <QWidget>

class Snake : public QWidget {
    Q_OBJECT
public:
    Snake(QWidget *parent = 0);
    QGamepad qq;

protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);
public slots:
    void changeLeftX();
private:
    QImage dot;
    QImage dot2;
    QImage dot3;
    QImage dot4;
    QImage head;
    QImage head2;
    QImage apple;
    QImage apple2;

    static const int B_WIDTH = 300;
    static const int B_HEIGHT = 300;
    static const int DOT_SIZE = 10;
    static const int ALL_DOTS = 900;
    static const int RAND_POS = 29;
    static const int DELAY = 140;

    int timerId;
    int dots;
    int apple_x;
    int apple_y;

    int x[ALL_DOTS];
    int y[ALL_DOTS];

    bool leftDirection;
    bool rightDirection;
    bool upDirection;
    bool downDirection;
    bool inGame;

    void loadImages();
    void initGame();
    void locateApple();
    void checkApple();
    void checkCollision();
    void move();
    void doDrawing();
    void gameOver(QPainter &);
};
