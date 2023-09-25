#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to locate
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *hay_ptr, *ndl_ptr;
while (*haystack)
{
hay_ptr = haystack;
ndl_ptr = needle;
while (*hay_ptr == *ndl_ptr && *ndl_ptr != '\0')
{
hay_ptr++;
ndl_ptr++;
}
if (*ndl_ptr == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
