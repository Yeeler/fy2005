inherit ITEM;

void create()
{
    set_name("才讎凾", ({ "tablet"}) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
        	set("unit", "翠");
	}
	::init_item();
}
/*
 
               (\~~~/)            
               ( ����)        

               (_____)~��      
   
　　　　　　　- FengYun - 　　　
　　　　　　annie 10.2003
　　　dancing_faery@hotmail.com
*/
