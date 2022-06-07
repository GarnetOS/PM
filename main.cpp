#include <QCoreApplication>
#include "package.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if (argv[1]=="install") {
        QStringList input;
        for (int i=2;i<argc ;i++) {
            input.append(argv[i]);
        }
        Package::Install(input);
    }
    else if (argv[1]=="uninstall") {
      QStringList input;
      for (int i=2;i<argc ;i++ ) {
          input.append(argv[i]);
      }
      Package::Uninstall(input);
}
    else if (argv[1]=="download") {

        QStringList input;
        for (int i=2;i<argc ;i++ ) {
            input.append(argv[i]);
        }
        Package::Download(input);
}
    else if (argv[1]=="update") {

        Package::Update();
}
    else if (argv[1]=="find") {



        Package::Find(argv[2]);
}
    else {
        QTextStream(stdout) << "Invalid command "<<argv[1];
    }
    return a.exec();
}
