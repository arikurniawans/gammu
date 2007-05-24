/**
 * \file gammu-unicode.h
 * \author Michal Čihař
 * 
 * Unicode manipulation functions.
 */
#ifndef __gammu_unicode_h
#define __gammu_unicode_h

/**
 * \defgroup Unicode Unicode
 * Unicode manipulation functions.
 */
#include <gammu-types.h>
#include <gammu-config.h>

/**
 * Returns length of unicode string.
 *
 * \ingroup Unicode
 */
size_t UnicodeLength(const unsigned char *str);

/**
 * Converts string to locale charset.
 *
 * \return Pointer to static string.
 *
 * \ingroup Unicode
 */
char *DecodeUnicodeString(const unsigned char *src);

/**
 * Converts string to console charset.
 *
 * \return Pointer to static string.
 *
 * \ingroup Unicode
 */
char *DecodeUnicodeConsole(const unsigned char *src);

/**
 * Converts string from unicode to local charset.
 *
 * \ingroup Unicode
 */
void DecodeUnicode(const unsigned char *src, char *dest);

/**
 * Encodes string from local charset to unicode.
 *
 * \ingroup Unicode
 */
void EncodeUnicode(unsigned char *dest, const char *src, int len);

/**
 * Decodes unicode file data with byte order mark (BOM).
 *
 * \ingroup Unicode
 */
void ReadUnicodeFile(unsigned char *Dest, const unsigned char *Source);

/**
 * Copies unicode string.
 *
 * \ingroup Unicode
 */
void CopyUnicodeString(unsigned char *Dest, const unsigned char *Source);

/**
 * Encodes string to UTF-8 quoted printable.
 *
 * \ingroup Unicode
 */
bool EncodeUTF8QuotedPrintable(unsigned char *dest, const unsigned char *src);

/**
 * Decodes UTF-8 quoted printable string.
 *
 * \ingroup Unicode
 */
void DecodeUTF8QuotedPrintable(unsigned char *dest, const unsigned char *src,
			       int len);
/**
 * Encodes string to UTF-8.
 *
 * \ingroup Unicode
 */
int EncodeWithUTF8Alphabet(unsigned char mychar1, unsigned char mychar2,
			    unsigned char *ret);
/**
 * Decodes string from UTF-8.
 *
 * \ingroup Unicode
 */
int DecodeWithUTF8Alphabet(unsigned char *src, wchar_t * dest, int len);

/**
 * Decodes string from hex quoted unicode.
 *
 * \ingroup Unicode
 */
void DecodeHexUnicode(unsigned char *dest, const unsigned char *src, int len);

/**
 * Encodes string to hex quoted unicode.
 *
 * \ingroup Unicode
 */
void EncodeHexUnicode(unsigned char *dest, const unsigned char *src, int len);

/**
 * Compares two unicode strings.
 *
 * \ingroup Unicode
 */
bool mywstrncmp(unsigned const char *a, unsigned const char *b, int num);

/**
 * Locates unicode substring.
 *
 * \ingroup Unicode
 */
unsigned char *mywstrstr(unsigned const char *haystack,
			 unsigned const char *needle);

/**
 * Compares two unicode strings case insensitive.
 *
 * \ingroup Unicode
 */
bool mywstrncasecmp(unsigned const char *a, unsigned const char *b, int num);

#ifndef HAVE_STRCASESTR
/**
 * Case insensitive substring location, libc compatibility.
 *
 * \ingroup Unicode
 */
extern char *strcasestr(const char *s, const char *find);
#endif

#endif

/* Editor configuration
 * vim: noexpandtab sw=8 ts=8 sts=8 tw=72:
 */
