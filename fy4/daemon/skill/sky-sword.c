//������֮���콣��

#include <ansi.h>

inherit SKILL;
void setup(){
	set("name","���콣��");
	set("type","sword");
	set("difficulty",300);
	set("usage/sword",1);
	set("usage/parry",1);
	set("effective_level",300);
	set("skill_class","npc");
	set("parry_msg", ({
        	"$nͦ��һ�С����������С�,���ν���������$N�Ĺ��ƶ�Ȼʧȥ�˷���\n",
		"$n������������һ���������ղ�������Ȼ������$N����Ĺ��ơ�\n",
		"$n��̾һ��������$v������磬$N�����Ĺ����ѱ�һ�С�������粨���������Ӱ���١�\n",
		"$n���������ʹ��һʽ����鮿�ʧ׹�����������Ѵ�$N������������\n",
	}) );

	set("unarmed_parry_msg", ({
        	"$nͦ��һ�С����������С�,���ν���������$N�Ĺ��ƶ�Ȼʧȥ�˷���\n",
		"$n������������һ���������ղ�������Ȼ������$N����Ĺ��ơ�\n",
		"$n��̾һ��������$v������磬$N�����Ĺ����ѱ�һ�С�������粨���������Ӱ���١�\n",
		"$n���������ʹ��һʽ����鮿�ʧ׹�����������Ѵ�$N������������\n",
	}) );

	action = ({
		([	"name":			"�ڸ�������",
			"action":		
			"$N�ƹ��ȵ�ٿ�˺�����һ�С��ڸ�����������������������ӣ��޿ײ���ع���$n",
			"dodge":		200,
			"parry" :		400,
			"damage":		170,
			"force" : 		200,
			"damage_type":	"����"
		]),
		([	"name":			"˹�˶���",
			"action":		
			"$N�����һ������һʽ��˹�˶��㲡�,$w�������磬��������$n",
	                "dodge":                220,
	                "parry" :               200,
	                "damage":               300,
	                "force" :               100,
			"damage_type":	"����"
		]),
		([	"name":			"ǧ��������",
			"action":		
			"$N˫Ŀ�ʹ���$w���أ�������ɮ�붨�����ּ�����ǰ����$n���ؿھ���һ�С�ǧ������������",
	                "dodge":                220,
	                "parry" :               340,
	                "damage":               140,
	                "force" :               250,
			"damage_type":	"����"
		]),
		([	"name":			"��į������",
			"action":		
			"$N���˷��������缲�磬����ʹ��һʽ����į�����¡�������ױ���һ������$n��$l��",
	                "dodge":                170,
	                "parry" :               240,
	                "damage":               250,
	                "force" :               150,
			"damage_type":	"����"
		]),
	});
}

