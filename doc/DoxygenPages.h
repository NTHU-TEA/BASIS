/*
 * @file  DoxygenPages.h
 * @brief Documentation of Doxygen modules.
 *
 * Copyright (c) 2011 University of Pennsylvania. All rights reserved.
 * See https://www.rad.upenn.edu/sbia/software/license.html or COPYING file.
 */

// ===========================================================================
// main page
// ===========================================================================

// ***************************************************************************
/*!
@mainpage

@authors Andreas Schuh
@sa https://sbia-wiki.uphs.upenn.edu/wiki/index.php/BASIS

This is the main page of the automatically generated API documentation of
the Build system And Software Implementation Standard (BASIS) project.
The BASIS project was started early in 2011 in order to improve and
standardize the software packages developed at SBIA. Based on the decision
to use <a href="http://www.cmake.org">CMake</a> and its accompanying tools
for testing and packaging software, the standard for building software
from source code was based on this popular, easy to use, and yet powerful
cross-platform, open-source build system. The previously known
<a href="https://sbia-svn.uphs.upenn.edu/projects/Development_Project_Templates/CMakeProjectTemplate/">CMake Project Template</a>
was entirely reworked and became a major component of BASIS.
In fact, the BASIS project evolved from this initial project template
and greatly improved it. See @ref TemplateSection "below" for a
description of the template.

Projects following the standard include the BASIS modules and are hence
dependent on the BASIS package, similarly to a software implemented in
C++ depending on third-party libraries used by this implementation, for
example. Therefore, in order to be able to build a BASIS project,
the BASIS package has to be installed. Note, however, that BASIS is not
required during the runtime, i.e., for executing the software.
*/

// ===========================================================================
// other pages
// ===========================================================================

// ***************************************************************************
/*!
@page BuildSystemStandard Build System Standard

@todo This page has to be written yet.
*/

// ***************************************************************************
/*!
@page ProjectTemplate Software Development Project Template

@todo This page has to be written yet.
*/

// ===========================================================================
// groups
// ===========================================================================

// ---------------------------------------------------------------------------
// CMake Modules
// ---------------------------------------------------------------------------

// ***************************************************************************
/*!
@defgroup CMakeModules CMake Modules
@brief    CMake Modules.

The BASIS package in particular provides CMake implementations which
standardize the build system and support the developer of a project in
setting up a software development project.
*/

// ***************************************************************************
/*!
@defgroup CMakeAPI Public CMake Interface
@brief    Public interface of CMake modules.

The variables, functions, and macros listed here are intended to be used
by the developer of a software development project based on BASIS in their
project specific CMake implementation and the CMakeLists.txt files.

@ingroup CMakeModules
*/

// ***************************************************************************
/*!
@defgroup CMakeFindModules Find Package Modules
@brief    CMake Find modules used by find_package() command.

The BASIS package provides CMake Find module implementations for third-party
packages which are commonly used at SBIA but do not provide a CMake
package configuration file (\<Package\>Config.cmake or \<package\>-config.cmake)
such that CMake cannot find the package by default in config-mode.

@ingroup CMakeModules
*/

// ***************************************************************************
/*!
@defgroup CMakeTools Auxiliary CMake Modules
@brief    Auxiliary CMake modules included and used by the main modules.

@ingroup CMakeModules
*/

// ***************************************************************************
/*!
@defgroup CMakeUtilities CMake Utilities
@brief    Utility implementations used by the CMake modules.

@ingroup CMakeModules
*/

// ***************************************************************************
/*!
@defgroup CMakeHelpers  Non-CMake Implementations and Input Files
@brief    Auxiliary non-CMake implementations and input files used by the CMake modules.

@ingroup CMakeModules
*/

// ---------------------------------------------------------------------------
// C++ Utilities
// ---------------------------------------------------------------------------

// ***************************************************************************
/*!
@defgroup CppUtilities C++ Utilities
@brief    Auxiliary implementations for use in C++ implementations.
*/
