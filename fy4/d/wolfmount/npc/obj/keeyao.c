// medicine.c

inherit MEDICINE;
#include <ansi.h>

int eat_fun();

void create()
{
    	set_name(WHT"白云熊胆丸"NOR,({"baiyunwan","wan"}));
        set_weight(30);
        if( clonep() )
                set_default_object(__FILE__);
	else {
	    	set("long", "江湖中盛传的疗伤圣药，但价格昂贵，普通人只能望洋兴叹。可以用来治疗5000点外伤。\n");
	    	set("base_unit","颗");
	    	set("unit","包");
	    	set("base_weight",60);
        	set("base_value", 20000);
	    	set("type","cure");
	    	set("field","kee");
	    	set("effect",5000);
	    	set("heal_type","kee/5000");
	    	set("usage_type","pill");	
	    	set("use_func",(: eat_fun() :));
	    	set("volumn", 1);
	}
	set_amount(1);
}



int 	eat_fun() {
    	message_vision("$N咽下一颗白云熊胆丸，伤口神奇般愈合了起来。。。\n",this_player());
	return 1;
}