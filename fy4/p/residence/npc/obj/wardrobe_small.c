#include <ansi.h>
inherit __DIR__"annieitem";

#define MAX_ITEM 3

void create()
{
	set_name("小巧衣橱", ({ "tiny wardrobe"}) );	// 让这个id有别于其他东西。不使用单字id!
	set_weight(30000);
	set_max_encumbrance(80000);
	set("unit", "个");
	set("desc", "一个小巧玲珑的小衣橱。\n");
	set("no_get",1);
	set("no_sell",1);
	set("no_drop",1);
	set("no_stack",1);
	set("no_reset",1);
	set("item_type","c");
	set("size",1);
	set("lore_item",1);

	set("value", 200000);
	set("tax",20);
	set("score_tax",7);
	set("max_item",MAX_ITEM);

	seteuid(getuid());
}

int is_container() { return 1;}

/*

　　　　　　　╔╕
　　　　　　　║╰╮
　　　　　　　║│╰╮
　　　　　　　║││╰╮
　　　　　　　║││││
　　　　　　　╚╧╧╧╛

　　　　　　　- FengYun - 　　　
　　　　　　annie 08.2003
　　　dancing_faery@hotmail.com
*/
