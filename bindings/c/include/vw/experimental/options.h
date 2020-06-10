// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.
#pragma once

#include "exports.h"
#include "types.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

  VW_DLL_PUBLIC VWStatus VWCreateOptions(VWOptions**, VWErrorString* err_string);
  VW_DLL_PUBLIC VWStatus VWCreateOptionsFromCommandLine(int argc, char** argv, VWOptions**, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWCreateOptionsFromCommandLineCString(const char*, VWOptions**, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWDestroyOptions(VWOptions*, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsSetString(VWOptions*, const char* opt_name, const char*, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsSetInteger(VWOptions*, const char* opt_name, int32_t, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsSetFloat(VWOptions*, const char* opt_name, float, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsSetBool(VWOptions*, const char* opt_name, bool, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsListPushString(VWOptions*, const char* opt_name, const char*, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsListPushInteger(VWOptions*, const char* opt_name, int32_t, VWErrorString*);
  VW_DLL_PUBLIC VWStatus VWOptionsListPushFloat(VWOptions*, const char* opt_name, float, VWErrorString*);

#ifdef __cplusplus
}
#endif