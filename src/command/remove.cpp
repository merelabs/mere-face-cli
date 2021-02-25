#include "remove.h"
#include "mere/face/remover.h"

Remove::Remove(const std::string &fqfn, bool system)
    : m_system(system),
      m_fqfn(fqfn)
{

}

void Remove::execute()
{
    Mere::Face::Remover remover;

    int err = remover.remove(m_fqfn, m_system);
    if (err)
    {
        std::cout << "unable to uninstall " << m_fqfn << std::endl;
        return;
    }
}
