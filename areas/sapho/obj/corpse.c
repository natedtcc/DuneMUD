#include <mudlib.h>
inherit OBJECT;

void reset(status arg)
{
  ::reset(arg);
  if(arg)return;
  set_name("body");
  set_alias ( ({ "body", "corpse"}) );
  set_short ("$BOLDA $REDDead$WHITE Body$OFF");
  set_long(
    "Who knows how long this guy has been dead for? The flies are starting\n"
	+"to gather around his head, and he does have a bit of a stink. His hands"
    +"\nare stained red, and you can visibily see his Sapho pipe inside the\n"
	+"breast pocket of his jacket. Definitely an overdose.");
	
  set_no_get(1);
}

