//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"oskb",		0,	13},
	{"",	"rotate",	0,	12},
	{"",	"playing",	60,	11},
	{"",	"weather",	18000,	5},
	{"",	"internet",	5,	4},
	{"",	"battery",	5,	3},
	{"",	"volume",	0,	10},
	{"",	"clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
