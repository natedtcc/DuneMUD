/* A warning sign - stolen from GP Tower - Bebop, July 2018 */

#include <mudlib.h>

#include "ansi.h"
inherit OBJECT;


void reset(status arg)
{
  ::reset(arg);
  if(arg)return;
  set_name("sign");
  set_short ("$BOLD$REDA LARGE WARNING SIGN$OFF");
  set_long("Read it!\n");
  set_no_get(1);
}

void init()
{
  ::init();
  add_action("read","read");
}

status read(string str)
{
  if(!str || str != "sign")
    return 0;

  printf("\
\nA "+BOLD+RED+"WARNING"+OFF+" TO ALL PLAYERS! THIS AREA HAS BEEN UPGRADED!\n\n\
ALL OF THE"+BOLD+YELLOW+" MOBS "+OFF+"HERE ARE MUCH"+BOLD+CYAN+" BIGGER \
"+OFF+"THAN BEFORE.\n\
\n"+BOLD+RED+"PROCEED WITH CAUTION!"+OFF+"\n\n");
  return 1;
}