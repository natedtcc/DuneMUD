/* 
** Field Lasgun
** by Kiza 17-Jul-1996
** upgraded by Bebop June 2018
*/

#include <mudlib.h>

inherit LASER;

void reset(int  arg) {
  ::reset(arg);
  
  if(arg) return;
  
  set_name("lasgun");
  set_alias("lasgun");
  
  set_short("A Field Style Lasgun");
  set_long(
"A heavy field lasgun, carried by the most elite of Atreides soldiers.\n");
  set_class(28);
  set_weight(3);
  set_value(10000);
  set_type("Lasers");
  set_min_wield_level(75);
}
