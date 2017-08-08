
inherit ROOM;
#include <ansi.h>
void create()
{
        set("short", "洞穴");
        set("long", @LONG
借著手中的光亮，你看清楚了四周的景色。只见怪石林立，道路错综复杂，你
已经迷失了方向。几只小老鼠在你脚边跑来跑去。在这里，你根本分不清东南西北；
而东南西北对你来说，也没有任何意义。是生是死，只能听天由命。。
LONG
        );
        set("exits", ([ 
		"east" : __DIR__"lighthole1",
		"west" : __DIR__"lighthole6",
		"north" : __DIR__"lighthole3",
		"south" : __DIR__"lighthole",
	]));
	set("coor/x",-40);
	set("coor/y",70);
	set("coor/z",40);
	setup();
}

void init()
{
	add_action("do_search", "search");
	add_action("do_bomb", "bomb");
}

int do_bomb(string arg)
{
	object 	me, *inv, exp, nroom;
	int 	i;

	me = this_player();
	inv = all_inventory(me);
	for(i=0; i<sizeof(inv); i++) 
		if( (int) inv[i]->query("explosive") ) exp = inv[i];
	if( !exp)  return 0;
	message_vision("$N点燃了手中的"+exp->name()+"．．．
只听得一声滔天巨响＂轰＂，洞壁被炸开个大洞．\n", me, exp);
        destruct(exp);
	remove_action("do_search", "search");
	nroom = find_object(__DIR__"lighthole5");
	if(!objectp(nroom)) 
		nroom = load_object(__DIR__"lighthole5");
	inv = all_inventory(this_object());
	for(i=0; i<sizeof(inv); i++) {
		if( userp(inv[i]) ) {
			inv[i]->unconcious();
		}
	}
	me->move(nroom);
	return 1;
}


int do_search(string arg)
{
	int	kar;
	object	box, pearl, nroom;

	if(!arg && !this_player()->query_temp("marks/boxp")) {
		kar = this_player()->query("kar");
		if(random(kar + 270) < kar) {
			message_vision(BLU "\n在黑暗中$N四处摸索，突然$N触到了石壁上的一块突出。\n"NOR, this_player());
			message_vision(BLU "\n$N的脚下裂开了一个大洞！\n"NOR, this_player());
			message_vision(BLU "\n$N大叫了一声，掉了下去！\n"NOR, this_player());
			nroom = find_object(__DIR__"dating");
			if(!objectp(nroom)) nroom = load_object(__DIR__"dating");
			this_player()->move(nroom);
                 message_vision(YEL "\n$N从大厅屋顶掉了下来！\n"NOR, this_player());
			message_vision( YEL"\n$N受到了太大的惊吓，晕了过去！\n"NOR, this_player());
			this_player()->unconcious();
			return 1;
		}
		else if(random(kar + 70) < kar) {
			message_vision(BLU "\n在黑暗中$N四处摸索，突然$N触到了一个突出的石壁上，
上面似乎有个盒子。\n"NOR, this_player());
			seteuid( geteuid(this_player()));
			box = new(__DIR__"obj/box");
			pearl = new(__DIR__"obj/pearl");
			pearl->move(box);
			box->move(this_object());
			this_player()->set_temp("marks/boxp", 1);
			return 1;
		}
	}
        return notify_fail("\n你在黑暗中四处摸索，却甚麽都没发现。\n");
}

