#include "qmlviwer.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include<QFileDialog>
QmlViwer::QmlViwer(QWidget *parent) :
    QWidget(parent)
{
    initData();
    initUI();
    initConnect();
}

void QmlViwer::initData()
{

}

void QmlViwer::initUI()
{
    loadQmlButton = new QToolButton;
    loadQmlButton->setIcon(QIcon(":/skin/icons/dark/appbar.upload.png"));
    loadQmlButton->setIconSize(QSize(20, 20));
    loadQmlButton->setToolTip(QString("Load QML"));

    qmlUrlEdit = new QLineEdit;
    qmlUrlEdit->setFixedHeight(25);
    QHBoxLayout* loadLayout = new QHBoxLayout;
    loadLayout->addWidget(loadQmlButton);
    loadLayout->addWidget(qmlUrlEdit);

    viewer = new BaseQuickWidget;
    viewer->setSource(QUrl(QString("qrc:/home/welcom.qml")));
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addLayout(loadLayout);
    mainLayout->addWidget(viewer);

    setLayout(mainLayout);


}

void QmlViwer::initConnect()
{
    connect(loadQmlButton, &QToolButton::clicked, this, &QmlViwer::getQmlUrl);
    connect(qmlUrlEdit, &QLineEdit::editingFinished, this, &QmlViwer::loadQml);
    connect(qmlUrlEdit, &QLineEdit::returnPressed, this, &QmlViwer::loadQml);
    connect(qmlUrlEdit, &QLineEdit::textChanged, this, &QmlViwer::loadQml);
}

void QmlViwer::getQmlUrl()
{
    QString qmlurl = QFileDialog::getOpenFileName(this, tr("Open QML"), QDir::currentPath(), tr("QML Files(*.qml)"));
    if(qmlurl != QString(""))
    {
        qmlUrlEdit->setText(QString("file:///%1").arg(qmlurl));
    }
    else
    {
        viewer->setSource(QUrl(QString("qrc:/home/welcom.qml")));
        qmlUrlEdit->setText("");
    }

}

void QmlViwer::loadQml()
{
    viewer->setSource(QUrl(qmlUrlEdit->text()));
}





