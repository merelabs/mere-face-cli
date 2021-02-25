#ifndef FACEINSTALLCOMMAND_H
#define FACEINSTALLCOMMAND_H

#include "../command.h"

#include <iostream>

class Install : public Command
{
public:
    Install(const std::string &fqfn, bool system = false);
    void execute() override;

private:
    bool m_system;
    std::string m_fqfn;
};

#endif // FACEINSTALLCOMMAND_H
