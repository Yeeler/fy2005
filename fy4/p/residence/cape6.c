inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",6);

  set ("short", "天涯海角楼"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG

    人生愁恨何能免？销魂独我情何限！
    故国梦重归，觉来双泪垂。

    高楼谁与上？长记秋晴望。
    往事已成空，还如一梦中。

LONG);
        set("exits", ([
"614" : __DIR__"userroom/dzssgg1323088098",
"613" : __DIR__"userroom/liufeia1321711407",
"612" : __DIR__"userroom/fyhy1285918707",
"611" : __DIR__"userroom/fyhr1285917827",
"610" : __DIR__"userroom/fyyh1285076124",
"609" : __DIR__"userroom/fyxw1284904940",
"608" : __DIR__"userroom/fysr1284863880",
"607" : __DIR__"userroom/fyts1284775383",
"606" : __DIR__"userroom/fyfj1284525875",
"605" : __DIR__"userroom/fywd1283950932",
"604" : __DIR__"userroom/fyll1283431090",
"603" : __DIR__"userroom/fylt1283080971",
"602" : __DIR__"userroom/fyfw1282911776",
"601" : __DIR__"userroom/fytl1282910149",
  "down" : __DIR__"cape"+(query("floor")-1),
  "up" : __DIR__"cape"+(query("floor")+1), 
]));
        set("coor/x",-25);
        set("coor/y",-45);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
