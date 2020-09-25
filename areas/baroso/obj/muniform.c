/* Atreides Marine Guard Uniform */
/* by Kiza 10-Jul-1996 */
/* upgraded by Bebop 2018 */

inherit "/obj/player/armour";

void reset(int  arg) {
  ::reset(arg);
   if(arg) return;
   
   set_type("armour");   
   set_name("uniform");
   set_alias("uniform");
   set_short("Atreides Marine Uniform");
   set_long("A Standard Green Uniform worn by all Atreides Marine Guards.\n");
   set_value(3000);
   set_ac(28);
   set_size(3);
}