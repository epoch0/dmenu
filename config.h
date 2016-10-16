/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#282828"; /* -nb option; normal background                 */
static const char *normfgcolor = "#ebdbb2"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#ebdbb2"; /* -sb option; selected background               */
static const char *selfgcolor  = "#3c3836"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#00ffff";
static const char *outfgcolor  = "#000000";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

static unsigned int lineheight = 24;         /* -lh option; minimum height of a menu line     */

