
#include "OsuDiscord.h"

static void UpdatePresence()
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = "Playing <Song>";
    discordPresence.details = "By: <Artist//Mapper>";
    discordPresence.startTimestamp = 1507665886;
    discordPresence.partySize = 1;
    discordPresence.partyMax = 1;
    Discord_UpdatePresence(&discordPresence);
}
