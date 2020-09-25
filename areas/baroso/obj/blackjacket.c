/*
** Black Jacket - Kalneric's Armour
** by Kiza 22-Jul-1996
** upgraded by Bebop June 2018
*/

inherit "/obj/player/armour";

void reset(int arg) {
  ::reset(arg);
  
  if(arg) return;
    
  set_type("cape");
  set_name("jacket");
  set_alias("black jacket"); 
  set_short("Black Jacket");
  set_long(
  "This jacket is extremly tough, and seems to be made of some extremely\n"+
  "lightweight and strong material which you can not identify. You also\n"+
  "notice that this jacket seems to be one size fits all.\n\n");
  set_weight(5);
  set_value(1900);
  set_ac(40);
                    
  return;
}

init() {
  ::init();
                           
  set_size(((int)this_player()->query_hei())/5+1);
}
