#include "install.h"
#include "mere/face/installer.h"

#include <iostream>

Install::Install(const std::string &fqfn, bool system)
    : m_system(system),
      m_fqfn(fqfn)
{

}

void Install::execute()
{
    Mere::Face::Installer installer;

    int err = installer.install(m_fqfn, m_system);
    if (err)
    {
        std::cout << "unable to install " << m_fqfn << std::endl;
        return;
    }
}
