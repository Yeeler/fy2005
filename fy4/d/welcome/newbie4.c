// Silencer@fy4 workgroup

inherit ROOM;
#include <ansi.h>

int update_player(object me);

void create()
{
	set("short", HIG"Áé³Ø"NOR);
	set("long", @LONG
ÕâÊÇÒ»Ì¶±ÌÈç´äÓñµÄÇå³Ø£¬Ô»ÎªÁé³Ø£¬³ØË®²»Éî£¬Ç³Ç³¿ÉĞĞ£»¾İ´«ÎôÈÕÅ®æ´²¹
Ìì£¬É¢ÂäÁËĞ©ĞíÆß²ÊÁéÊ¯£¬×¹Èë´ËÌ¶£¬»¯Îª±ÌË®£¬Ã¿Ò»¸ö³õÈë·çÔÆµÄĞÂÈË¶¼ÒªÍ½²½
ÌÊ¹ıÕâÀï£¬¶øµÃµ½Ò»Ğ©µÃÌì¶Àºñ£¬¶ÀÒ»ÎŞ¶şµÄÔì»¯¡££¨ÊäÈë[37m£ó£ã£ï£ò£å[32mÃüÁî£¬Äã»á
¿´µ½ÄãÓĞ[1;32m²ÅÖÇ¡¢Á¦Á¿¡¢ËÙ¶È¡¢ÌåÖÊ¡¢¶¨Á¦ºÍÔËÆø[0;32mÁù´óÊôĞÔ¡£ÔÚÕâÀï£¬¿É½øÒ»²½·ÖÅä
£±£°µãµ½Áù¸ö»ù±¾ÊôĞÔ¡£ÃüÁîÎª[37m£ä£é£ó£ô£ò£é£â£õ£ô£å[32m£¬ºó¸úÄãÏ£ÍûµÄÊôĞÔ£¬
[37mÀı£º£ä£é£ó£ô£ò£é£â£õ£ô£å¡¡£ã£á£é£ú£è£é[32m£¨»ò²ÅÖÇ£©¼´Ôö¼ÓÒ»µã²ÅÖÇ¡£ÊôĞÔµÄËµ
Ã÷²ÎÔÄ[37m£è£å£ì£ğ¡¡£î£å£÷£â£é£å[32mÖĞµÄ²ÎÊı½éÉÜÆª£¨Ñ¡Ïî£¶£©¡££©
LONG
	);
	set("exits", ([
  		"down" :  __DIR__"newbie5",
	]));
	set("coor/x",0);
	set("coor/y",0);
	set("coor/z",800);
	set("no_magic",1);
	set("no_fight",1);
	setup();
}



int init(){
	add_action("do_distribute", "distribute");
}


int valid_leave(object me, string dir) {

	if (dir == "down")
	if ( me->query("used_gift_points") != 10)
		return notify_fail("Äã±ØĞë°Ñ²ÎÊıµã·ÖÅäÍê±Ï¡£
Àı£º£ä£é£ó£ô£ò£é£â£õ£ô£å¡¡£ã£á£é£ú£è£é£¨»ò²ÅÖÇ£©\n");
	me->set_temp("first_time_login",1);
	return ::valid_leave(me, dir);
}

int do_distribute(string arg)
{
	int gift_points;
	int used_gift_points;
	object me;
	
	me = this_player();
	
	if( !arg ) 
		return notify_fail("ÄãÒª·ÖÅäµ½ÄÄ¸ö²ÎÊıÉÏ£¿
Àı£º£ä£é£ó£ô£ò£é£â£õ£ô£å¡¡£ã£á£é£ú£è£é£¨»ò²ÅÖÇ£©\n");
	gift_points = me->query("gift_points");
	used_gift_points = me->query("used_gift_points");
	if( used_gift_points >= gift_points )
		return notify_fail("ÄãÃ»ÓĞ²ÎÊıµãÊ£ÓàÁË¡£\n");
	
	switch (arg) {
	case "²ÅÖÇ" :
	case "caizhi" :
			if((int) me->query("int") >=15)
				return notify_fail("ÄãµÄ²ÅÖÇ²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
			me->add("used_gift_points",1);
			me->add("distribute/int",1);
			me->add("int",1);
			break;
        case "ÌåÖÊ" :
        case "tizhi" :
                        if((int) me->query("con") >=15)
                        	return notify_fail("ÄãµÄÌåÖÊ²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
                        me->add("used_gift_points",1);
                        me->add("con",1);
                        me->add("distribute/con",1);
                        break;
        case "ÔËÆø" :
        case "yunqi" :
                        if((int) me->query("kar") >=15)
                        return notify_fail("ÄãµÄÔËÆø²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
                        me->add("used_gift_points",1);
                        me->add("kar",1);
                        me->add("distribute/kar",1);
                        break;
        case "Á¦Á¿" :
        case "liliang" :
                        if((int) me->query("str") >=15)
                        return notify_fail("ÄãµÄÁ¦Á¿²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
                        me->add("used_gift_points",1);
                        me->add("str",1);
                        me->add("distribute/str",1);
                        break;
        case "ËÙ¶È" :
        case "sudu" :
                        if((int) me->query("agi") >=15)
                        return notify_fail("ÄãµÄËÙ¶È²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
                        me->add("used_gift_points",1);
                        me->add("agi",1);
                        me->add("distribute/agi",1);
                        break;
        case "¶¨Á¦" :
        case "dingli" :
                        if((int) me->query("cps") >=15)
                        return notify_fail("ÄãµÄ¶¨Á¦²»¿ÉÒÔÓÃ·ÖÅäµÄ·½·¨ÔÙÌá¸ßÁË¡£\n");
                        me->add("used_gift_points",1);
                        me->add("cps",1);
                        me->add("distribute/cps",1);
                        break;
        default :
			return notify_fail("Ã»ÓĞÕâ¸ö²ÎÊı¡£
Àı£º£ä£é£ó£ô£ò£é£â£õ£ô£å¡¡£ã£á£é£ú£è£é£¨»ò²ÅÖÇ£©\n");

	}
	write("ÄãµÄ"+ arg + "Ìá¸ßÁËÒ»µã¡£\n");
	if ( used_gift_points < 9)
		write("Äã»¹ÓĞ"+ chinese_number(gift_points - used_gift_points-1) + "µã²ÎÊı£¬Çë¼ÌĞø·ÖÅä¡£\n");
	else 
		{
			update_player(me);
		}
	return 1;
}

int update_player(object me)
{
        object env, link_ob, obj;

        env = environment(me);

        // First, create the new body.
        link_ob = me->query_temp("link_ob");
        obj = LOGIN_D->make_body(link_ob);
        if (!obj) return 0;

        // Save the data and exec the player to his/her link object.
        me->save();
        exec(link_ob, me);
        destruct(me);

        // Restore new body and exec to it via enter_world in LOGIN_D
        obj->restore();
        LOGIN_D->enter_world(link_ob, obj, 1);

	obj->receive_fulling("sen",500);
	obj->receive_fulling("gin",500);	// Leave kee out to do a demo downstairs
        obj->set("startroom", AREA_FY"fqkhotel");
        write ("ËùÓĞ²ÎÊıµã·ÖÅäÍê±Ï£¬ÈËÎï´´ÔìÍê±Ï£¬»¶Ó­½øÈë·çÔÆÊÀ½ç¡£\n");
        obj->move(env);
        obj->set_temp("first_time_login",1);
        obj->set_temp("successful_login", 1);
        obj->write_prompt();

        return 1;
}