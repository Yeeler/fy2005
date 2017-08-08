// info.c

inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
	object obj;
	string str;

	if (!arg) return help(me);

	seteuid(geteuid(me));

	if( arg=="me" ) obj = me;
	else if( arg=="my link" ) obj = me->query_temp("link_ob");
	else {
		obj = present(arg, me);
		if (!obj) obj = present(arg, environment(me));
		if (!obj) obj = find_object( resolve_path(me->query("cwd"), arg) );
		if (!obj) return notify_fail("Ã»ÓĞÕâÑùÎï¼ş....¡£\n");
	}

	printf("Îï¼ş [%O]\n-----------------------------------------------------\n", obj);
	write("µµ°¸£º\t\t" + base_name(obj) + ".c\n");
	write("ÁìÓò£º\t\t" + domain_file(base_name(obj)) + "\n");
	write("×÷Õß£º\t\t" + author_file(base_name(obj)) + "\n");
	write("È¨ÏŞ£º\t\tuid = " + getuid(obj) + ", euid = " + geteuid(obj) + "\n");
	write("µÈ¼¶£º\t\t" + wizhood(obj) + "\n");
	write("Ê¹ÓÃ¼ÇÒäÌå£º\t" + memory_info(obj) + "\n");
	str = "";
	if( living(obj) ) 		str += "ÉúÎï ";
	if( userp(obj) )		str += "Ê¹ÓÃÕß ";
	if( interactive(obj) )	str += "ÏßÉÏ ";
	if( wizardp(obj) ) 		str += "Î×Ê¦ ";
	if( clonep(obj) ) 		str += "¸´ÖÆ ";
	if( virtualp(obj) ) 	str += "ĞéÄâ ";
	if( query_heart_beat(obj) ) str += "ĞÄÌø:" + query_heart_beat(obj) + " ";
	write("ÊôĞÔ£º\t\t" + str + "\n");
	write("¸´ÖÆ¸öÊı£º\t" + sizeof(children(base_name(obj)+".c")) + "\n");
	write("²Î¿¼Á¬½á£º\t" + refs(obj) + "\n");

	return 1;
}

int help(object me)
{
  write(@HELP
[0;1;37m©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤[0m
[0;1;36mÎ×Ê¦Ö¸Áî¸ñÊ½ : 	info <Îï¼şÖ®Ãû³Æ»òµµÃû>[0m
[0;1;37m©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤[0m   

ÀûÓÃ´ËÒ»Ö¸Áî¿ÉµÃÖªÒ»Ğ©ÓĞ¹Ø¸ÃÎï¼şµÄ×ÊÑ¶¡£

[0;1;37m©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤[0m   
HELP
    );
    return 1;
}
