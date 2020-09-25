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
  "From here there is a room to the north and west of you.  To the south\n"+
  "continues a hallway, and back to your east is the main hallway of Baroso.\n\n");

  add_item("entrance",
  "There are multiple entrances leading off from this room\n"+
  "to private quarters of Atreides Technicians.");

  add_exit("north","/d/Atreid/kiza/ubase/res1a.c");
  add_exit("west","/d/Atreid/kiza/ubase/res1b.c");
  add_exit("east","/d/Atreid/kiza/ubase/hall1.c");
  add_exit("south","/d/Atreid/kiza/ubase/res2.c");


}               

