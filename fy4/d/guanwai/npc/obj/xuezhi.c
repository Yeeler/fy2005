// medicine.c

inherit MEDICINE;
#include <ansi.h>

void create()
{
    	set_name(WHT"ѩ֥"NOR,({ "xuezhi"}));
        if( clonep() )
                set_default_object(__FILE__);
	else {
	    	set("long",
                "һ�����ʥĸѩ���ѩ֥��ѩ����Ͼ���������棬������������1000���������ˡ�\n");
	        set("base_unit","��");
        	set("unit","��");
        	set("base_value", 6000);
        	set("base_weight",60);
        	set("field","sen");
	    	set("type","cure");
	    	set("effect",1000);
	    	set("heal_type","sen/1000");
	    	set("usage_type","herb");	
	    	set("volumn", 1);
	}
	set_amount(1);
}

