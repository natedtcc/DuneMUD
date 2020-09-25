// A Gucci Suit
// by Bebop July 2018

inherit "/obj/player/armour";

void reset(int arg)
{
    ::reset(arg);
    if(arg) return;

    set_name("suit");
    set_short("An expensive looking suit");
    set_alias("suit");

    set_long("\
This suit is extremely exquisite. It's previous owner must have spent a ton\n"+
"getting this thing custom fitted. The label on the collar reads \'Gucci\'.\n");

    set_type("total");
    set_ac(50);
    set_unique(1);
    set_weight(2);
	set_con_bonus(5);
    set_value(10000);
	set_min_wear_level(200);
	set_wear_msg("You wear a Gucci suit, just like Birdman.\n");
    set_remove_msg("\
Removing the Gucci suit causes you to lose a considerable amount of clout.");

}