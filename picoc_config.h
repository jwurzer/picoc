#ifndef PICOC_CONFIG_H
#define PICOC_CONFIG_H

#if !defined(UNIX_HOST) && !defined(WIN32)
#ifdef _WIN32
#define WIN32
#else
#define UNIX_HOST
#endif
#endif

#endif

