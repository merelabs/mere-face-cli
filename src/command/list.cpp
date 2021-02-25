#include "list.h"
#include "mere/face/lister.h"

#include <iostream>

void List::execute()
{
    Mere::Face::Lister lister;
    std::vector<Mere::Face::Face> faces = lister.list();

    if (!faces.size())
    {
        std::cout << "No installed face found here." << std::endl;
        return;
    }

    std::cout << std::endl;
    std::cout << "Listing of faces installed into the system: " << std::endl;
    std::cout << std::endl;

    std::cout << "Name\t\t\tPath " << std::endl;
    for(const Mere::Face::Face &face : faces)
    {
        std::cout << face.name() << "\t\t" << face.path() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Total: " << faces.size() << std::endl;
}
