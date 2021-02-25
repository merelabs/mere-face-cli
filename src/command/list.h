#ifndef FACELISTCOMMAND_H
#define FACELISTCOMMAND_H

#include "../command.h"

class List : public Command
{
public:
    void execute() override;
};

#endif // FACELISTCOMMAND_H
