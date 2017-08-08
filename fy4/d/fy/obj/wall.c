inherit ITEM;

void create()
{
	set_name("墙壁", ({ "wall", "墙", "墙壁"}) );
	set_weight(500);
	set_max_encumbrance(8000);
	set("no_get", 1);
	set("no_shown", 1);
	if( clonep() )
	    set_default_object(__FILE__);
	else {
		set("prep", "on");
	    	set("unit", "堵");
	    	set("long", "一堵墙，被油烟已经熏得看不出原来的颜色了。\n");
	    	set("value", 1);
	}
	::init_item();
}

int is_container() { return 1; }

