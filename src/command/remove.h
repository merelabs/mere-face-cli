#ifndef REMOVE_H
#define REMOVE_H

#include "../command.h"

#include <iostream>

class Remove : public Command
{
public:
    Remove(const std::string &fqfn, bool system = false);
    void execute() override;

private:
    bool m_system;
    std::string m_fqfn;
};

#endif // REMOVE_H
