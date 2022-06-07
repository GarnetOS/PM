#ifndef PACKAGE_H
#define PACKAGE_H

#include <QStringList>
#include <QProcess>
class Package
{
public:
    Package();
    static void Install(QStringList input);
    static void Uninstall(QStringList input);
    static void Find(QString input);
    static void Download(QStringList input);
    static void Update();
};

#endif // PACKAGE_H
