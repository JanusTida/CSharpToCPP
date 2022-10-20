#include "pch.h"
#include <vcclr.h>
#include "ShowCase.h"

using namespace System;
gcroot<CSharpLibrary::ShowCase^> _showCase = gcnew CSharpLibrary::ShowCase();

int ShowCase::Sum(int a, int b) 
{
	return _showCase->Sum(a, b);
}

LPCWSTR ShowCase::GetFullName(LPCWSTR firstName, LPCWSTR lastName)
{
	auto firstNameStr = gcnew System::String(firstName);
	auto lastNameStr = gcnew System::String(lastName);
	auto str = _showCase->GetFullName(firstNameStr, lastNameStr);
	pin_ptr<const WCHAR> nativeStr = PtrToStringChars(str);
	return (LPCWSTR)nativeStr;
}