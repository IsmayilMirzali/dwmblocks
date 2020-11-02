//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/		/*Command*/					/*Update Interval*/	    /*Update Signal*/
	{"⚡", 		"~/.local/bin/battery",						30, 			               0  },
	{"🎧", 		"~/.local/bin/volume", 						 0, 			               30 },
	{"", 		"~/.local/bin/brightness", 					 0, 			               31 },
	{"", 		"~/.local/bin/memory",	                    30,			                   0  },
	{"", 		"date '+%d %b %Y %H:%M '",	                 5,              			   0  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
