// tblade.c
#include <ansi.h> 
#include <weapon.h> 
inherit SWORD;
void create()
{
        set_name(MAG"���"NOR, ({ "leave hook" }) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","����һ�����ι�״�ı��С�\n");
                set("wield_msg", "����һ����$N���оͶ���һ����״����ı��У��㲻�����˸���ս��\n");
                set("unequip_msg", "$N������$n�ò����ã�����������\n");
                set("fake_leavehook",1);
                set("lore",1);
                set("material", "steel");
                set("rigidity", 100000); 
        }
        ::init_sword(20);
}
