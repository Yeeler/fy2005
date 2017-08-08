

inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",4);

  set ("short", "笑浅楼"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG

这世上大多数人本来就是为了别人而活着的——
有些是为了自己所爱的人，
也有些是为了自己所恨的人。

这两种人都同样痛苦。这世上真正快乐的人本就不多。

LONG);
        set("exits", ([
  "down" : __DIR__"smile"+(query("floor")-1),
  "up" : __DIR__"smile"+(query("floor")+1), 
]));
  	set("coor/x",-20);
	set("coor/y",-30);
	set("coor/z",query("floor")*40);
	setup();
}

/*
 
               (\~~~/)            
               ( ．．)        

               (_____)~．      
   
　　　　　　　- FengYun - 　　　
　　　　　　annie 10.2003
　　　dancing_faery@hotmail.com
*/
