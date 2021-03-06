/* Residental Area Junction */
/* by Kiza 11-Jul-1996 */
/* cleaned up / upgraded by Bebop July 2018 */

inherit "/room/newroom";

void reset(int arg){
  ::reset(arg);
  place_objects("/d/Atreid/kiza/ubase/npc/mguard.c", 2);
  if(arg) return;
    
  set_light(1);
  set_short("Lab Worker Residential Rooms");
  set_long( 
  "This is the entrance to the workers quarters, where they come to relax\n"+
  "after their shifts are complete.\n\n"+
  "The Residential Hallway continues north and south of here, with a door to\n"+
  "the west, and a door to the east going to the main hallway.\n\n");

  add_exit("north","/d/Atreid/kiza/ubase/res2.c");
  add_exit("west","/d/Atreid/kiza/ubase/res3b.c");
  add_exit("east","/d/Atreid/kiza/ubase/hall3.c");
  add_exit("south","/d/Atreid/kiza/ubase/res4.c");

  add_item("entrance",
  "There are multiple entrances leading off from this room\n"+
  "to private quarters of Atreides Technicians.");
  
}               

