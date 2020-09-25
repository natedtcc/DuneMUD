#include <mudlib.h>
inherit OBJECT;


void reset(int arg)
{

  int is_packed, smoking = 0;
  ::reset(arg);
  if(arg) return;

  set_name ("pipe");
  set_weight (1);



  set_short ("A Sapho Pipe");
  
  set_long ("This pipe is long and narrow, with an aggressive bend about\n"
  +"halfway down the neck. It looks somewhat like a Sherlock. Perhaps if\n"
  +"you had some sapho to 'pack', you could 'smoke' this pipe..\n");
}

void init ()
{
  ::init ();
 
  add_action ("do_pack", "pack");
  add_action ("do_smoke", "smoke");
}

int do_pack (string str)
{

  if (smoking == 1) {
    return notify_fail("You can't pack your pipe while you're smoking!\n");
  }

  if (is_packed == 1){
    return notify_fail("You've already packed your pipe!\n");
  }

  if(!present("sapho"){
	  return notify_fail("You don't have any sapho!\n");
  }

  if(str == "sapho"){
    is_packed = 1;
    tell_room(environment(this_player()),
      sprintf("%s packs %s pipe with a chunk sapho.\n",
        this_player()->query_name(),
        this_player()->query_possessive()),
        ({ this_player() }));
    destruct("sapho");
    return 1;
  }

  else {
    return notify_fail("Pack what? Sapho?\n");
  }
}

int do_smoke (string str)
{
  if (pipe_packed == 0) {
	  return notify_fail("You have not packed your pipe!\n");
  }

  if (is_smoking == 1) {
    return notify_fail("You are already smoking your sapho pipe!\n");
  }

  if (str == "sapho" || str == "pipe") {
    is_smoking = 1;
    tell_object(TP,
      "You light your lighter and take a long puff off your sapho pipe.\n");
    call_out("do_smoke_2", 4);
  return 1;
  };

  else {
    return notify_fail("Smoke what? Sapho? The pipe?\n");
  };
};

int do_smoke_2()
{
  tell_object(TP,
    "You exhale slowly. Your whole body feels incredible. You take another"
	+" toke.\n");
  call_out("do_smoke_3", 4);
  return 1;
}

int do_smoke_3()
{
  tell_object(TP,
    "You breathe out deeply. You feel like you are floating on a cloud.\n"
	+"You feel a slight lapse of conciousness coming on...\n");
  call_out("trippin_balls", 4);
  return 1;
}

int trippin_balls()
{
	
  tell_object(TP,
    "\n\n$BOLD$RED               __,aaPPPPPPPPaa,__\n"
    +"             ,adP\"\"\"'          `\"\"Yb,_\n"
    +"          ,ad\"'                     `\"Yb,\n"
    +"        ,dP'     _,adPP\"\"\"\"\"YYba,_     `\"Y,\n"
    +"       aP'     ,d\"\"'           `\"\"Ya,     \"Y,\n"
    +"     ,d\"     ,P\"     _________     `\"b,    `Yb,\n"
    +"    ,d'     d\"    ,adP\"\"\"\"\"\"\"\"Yba,    \"b,    \"Y,\n"
    +"    d'    ,P'   ,dP\"            `Yb,   `Y,    `Y,\n"
    +"    8    ,P'   ,d'    ,dP\"\"Yb,    `Y,   `Y,    `b\n"
    +"    8    d'    d'   ,d\"      \"b,   `Y,   `8,    Y,\n"
    +"    8    8     8    d'    _   `Y,   `8    `8    `b\n"
    +"    8    8     8    8     8    `b    8     8     8\n"
    +"    8    Y,    Y,   `b, ,aP     P    8    ,P     8\n"
    +"    I,   `Y,   `8,    \"\"\"\"     d'   ,P    d\"    ,P\n"
    +"    `b,   `8,    \"b,         ,P\"   ,P'   ,P'    d'\n"
    +"     `b,   `Ya,    \"Ya,,__,aP\"    ,P'   ,P\"    ,P\n"
    +"      `Y,    `Ya,     `\"\"\"''     ,P'   ,d\"    ,P'\n"
    +"       `Yb,    `\"Ya,_         _,d\"    ,P'    ,P'\n"
    +"         `Yb,      \"\"YbaaaaadP\"'     ,P'    ,P'\n"
    +"           `Yba,                   ,d'    ,dP'\n"
    +"              `\"Yba,__       __,adP\"     dP'\n"
    +"                  `\"\"\"\"\"\"\"\"\"\"\"\"\"'\n$OFF"
    +"\nYou're trippin' balls, dude!!\nYou took too much,"
    +" man. You took too much, too much!\n");
    smoking = 0;
    is_packed = 0;
  return 1;
}
