class ISteamClient006
{
public:
    virtual unknown_ret CreateSteamPipe() = 0;
    virtual unknown_ret BReleaseSteamPipe(int) = 0;
    virtual unknown_ret CreateGlobalUser(int*) = 0;
    virtual unknown_ret ConnectToGlobalUser(int) = 0;
    virtual unknown_ret CreateLocalUser(int*) = 0;
    virtual unknown_ret ReleaseUser(int, int) = 0;
    virtual unknown_ret GetISteamUser(int, int, char const*) = 0;
    virtual unknown_ret GetIVAC(int) = 0;
    virtual unknown_ret GetISteamGameServer(int, int, char const*) = 0;
    virtual unknown_ret SetLocalIPBinding(unsigned int, unsigned short) = 0;
    virtual unknown_ret GetUniverseName(EUniverse) = 0;
    virtual unknown_ret GetISteamFriends(int, int, char const*) = 0;
    virtual unknown_ret GetISteamUtils(int, char const*) = 0;
    virtual unknown_ret GetISteamBilling(int, int, char const*) = 0;
    virtual unknown_ret GetISteamMatchmaking(int, int, char const*) = 0;
    virtual unknown_ret GetISteamApps(int, int, char const*) = 0;
    virtual unknown_ret GetISteamContentServer(int, int, char const*) = 0;
    virtual unknown_ret GetISteamMasterServerUpdater(int, int, char const*) = 0;
    virtual unknown_ret GetISteamMatchmakingServers(int, int, char const*) = 0;
    virtual unknown_ret RunFrame() = 0;
    virtual unknown_ret GetIPCCallCount() = 0;
};
