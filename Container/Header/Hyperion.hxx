// Hyperion.hxx

#ifndef HYPERION_HXX
#define HYPERION_HXX

#include <windows.h>
#include <winternl.h>
#include <Wbemidl.h>
#include <comdef.h>
#include <sddl.h>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

#pragma comment(lib, "Advapi32.lib")
#pragma comment(lib, "wbemuuid.lib")


void HookNtDll();
bool spoofReg(HKEY hKeyRoot, const std::wstring& subKey, const std::wstring& valueName);
bool FWWMIC(const std::string& wmicCommand, const std::string& propertyName);
void spoofHyperion();

#endif