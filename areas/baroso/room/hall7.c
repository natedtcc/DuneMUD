/* Atreidies Underwater Base - Hall 7 */
/* by Kiza 10-Jul-1996 */
/* cleaned up / upgraded by Bebop July 2018 */

inherit "/room/newroom";

void reset(int arg){
  ::reset(arg);

  if(arg) return;

  set_light(1);
  set_short("Baroso Hallway");
  set_long(
  "You are in one of the many hallways of Baroso\n\n"+
  "The hallway looks very new, with new plasteel walls, with the Hawk emblem \n"+
  "and paintings covering the walls.\n\n"+
  "There are labs to the north and south of you.\n\n");

  add_exit("west","/d/Atreid/kiza/ubase/hall6.c");
  add_exit("south","/d/Atreid/kiza/ubase/lab6.c");
  add_exit("north","/d/Atreid/kiza/ubase/lab5.c");
  add_exit("northeast","/d/Atreid/kiza/ubase/hall8.c");
  add_item("emblem",
  "The hawks head, the recognized emblem of House Atreides.");
  add_item("paintings",
  "The portraits of many great Atreides fighters of\n"+
  "history, which line the walls in an attempt to hide the\n"+
  "cold plasteel walls they hang upon.");
  add_item("pictures","=paintings");
  add_item("picture","=paintings");
  add_item("painting","=paintings");
  add_item("plasteel",
  "This is the compound building material for structures, it\n"+
  "is light but extremely strong, and has been used for the\n"+
  "walls and supports for all of this base.");
}

