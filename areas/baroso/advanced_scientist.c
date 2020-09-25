
/*
** Atreides Food Tech Scientist
** by Kiza 21-Jul-1996
** rescaled by Bebop 30-June-2018
*/

inherit "/obj/player/monster";

#include "ansi.h"

reset(arg) {
  object arm;
  ::reset(arg);
  if(arg) return;  // Varrack 120404
  set_name("scientist");
  set_alias("scientist");
  set_short("Advanced "+GREEN+"Atreides"+OFF+" Scientist");
  set_long(
"A scientist for House Atreides, currently working on a food technology"
"project.\n");
  set_level(375);
  set_skill("Hand to Hand",);
  set_al(150);
  set_race("Atreides");
  add_money(200);
  arm = clone_object("/d/Atreid/kiza/ubase/obj/labcoat.c");
  move_object(arm,this_object());
  init_command("wear "+arm->query_name());
  return 1;
}
