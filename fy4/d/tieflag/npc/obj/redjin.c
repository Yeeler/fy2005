// cloth.c
#include <ansi.h>
#include <armor.h>

inherit MASK;

void create()
{
    set_name(HIR"�����ɴ"NOR, ({ "shajin"}) );
    set_weight(1000);
    if( clonep() )
        set_default_object(__FILE__);
    else {
        set("unit", "��");
        set("material", "cloth");
        set("for_lady",1);
        set("armor_prop/armor", 1);
         set("value",100);
    }
    ::init_mask();
}
