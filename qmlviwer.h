#ifndef QMLVIWER_H
#define QMLVIWER_H

#include <QWidget>
#include "basequickwidget.h"
#include <QLineEdit>
#include <QToolButton>
class QmlViwer : public QWidget
{
    Q_OBJECT
public:
    BaseQuickWidget* viewer;
    QToolButton* loadQmlButton;
    QLineEdit* qmlUrlEdit;
public:
    explicit QmlViwer(QWidget *parent = 0);
    void initData();
    void initUI();
    void initConnect();

signals:

public slots:
    void getQmlUrl();
    void loadQml();
};

#endif // QMLVIWER_H
