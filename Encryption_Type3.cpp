// Encryption_Type3.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Encryption_Type3.h"


// This is an example of an exported variable
ENCRYPTION_TYPE3_API int nEncryption_Type3=0;

// This is an example of an exported function.
ENCRYPTION_TYPE3_API int fnEncryption_Type3(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Encryption_Type3.h for the class definition
CEncryption_Type3::CEncryption_Type3()
{
    return;
}
