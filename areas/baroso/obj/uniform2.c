/* Atreides Guard Uniform */
/* by Kiza 17-Jul-1996 */
/* upgraded by Bebop June 2018 */

inherit "/obj/player/armour";

void reset(int  arg) {
  ::reset(arg);
   if(arg) return;
   
   set_type("armour");   
   set_name("uniform");
   set_alias("uniform");
   set_short("Atreides Uniform");
   set_long("A Standard Blue Uniform worn by all Atreides Guards.\n");
   set_weight(3);
   set_value(2500);
   set_ac(26);
   set_size(3);
}
