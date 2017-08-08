// medicine.c

inherit MEDICINE;

void create()
{
	set_name("熊掌",({"xiong"}));
        if( clonep() )
                set_default_object(__FILE__);
	else {
	    	set("long","一小块熊掌，可以用来治疗200点心神损伤。\n");
	    	set("base_unit","包");
        	set("unit","盒");
        	set("base_value", 1000);
        	set("base_weight",60);
        	set("field","sen");
	    	set("type","cure");
	    	set("effect",200);
	    	set("heal_type","sen/200");
	    	set("usage_type","herb");	
	    	set("volumn", 2);
	}
	set_amount(2);
}