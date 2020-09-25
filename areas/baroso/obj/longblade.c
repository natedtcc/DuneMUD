/*
** Mortain's Longblade
** by Kiza 23-Jul-1996
** upgraded by Bebop June 2018
*/

inherit "/obj/player/weapon";

void reset(int  arg) {
  ::reset(arg);
  
  if(arg) return;
  
  set_name("longblade");
  set_alias("longblade");
  set_short("Black Longblade");
  set_long(
"This finely crafted black longblade is made of a shiny black material, and\n"+
"was made by Mortain, the Atreides weapon smith.  It is rather light, but\n"+
"very strong.\n");
  set_class(36);
  set_weight(4);
  set_value(8000);
  set_type("Long blade weapons");
  
  return;
}
  