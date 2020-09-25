/* 
** Observation Room 2
** by Kiza 1-Aug-1996
** cleaned up / upgraded by Bebop July 2018
*/

inherit "/room/newroom";

void reset(int arg) {
  ::reset(arg);

  if(arg) return;
  
  set_light(1);
  set_short("Baroso Observation/Recreation Room");
  set_long(
  "As you look around the viewing dome of this combination recreation and \n"+
  "observation room you get a Panoramic view of the watery world above you, \n"+
  "through only a few feet of protective clear plasteel, through which, you\n"+
  "can see a shimmering dome off to the west.  Occasionally Divers swim by,\n"+
  "momentarily disturbing the schools of aquatic animals within your view.\n\n");
  

  add_exit("southwest","/d/Atreid/kiza/ubase/hall11.c");
  
  add_item("dome",
  "A large dome made souly out of clear plasteel, allowing you to watch the \n"+
  "varied aquatic species swim around in the oceans of Caladan.");
  add_item("divers",
  "The divers are mainly scientists exploring the natural reefs which surround\n"+
  "Baroso, and taking photo's of native life in the oceans.");
  add_item("plasteel",
  "This is a special type of plasteel which allows you to see through it "+
  "without\nany distortion whatsoever, giving you a clear view of the watery "+
  "world\nabove you.");
  add_item("clear plasteel","=plasteel");
  add_item("animals",
  "Many different species of aquatic life from the oceans of Caladan.");
  add_item("schools","=animals");
  add_item("aquatic animals","=animals");
  
}