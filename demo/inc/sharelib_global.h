#ifndef SHARELIB_GLOBAL_H
#define SHARELIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SHARELIB_LIBRARY)
#  define SHARELIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SHARELIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SHARELIB_GLOBAL_H
