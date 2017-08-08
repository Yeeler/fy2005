// wizlock.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	int lvl;

	if( me!=this_player(1) ) return 0;
	if( wiz_level(me) < wiz_level("(wizard)") )
		return notify_fail("─у╡─╬╫╩ж╡╚╝╢╠л╡═гм├╗╙╨╩╣╙├╒т╕Ў╓╕┴ю╡─╚и┴жбг\n");
	if( !arg || arg=="" )
		return notify_fail("╓╕┴ю╕ё╩╜г║nulock <0/1>\n");

	if( sscanf(arg, "%d", lvl)!=1 )
		return notify_fail("╓╕┴ю╕ё╩╜г║nulock <0/1>\n");
	seteuid(getuid());
	if( LOGIN_D->set_newuser_lock(lvl) ) {
		write("╖ч╘╞┐к╩╝▓╗╜╙╩▄╨┬╚╦╬ягб\n");
		return 1;
	} else
		return notify_fail("╖ч╘╞┐к╩╝╜╙╩▄╨┬╚╦╬ябг\n");
}

int help (object me)
{
        write(@HELP
[0;1;37mйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйд[0m
[0;1;36m╬╫╩ж╓╕┴ю╕ё╩╜ : 	nulock <0/1>[0m
[0;1;37mйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйд[0m    

╧▐╓╞╖ч╘╞╩╟╖ё╜╙╩▄╨┬╚╦╬яго

[0;1;37mйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйдйд[0m  
HELP
);
        return 1;
}
 
