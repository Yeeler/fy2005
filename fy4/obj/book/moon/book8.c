inherit ITEM;
void create()
{
	set_name("������", ({ "ironcloth-book","ironcloth" }));
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",	"һ���ֳ��ı���ֽ�飬�ּ����Ҳ�����\n������ȥ�����������ص�ȴ�Ǽ�����书��\n");
		set("no_drop", 1);
		set("no_get", 1);
		set("no_sell", 1);
		set("value",10000);
		set("material", "paper");
		set("skill", ([
			"name": 	"iron-cloth",
			"sen_cost":	4,
				"literate":	"iron-cloth",
		"liter_level":	110,
			"difficulty":	2,
			"max_skill":	119
		]) );
	}
	::init_item();
}

/*

���������������X�Y
���������������U�t�r
���������������U���t�r
���������������U�����t�r
���������������U��������
���������������^�k�k�k�_

��������������- FengYun - ������
������������annie 08.2003
������dancing_faery@hotmail.com
*/
