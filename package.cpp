#include "package.h"

Package::Package()
{

}
void Package::Install(QStringList input)
{
        QProcess qp;
        qp.start("wget", input);

}
 void Package::Uninstall(QStringList input)
{

}
 void Package::Download(QStringList input)
{
     QProcess qp;
     qp.start("wget", input);
}
void Package::Find(QString input)
{

}
void Package::Update()
{

}
