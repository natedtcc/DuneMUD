/* 
** BIG BOY
** Bebop July 2018
*/

inherit "/obj/player/monster";

object weapon, armor;
 
void reset (status arg)
{
  ::reset (arg);
  if (arg) return;
  
  set_level (800);
  set_name ("gabriel");
  set_race ("Imperial");
  set_alias ("gabriel", "kingpin");
  set_short ("Gabriel, the Red-Tar Sapho Kingpin");
  set_long ("\
This is the man who personally oversees the production and sale of tons of\n\
red-tar sapho. Many view Gabriel as a morally bankrupt individual, knowingly\n\
selling a product that is very addictive. To this, he simply responds:\n\
\"Don\'t hate the player, hate the game.\"\n\
WARNING: BEWARE OF GABRIEL, HE IS A BIG BOY");
  set_gender (1);
  add_money (100000 + random (100000));
  
  set_property ("no_backstab");
  set_property ("no_confuse");
  set_property ("no_enervate");
  set_property ("no_terror");
  set_property ("no_poison", 1);
  set_property ("no_voice", 1);
  set_property ("no_finish", 1);
  set_property ("no_enslave", 1);
  set_property ("no_disarm", 1);
  set_property ("no_disrupt", 1);
  set_property ("no_blind", 1);
  set_property ("no_instakill", 1);
  set_property ("no_steal", 1);
  set_property ("no_throw");
  


  armor = clone_object("/players/bebop/obj/suit.c");
  weapon = clone_object ("/players/bebop/obj/cane.c");
 
  if (armor)
    move_object (armor, this_object ());
 
  if (weapon)
    move_object (weapon, this_object ());
 
  if (armor || weapon)
    command ("powerup");
}
