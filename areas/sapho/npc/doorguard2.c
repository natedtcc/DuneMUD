/// doorguard.c - Door guard in the sapho facility - Bebop 2020

inherit "/obj/player/monster";
inherit "/players/bebop/area/sapho/includes/include.c";

object weapon, armor;

void reset (status arg)
{
  ::reset (arg);
  if (arg) return;

  set_level (150);
  set_name ("guard");
  set_race ("Imperial");
  set_alias ("doorguard", "guard");
  set_gender (1);
  add_money (5000 + random (6000));
  set_short ("Sapho-crazed guard");

  set_long (
    "His eyes glowing red, this guard seems to be in an almost\n"
    +"berserker-like state. His fingers are stained red with what\n"
    +"appears to be either sapho or blood. Judging by how he's\n"
    +"glaring at you, it could honestly be both.");


  ///armor = clone_object( OBJ_DIR + "armor.c");
  ///weapon = clone_object ( OBJ_DIR + "weapon.c");

  if (armor)
    move_object (armor, this_object ());

  if (weapon)
    move_object (weapon, this_object ());

  if (armor || weapon)
    command ("powerup");
}

