#ifndef SETTINGMENU_H
#define SETTINGMENU_H
#include "util.h"
#include "settingmenucontroller.h"
#include <QMenu>
#include <QAction>
class SettingMenu : public QMenu
{
    Q_OBJECT
public:
    QList<QAction*> actions;
    QList<QString> actionNames;
    QList<QString> actionicons;
    QMap<QString, QAction*> actionMaps;
    QAction* settingAction;
    QAction* checkUpdateAction;
    QAction* onlineHelpAction;
    QAction* officialSiteAction;
    QAction* aboutAction;
    SettingMenuController* controller;
public:
    explicit SettingMenu(QWidget *parent = 0);
    void initData();
    void initUI();
    void initController();
    void initConnect();
signals:

public slots:

};

#endif // SETTINGMENU_H
