#include <mudlib.h>
inherit LIGHTABLE;
void reset(int arg) {
        ::reset(arg);
        if(arg)
                return;
        set_name("glowstick");
        set_short("A $GREENglowstick$OFF");
        set_long("A glow stick. Groovy!");
        set_weight(1);
        set_auto_load(1);
        set_value(20);
}
void init ()
{
  ::init ();

  add_action("crack", "crack");
  add_action("recrack","recrack");
}


void crack(string str)
{
  if(str=="glowstick")
  {
        tell_object(this_object(),"You crack your glowstick.");
        set_light(1);
  }
}

void recrack(string str)
{
  if(str=="glowstick")
  {
    sprintf("s","You re-crack your glowstick.");
    set_light(0);
  
  }
}
