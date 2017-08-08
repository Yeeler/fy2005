
inherit ROOM;

void create()
{
        set("short", "南北大道");
        set("long", @LONG
这是风云城的一条主要大道。它上穿白山黑水，直达松花江。下接风云京都，
再通江南海口。这条干线上商旅不绝。一条车痕向南方和北方伸展。
LONG
        );
        set("exits", ([ 
  "north" : __DIR__"laowu",
  "south" : __DIR__"road2",
]));
        set("objects", ([
        __DIR__"npc/trader" : 2,
        __DIR__"npc/trader2" : 1,
                        ]) );
        set("outdoors", "laowu");

	set("coor/x",0);
	set("coor/y",-30);
	set("coor/z",0);
	setup();
        replace_program(ROOM);

}

