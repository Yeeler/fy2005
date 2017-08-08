

inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",2);

  set ("short", "登天殿"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG

无论多聪明的人，心裡若有些畏惧，也会变笨的。
所以你若想击倒一个人，最好的办法，就是让他自己心裡先觉得恐惧。
那么用不着你出手，他自己就先已将自己击倒。

LONG);
        set("exits", ([
  "down" : __DIR__"cloud"+(query("floor")-1),
  "up" : __DIR__"cloud"+(query("floor")+1), 
]));
  	set("coor/x",-20);
	set("coor/y",-50);
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
