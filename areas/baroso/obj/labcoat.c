/* Atreides Lab Coat */
/* by Kiza 10-Jul-1996 */
/* upgraded by Bebop June 2018 */

inherit "/obj/player/armour";

void reset(int  arg) {
  ::reset(arg);
   if(arg) return;
   
   set_type("armour");   
   set_name("coat");
   set_alias("lab coat");
   set_short("A White Lab Coat");
   set_long("A Standard white lab coat worn by most of the lab staff on \
Baroso\n");
   set_weight(2);
   set_value(1200);
   set_ac(24);
}