#include "sleepy_discord/sleepy_discord.h"

#include "constants.h"
#include "client.h"
#include "utils.h"

namespace sd = SleepyDiscord;

int main() {
#ifdef DEVELOPMENT
    std::cout << "[DEBUG] Development mode\n";
#endif // DEVELOPMENT

    ClientClass client(kBotToken, sd::USER_CONTROLED_THREADS);

    client.setIntents(
          sd::Intent::SERVER_MESSAGES
        | sd::Intent::SERVER_MEMBERS
        | sd::Intent::SERVER_PRESENCES
    );

    client.run();
}
