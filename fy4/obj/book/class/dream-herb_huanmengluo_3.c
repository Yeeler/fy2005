#include <ansi.h>
inherit __DIR__"scroll.c";

void create()
{
        set_name(CYN"�������廨����������ɣɣɡ�"NOR, ({ "scroll" }));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long",(: description() :));
				set("value", 1000);
                set("no_split",1);
                set("unit", "��");
                set("material", "paper");
                set("required_class","knight");
                set("teaching", "huanmengluo");
				set("required_exp", 6400000);
				set("required_skill", "dream-herb");
                set("required_skill_level",200);
				set("grade",3);
        }
}

