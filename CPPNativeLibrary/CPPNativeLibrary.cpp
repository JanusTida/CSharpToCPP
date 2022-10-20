#include <iostream>
#include "ShowCase.h"

int main()
{
    auto showCase = new ShowCase();
    auto sum = showCase->Sum(1, 2);
    auto firstName = L"Billy";
    auto lastName = L"Herrington";
    auto fullName = showCase->GetFullName(firstName, lastName);

    delete showCase;
}
