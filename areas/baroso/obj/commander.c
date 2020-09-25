/* Atreidies Marine Commander */
/* MUST UPLOAD*/

inherit "/obj/player/monster";

#include "ansi.h"

reset(arg){
    object wep,arm;
    string *chat_str;
    ::reset(arg);
    if(arg) return;

  if(!chat_str) {
    chat_str = allocate(4);
    chat_str[0] = "\nThe Marine Commander BOOMS in an authoritive voice:\n"+
      "       \"The Atreides Marines are the ELITE\"\n";
    chat_str[1] = "\nThe Marine Commander snorts contemptuously at your presence.\n";
    chat_str[2] = "\nThe Marine Commander looks at you with watchful eyes.\n";
    chat_str[3] = "\nThe Marine Commander BOOMS in an authoritive voice:\n"+
      "       \"Get out of here scum, only Marines are allowed in here!\"\n";
  }
    
    set_name("commander");
    set_alias("atreides commander");
    set_level(50);
    set_hei(20);
    add_money(2000);
    set_skill("Long bladed weapons",100);
    improve_skill("Long bladed weapons",30);

    set_short("Atreides "+CYAN+"Marine"+OFF+" Commander");
    set_long(
"This is the commander of the Atreides forces within Baroso, he looks very\n"+
"experienced in fighting, with a large scar on the right side of his jawbone.\n");
    set_gender(1);
    set_race("Atreides");
    wep = clone_object("/d/Atreid/kiza/ubase/obj/hawkblade.c");
    wep->set_class(20);
    move_object(wep,this_object());
    command("wield "+wep->query_name());
    arm = clone_object("/d/Atreid/kiza/ubase/obj/muniform.c");
    arm->set_ac(28);
    /* up ac by 1 */
    move_object(arm,this_object());
    command("wear "+arm->query_name());
    load_chat(15,chat_str);

    return 1;
}