/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "it.scsoft.tiuuid.TitaniumUUIDModule.h"
#include "it.scsoft.tiuuid.ExampleProxy.h"


#line 14 "/private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 7, duplicates = 0 */

class TitaniumUUIDBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TitaniumUUIDBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TitaniumUUIDBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 29,
      MAX_WORD_LENGTH = 35,
      MIN_HASH_VALUE = 29,
      MAX_HASH_VALUE = 35
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 17 "/private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf"
      {"it.scsoft.tiuuid.ExampleProxy", ::it::scsoft::tiuuid::titaniumuuid::ExampleProxy::bindProxy, ::it::scsoft::tiuuid::titaniumuuid::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf"
      {"it.scsoft.tiuuid.TitaniumUUIDModule", ::it::scsoft::tiuuid::TitaniumUUIDModule::bindProxy, ::it::scsoft::tiuuid::TitaniumUUIDModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/m5/plphwvdn33xcbfzbspj8qxgm0000gn/T/ian/titanium-uuid-generated/KrollGeneratedBindings.gperf"

