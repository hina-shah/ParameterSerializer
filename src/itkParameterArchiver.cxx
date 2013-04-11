/*=========================================================================

Library:   TubeTK

Copyright 2010 Kitware Inc. 28 Corporate Drive,
Clifton Park, NY, 12065, USA.

All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=========================================================================*/
#include "itkParameterArchiver.h"

namespace itk
{

ParameterArchiver
::ParameterArchiver()
{
}


ParameterArchiver
::~ParameterArchiver()
{
}


void
ParameterArchiver
::ReadFromFile( const std::string & itkNotUsed(fileName) )
{
  itkExceptionMacro(<< "ReadFromFile is not implemented for this archive type.");
}


void
ParameterArchiver
::WriteToFile( const std::string & itkNotUsed(fileName) ) const
{
  itkExceptionMacro(<< "WriteToFile is not implemented for this archive type.");
}


void
ParameterArchiver
::ReadFromStdStream( std::istream & itkNotUsed(stream) )
{
  itkExceptionMacro(<< "ReadFromStdStream is not implemented for this archive type.");
}


void
ParameterArchiver
::WriteToStdStream( std::ostream & itkNotUsed(stream) ) const
{
  itkExceptionMacro(<< "WriteToFile is not implemented for this archive type.");
}

} // end namespace itk