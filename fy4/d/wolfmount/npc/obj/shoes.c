#include <armor.h>

inherit BOOTS;

void create()
{
    set_name("��Ь", ({"shoes"}));
    set_weight(1000);
    if( clonep() )
        set_default_object(__FILE__);
    else 
    {
        set("material", "leather");
        set("unit", "˫");
        set("armor_prop/armor", 1);
    }
    ::init_boots();
}