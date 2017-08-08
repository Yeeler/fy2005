
inherit ROOM;

void create()
{
	set("short", "泥土路");
	set("long", @LONG
路的左右两边都是一望无际的庄稼地。顺此路再往前走，就是武当山。顺眼望
去，武当山并不高，也不是很雄伟。但满山松树，绿油油的不时露出几个黄色的屋
顶。给人一种宁静肃穆的感觉。
LONG
	);
	set("exits", ([ 
		"south" : __DIR__"xiaozhen",
		"north" : __DIR__"bwuroad1",
	]));
	set("outdoors", "wudang");
	set("coor/x",0);
	set("coor/y",110);
	set("coor/z",-50);
	setup();
}
