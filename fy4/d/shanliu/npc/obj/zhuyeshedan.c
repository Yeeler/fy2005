#include <ansi.h>
inherit ITEM;
inherit F_FOOD;
void create()
{
    set_name(GRN"��Ҷ���ߵ�"NOR, ({"zhuye shedan"}) );
    set_weight(20);
        if( clonep() )
                set_default_object(__FILE__);
        else {
            set("long", "���ڻ�ɽ�����е���Ҷ���ߵ���\n");
                set("unit", "��");
                set("value", 500);
        set("food_remaining", 10);
                set("food_supply", 60);
        }
    ::init_item();
}
