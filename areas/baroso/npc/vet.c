/* Veteran Atreidies Marine Guard - Entrance Guard */

inherit "/obj/player/monster";

#include "ansi.h"

reset(arg){
    object wep,arm;
    ::reset(arg);
    if(arg) return;
    
    set_name("guard");
    set_race("Atreides");
    set_alias("guard");
    set_level(41);
    set_al(600);
    set_hei(20);
    add_money(1500);
    set_skill("Long bladed weapons",100);
    improve_skill("Long bladed weapons",20);

set_short("Veteran Atreides "+CYAN+"Marine"+OFF+" Guard");
    set_long("\
This guard help protects the security of Baroso.\n");
    set_gender(1);
    
    wep = clone_object("/d/Atreid/kiza/ubase/obj/hawkblade.c");
    move_object(wep,this_object());
    command("wield "+wep->query_name());
    arm = clone_object("/d/Atreid/kiza/ubase/obj/muniform.c");
    move_object(arm,this_object());
    command("wear "+arm->query_name());
}
