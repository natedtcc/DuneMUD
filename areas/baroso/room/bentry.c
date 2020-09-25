/* Baraoso Secret Entrance */
/* by Kiza - 2 Jan 1999 */

inherit "/room/newroom";

#include <mudlib.h>

void reset(int arg) {
  ::reset(arg);

  if(!present("murphy",this_object())) {
    transfer(clone_object("/d/Atreid/kiza/ubase/npc/old_murph.c"),this_object());
  }

  if(arg)return;
 
  set_light(1);
  set_short("Old Murph's comic store");
  set_long(
"This is Old Murph's comic store, it is a largish store where the walls are\n"+
"lined with comics and large cardboard cutout comic characters.  You feel\n"+
"overcome with awe at the range of comics Murph stocks, you notice that\n"+
"every comic series ever printed has some level of representation here.\n\n"+
"At the back of the shop there is a door.\n");

  
  add_item("comics",
  "As you browse through the range of titles, you spot DuckMan #1, having\n"+
"been searching for this issue for such a long time you quickly dash over\n"+
"to the counter to pay for it, only to return it in disgust when you find\n"+
"that Old Murph wants 9435 solaris for it! When you put it back, you notice\n"
+"a slightly out of place book on the shelf.\n");
  add_item("comic","=comics");
  add_item("door","This door looks rather suspicious, you get a gut feeling that\n"+
           "something of importance resides behind that door.\n");
  add_item("book","This book looks heavily used, and very out of place here. Perhaps\n"
	+"some searching is in order.");


  add_exit("north","/d/Atreid/sauron/island/edock1");

}

init() {
::init();
  
  add_action("trap_door","enter");
  add_action("trap_door","door");
  add_action("search","search");
}


int trap_door() {

say("\nAs "+TP->QN+" approaches the door, Old Murph pipes up: \"Hey, get away from that\n"+
    "door you young repscallion!\"\n");
write("As you approach the door, Old Murph pipes up: \"Hey, get away from that"+
" door you young repscallion!\"\n");
 
  return 1;

}

int search(string str)
{
  if(str != "book")
    return 0;
	
  if (str == "book" && present("baroso pass", this_object)
    return notify_fail ("There's already a pass right here on the floor.\n");
 
  if (str == "book" && present("baroso pass", TP)
    return notify_fail ("You already have a pass.\n");
	
  else{
    write("As you search through the book, a small security pass falls to the ground.\n");
	place_objects ("/d/Atreid/kiza/ubase/obj/pass", 1, this_object ());
	return 1;
	}
