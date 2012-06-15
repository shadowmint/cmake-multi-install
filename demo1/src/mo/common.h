/* 
 * Copyright 2012 Douglas Linder
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICEnsE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIOns OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <n/ioc/Factory.h>

#ifdef _WIN32
  #define AUTO_LUA_API __declspec(dllexport)
  #define MO_IDIR_TYPE nWinDir_getType
  #define MO_ISTREAM_TYPE nWinFile_getType
  #define MO_ISHELL_TYPE nWinShell_getType
  #include <n/io/WinDir.h>
  #include <n/io/WinFile.h>
  #include <n/automation/WinShell.h>
#else
  #define AUTO_LUA_API
  #define MO_IDIR_TYPE nPosixDir_getType
  #define MO_ISTREAM_TYPE nPosixFile_getType
  #define MO_ISHELL_TYPE nPosixShell_getType
  #include <n/io/PosixDir.h>
  #include <n/io/PosixFile.h>
  #include <n/automation/PosixShell.h>
#endif

/** Setup and implementation binding */
void libmo_setup(void);
