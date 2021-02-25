#include "list.h"
#include "mere/face/service.h"

#include <iostream>

void List::execute()
{
    Mere::Face::Service service;
    std::vector<Mere::Face::Face> faces = service.faces();

    if (!faces.size())
    {
        std::cout << "No installed face found here." << std::endl;
        return;
    }

    std::cout << std::endl;
    std::cout << "Listing of faces installed into the system: " << std::endl;
    std::cout << std::endl;

    std::cout << "UUID\t\t\t\t\tName\t\t\tPath " << std::endl;
    for(const Mere::Face::Face &face : faces)
    {
        std::cout << face.uuid() << "\t" << face.name() << "\t" << face.path() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Total: " << faces.size() << std::endl;
}
