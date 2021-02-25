#ifndef CREATECOMMAND_H
#define CREATECOMMAND_H

#include "../command.h"
#include <iostream>

class Create : public Command
{
public:
    explicit Create(const std::string &bundle);
    void execute() override;

private:
    std::string m_bundle;

};

#endif // CREATECOMMAND_H
