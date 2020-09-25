/* Baroso Security Entrance Pass */
/* by Kiza 2 Jan 1999 */
/* Explorer flag added by Bebop July 2018 */

inherit "/obj/object";

#include <mudlib.h>

void reset(int arg)
{
  ::reset(arg);
  if (arg)
    return;
  set_name("pass");
  set_alias("barosos pass");
  set_short("Baroso Security Pass");
  set_long("\
This is a security pass to gain entrance to Baroso Research\n\
Facility.  To gain access, all you must do is 'show pass' at\n\
the base entrance location.\n");
  set_read_message("The pass reads: To use, 'show pass' at the entrance.\n");
  set_weight(1);
  set_value(0);
}

init()
{

  ::init();
  call_out("dest_pass", 1);
  add_action("show", "show");
}

int show(string arg)
{
  if (!arg)
    return 0;
  if (arg == "pass")
  {
    if (present("murphy", ENV(ENV(TO))))
    {
      write("You discretely show your pass to Old Murph, who takes you into\n" +
            "the back room of the comic store.  He flicks a switch revealing a pod\n" +
            "and leaves you in the room, returning to the store front.\n");
      move_object(TP, "/d/Atreid/kiza/ubase/backroom");
      destruct(this_object());
      write("Your Baroso pass disintegrates.\n");
    }
  }
  return 1;
}

// This pass will disintegrate after entering
// Baroso, or after 5 minutes. - Bebop July 2018

int dest_pass()
{
  tell_object(TP,
              "Your Baroso Security Pass has disintegrated.\n");
  destruct(this_object());
  return 1;
}