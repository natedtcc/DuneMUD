/*
** Atreides Longblade (Hawkblade)
** by Kiza 23-Jul-1996
** upgraded by Bebop June 2018
*/

inherit "/obj/player/weapon";

void reset(int  arg) {
  ::reset(arg);
  
  if(arg) return;
  
  set_name("hawkblade");
  set_alias("longblade");
  set_short("Atreides Hawkblade");
  set_long(
"This finely crafted longblade style weapon was crafted especially for use\n"+
"by Atreides guards, it is the prefered weapon of the more experienced of\n"+
"the guards.\n");
  set_weight(2);
  set_class(24);
  set_value(2000);
  set_type("Long blade weapons");
  
  return;
}