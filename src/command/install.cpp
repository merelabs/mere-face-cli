#include "install.h"
#include "mere/face/service.h"

#include <iostream>
Install::Install(const std::string &fqfn, bool system)
    : m_system(system),
      m_fqfn(fqfn)
{

}

void Install::execute()
{
    Mere::Face::Service service;

    int err = service.install(m_fqfn, m_system);
    if (err)
    {
        // error message
        std::cout << "unable to install " << m_fqfn << ", reason - ??" << std::endl;
        return;
    }
}
