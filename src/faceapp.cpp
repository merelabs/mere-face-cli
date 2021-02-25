#include "faceapp.h"
#include "command.h"
#include "command/list.h"
#include "command/install.h"
#include "command/remove.h"
#include "command/create.h"

#include <QCommandLineParser>

#include <QFileInfo>
FaceApp::FaceApp(int &argc, char **argv)
    : QCoreApplication(argc, argv)
{
    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption listOption(QStringList() << "l" << "list", "Show list of installed faces.");
    parser.addOption(listOption);

    QCommandLineOption installOption(QStringList() << "i" << "install", "Install a face specified with fully qualified name.", "face");
    parser.addOption(installOption);

    QCommandLineOption removeOption(QStringList() << "r" << "remove", "Remove a face specified with name.", "face");
    parser.addOption(removeOption);

    QCommandLineOption globalOption(QStringList() << "g" , "Install system wise.");
    parser.addOption(globalOption);

    QCommandLineOption createOption(QStringList() << "c" << "create", "Create a face specified with fully qualified name.", "face");
    parser.addOption(createOption);

    parser.process(QCoreApplication::arguments());

    if (parser.isSet(listOption))
    {
        Command *command = new List();
        command->execute();
    }
    else if (parser.isSet(installOption))
    {
        Command *command = new Install(parser.value(installOption).toStdString(), parser.isSet(globalOption));
        command->execute();
    }
    else if (parser.isSet(removeOption))
    {
        Command *command = new Remove(parser.value(removeOption).toStdString(), parser.isSet(globalOption));
        command->execute();
    }
    else if (parser.isSet(createOption))
    {
        Command *command = new Create(parser.value(createOption).toStdString());
        command->execute();
    }

    ::exit(1);
}
