#include <ansi.h>
inherit __DIR__"scroll.c";

void create()
{
        set_name(CYN"��ѩҰǱ�١���ͻ�ɣɣɡ�"NOR, ({ "scroll" }));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long",(: description() :));
				set("value", 1000);
                set("no_split",1);
                set("unit", "��");
                set("material", "paper");
                set("required_class","wolfmount");
                set("teaching", "wolverine");
				set("required_exp", 4100000);
				set("required_skill", "xueyeqianzong");
                set("required_skill_level",160);
				set("grade",3);
        }
}

