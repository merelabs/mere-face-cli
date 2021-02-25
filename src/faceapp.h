#ifndef FACEAPP_H
#define FACEAPP_H

#include <QDebug>
#include <QCoreApplication>

class FaceApp : public QCoreApplication
{
    Q_OBJECT
public:
    explicit FaceApp(int &argc, char **argv);

signals:

};

#endif // FACEAPP_H
