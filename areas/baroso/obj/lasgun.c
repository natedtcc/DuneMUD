/* Marine Guard LasGun */
/* by Kiza 10-Jul-1996 */
/* upgraded by Bebop June 2018 */

#include <mudlib.h>

inherit LASER;

void reset(int  arg) {
  ::reset(arg);
    
    if(arg) return;
    
    set_name("lasgun");
    set_alias("lasgun");
    set_short("A small lasgun");
    set_long("A lightweight lasgun, standard issue for all Atreides\n"+
             "Marine Guards.\n");
    set_class(20);
    set_value(5000);
    set_type("Lasers");
}
