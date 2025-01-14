#include "gradientshow.h"
#include<QPainter>

GradientShow::GradientShow(QWidget *parent) :
    QWidget(parent)
{
}


void GradientShow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);

    // Gradient used with QBrush

    QLinearGradient linearGrad1(QPointF(100, 100), QPointF(200, 200));
    linearGrad1.setColorAt(0, Qt::white);
    linearGrad1.setColorAt(0.5, Qt::green);
    linearGrad1.setColorAt(1, Qt::black);
    linearGrad1.setSpread(QGradient::PadSpread);
    QRect rect_linear1(50,50,200,200);
    painter.fillRect(rect_linear1, linearGrad1);


    QLinearGradient linearGrad2(QPointF(100, 100), QPointF(200, 200));
    linearGrad2.setColorAt(0, Qt::white);
    linearGrad2.setColorAt(0.5, Qt::green);
    linearGrad2.setColorAt(1, Qt::black);
    linearGrad2.setSpread(QGradient::RepeatSpread);
    QRect rect_linear2(50,260,200,200);
    painter.fillRect(rect_linear2, linearGrad2);


    QLinearGradient linearGrad3(QPointF(100, 100), QPointF(200, 200));
    linearGrad3.setColorAt(0, Qt::white);
    linearGrad3.setColorAt(0.5, Qt::green);
    linearGrad3.setColorAt(1, Qt::black);
    linearGrad3.setSpread(QGradient::ReflectSpread);
    QRect rect_linear3(50,470,200,200);
    painter.fillRect(rect_linear3, linearGrad3);

    QRadialGradient radialGrad1(QPointF(400, 150), 100);
    radialGrad1.setColorAt(0, Qt::white);
    radialGrad1.setColorAt(0.5, Qt::green);
    radialGrad1.setColorAt(1, Qt::black);
    radialGrad1.setSpread(QGradient::PadSpread);
    QRect rect_radial1(300,50,200,200);
    painter.fillRect(rect_radial1, radialGrad1);

    QRadialGradient radialGrad2(QPointF(400, 150), 100);
    radialGrad2.setColorAt(0, Qt::white);
    radialGrad2.setColorAt(0.5, Qt::green);
    radialGrad2.setColorAt(1, Qt::black);
    radialGrad2.setSpread(QGradient::RepeatSpread);
    QRect rect_radial2(300,260,200,200);
    painter.fillRect(rect_radial2, radialGrad2);

    QRadialGradient radialGrad3(QPointF(400, 150), 100);
    radialGrad3.setColorAt(0, Qt::white);
    radialGrad3.setColorAt(0.5, Qt::green);
    radialGrad3.setColorAt(1, Qt::black);
    radialGrad3.setSpread(QGradient::ReflectSpread);
    QRect rect_radial3(300,470,200,200);
    painter.fillRect(rect_radial3, radialGrad3);

    QConicalGradient conicalGrad1(QPointF(650, 150), 90);
    conicalGrad1.setColorAt(0, Qt::white);
    conicalGrad1.setColorAt(0.5, Qt::green);
    conicalGrad1.setColorAt(1, Qt::black);
    conicalGrad1.setSpread(QGradient::PadSpread);
    QRect rect_conical1(550,50,200,200);
    painter.fillRect(rect_conical1, conicalGrad1);

    QConicalGradient conicalGrad2(QPointF(650, 150), 90);
    conicalGrad2.setColorAt(0, Qt::white);
    conicalGrad2.setColorAt(0.5, Qt::green);
    conicalGrad2.setColorAt(1, Qt::black);
    conicalGrad2.setSpread(QGradient::RepeatSpread);
    QRect rect_conical2(550,260,200,200);
    painter.fillRect(rect_conical2, conicalGrad2);

    QConicalGradient conicalGrad3(QPointF(650, 150), 90);
    conicalGrad3.setColorAt(0, Qt::white);
    conicalGrad3.setColorAt(0.5, Qt::green);
    conicalGrad3.setColorAt(1, Qt::black);
    conicalGrad3.setSpread(QGradient::ReflectSpread);
    QRect rect_conical3(550,470,200,200);
    painter.fillRect(rect_conical3, conicalGrad3);
}
