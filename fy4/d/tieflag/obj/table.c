
inherit ITEM;

void create()
{
    set_name("石桌", ({ "table"}) );
    set_weight(500); 
    set_max_encumbrance(80000);
    set("no_get", 1);
    if( clonep() )
        set_default_object(__FILE__);
    else {
        set("no_shown",1);
        set("prep", "under");
        set("unit", "张");
        set("long", "一张石桌。\n");
        set("value", 1);
    }
    ::init_item();
}
int is_container() { return 1; }

