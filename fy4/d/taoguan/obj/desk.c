
inherit ITEM;

void create()
{
	set_name("����", ({ "desk", "��ľ����" , "����", "��"}) );
	set_weight(500);
	set_max_encumbrance(80000);
	set("no_get", 1);
	set("no_shown", 1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("prep", "on");
		set("long", "һ�ź�ľ����\n");
		set("value", 1);
	}
    ::init_item();
}

int is_container() { return 1; }


/*
 
               (\~~~/)            
               ( ����)        

               (_____)~��      
   
��������������- FengYun - ������
������������annie 10.2003
������dancing_faery@hotmail.com
*/

