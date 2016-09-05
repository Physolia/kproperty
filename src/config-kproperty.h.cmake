#ifndef KPROPERTY_CONFIG_H
#define KPROPERTY_CONFIG_H

/* config-kproperty.h. Generated by cmake from config-kproperty.h.cmake */

/*! @file config-kproperty.h
    Global KProperty configuration (build time)
*/

//! @def KPROPERTY_GIT_SHA1_STRING
//! @brief Indicates the git sha1 commit which was used for compilation of KProperty
#cmakedefine KPROPERTY_GIT_SHA1_STRING "@KPROPERTY_GIT_SHA1_STRING@"

//! @def KPROPERTY_GIT_BRANCH_STRING
//! @brief Indicates the git branch which was used for compilation of KProperty
#cmakedefine KPROPERTY_GIT_BRANCH_STRING "@KPROPERTY_GIT_BRANCH_STRING@"

//! @def BIN_INSTALL_DIR
//! @brief The subdirectory relative to the install prefix for executables.
#define BIN_INSTALL_DIR "${BIN_INSTALL_DIR}"

//! @def KPROPERTY_TESTING_EXPORT
//! @brief Export symbols for testing
#ifdef BUILD_TESTING
#  define KPROPERTY_TESTING_EXPORT KPROPERTY_EXPORT
#else
#  define KPROPERTY_TESTING_EXPORT
#endif

//! @def KPROPERTY_UNFINISHED
//! @brief Defined if unfinished features of KProperty are enabled
#cmakedefine KPROPERTY_UNFINISHED

//! @def KPROPERTY_WIDGETS
//! @brief Defined if QtWidgets components of KProperty are enabled
#cmakedefine KPROPERTY_WIDGETS

//! @def KPROPERTYCORE_BASE_NAME
//! @brief Base name for the KPropertyCore library, based on major stable version.
//!        Useful for co-installability.
#define KPROPERTYCORE_BASE_NAME "@KPROPERTYCORE_BASE_NAME@"

//! @def KPROPERTYCORE_BASE_NAME_LOWER
//! @brief Like KPROPERTYCORE_BASE_NAME but lowercase.
#define KPROPERTYCORE_BASE_NAME_LOWER "@KPROPERTYCORE_BASE_NAME_LOWER@"

//! @def KPROPERTYWIDGETS_BASE_NAME
//! @brief Base name for the KPropertyCore library, based on major stable version.
//!        Useful for co-installability.
#define KPROPERTYWIDGETS_BASE_NAME "@KPROPERTYWIDGETS_BASE_NAME@"

//! @def KPROPERTYWIDGETS_BASE_NAME_LOWER
//! @brief Like KPROPERTYWIDGETS_BASE_NAME but lowercase.
#define KPROPERTYWIDGETS_BASE_NAME_LOWER "@KPROPERTYWIDGETS_BASE_NAME_LOWER@"

//! @def KPROPERTY_KF
//! @brief Defined if components depending on KDE Frameworks are enabled
#cmakedefine KPROPERTY_KF

#endif
