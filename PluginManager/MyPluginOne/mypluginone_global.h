#ifndef MYPLUGINONE_GLOBAL_H
#define MYPLUGINONE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MYPLUGINONE_LIBRARY)
#  define MYPLUGINONESHARED_EXPORT Q_DECL_EXPORT
#else
#  define MYPLUGINONESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MYPLUGINONE_GLOBAL_H
