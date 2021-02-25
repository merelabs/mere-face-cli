#include "create.h"

#include "mere/face/creator.h"

Create::Create(const std::string &bundle)
    : m_bundle(bundle)
{

}

void Create::execute()
{
    Mere::Face::Creator creator;

    int err = creator.create(m_bundle);
    if (err)
    {
        std::cout << "unable to create " << m_bundle << std::endl;
        return;
    }
}

