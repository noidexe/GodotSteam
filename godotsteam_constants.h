//===========================================================================//
// GodotSteam - godotsteam_constants.h
//===========================================================================//
//
// Copyright (c) 2015-Current | GP Garcia and Contributors (view contributors.md)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//===========================================================================//

#ifndef GODOTSTEAM_CONSTANTS_H
#define GODOTSTEAM_CONSTANTS_H


// Constants with 'deprecated/': these were listed in the SDK docs but do not exist in the header files; safe to remove probably
// Possibly deprecated or never existed?
#define ACCOUNT_ID_INVALID k_uAccountIdInvalid
#define API_CALL_INVALID k_uAPICallInvalid
#define APP_ID_INVALID k_uAppIdInvalid
#define AUTH_TICKET_INVALID k_HAuthTicketInvalid
#define DEPOT_ID_INVALID k_uDepotIdInvalid
#define GAME_EXTRA_INFO_MAX k_cchGameExtraInfoMax
#define INVALID_BREAKPAD_HANDLE 0 //deprecated?
#define QUERY_PORT_ERROR 0xFFFE //deprecated?
#define QUERY_PORT_NOT_INITIALIZED 0xFFFF //deprecated?
#define STEAM_ACCOUNT_ID_MASK k_unSteamAccountIDMask
#define STEAM_ACCOUNT_INSTANCE_MASK k_unSteamAccountInstanceMask
#define STEAM_BUFFER_SIZE 255 //deprecated?
#define STEAM_LARGE_BUFFER_SIZE 8160 //deprecated?
#define STEAM_MAX_ERROR_MESSAGE 1024
#define STEAM_USER_CONSOLE_INSTANCE 2 //deprecated?
#define STEAM_USER_DESKTOP_INSTANCE k_unSteamUserDefaultInstance
#define STEAM_USER_WEB_INSTANCE 4 //deprecated?

// Define Friends constants
#define CHAT_METADATA_MAX k_cubChatMetadataMax
#define ENUMERATED_FOLLOWERS_MAX k_cEnumerateFollowersMax
#define FRIEND_GAME_INFO_QUERY_PORT_ERROR k_usFriendGameInfoQueryPort_Error
#define FRIEND_GAME_INFO_QUERY_PORT_NOT_INITIALIZED k_usFriendGameInfoQueryPort_NotInitialized
#define FRIENDS_GROUP_LIMIT k_cFriendsGroupLimit
#define INVALID_FRIEND_GROUP_ID k_FriendsGroupID_Invalid
#define MAX_FRIENDS_GROUP_NAME k_cchMaxFriendsGroupName
#define MAX_RICH_PRESENCE_KEY_LENGTH k_cchMaxRichPresenceKeyLength
#define MAX_RICH_PRESENCE_KEYS k_cchMaxRichPresenceKeys
#define MAX_RICH_PRESENCE_VALUE_LENTH k_cchMaxRichPresenceValueLength
#define PERSONA_NAME_MAX_UTF8 k_cchPersonaNameMax
#define PERSONA_NAME_MAX_UTF16 k_cwchPersonaNameMax

// Define HTML Surface constants
#define INVALID_HTMLBROWSER 0

// Define HTTP constants
#define HTTPCOOKIE_INVALID_HANDLE INVALID_HTTPCOOKIE_HANDLE
#define HTTPREQUEST_INVALID_HANDLE INVALID_HTTPREQUEST_HANDLE

// Define Input constants
#define INPUT_HANDLE_ALL_CONTROLLERS STEAM_INPUT_HANDLE_ALL_CONTROLLERS
#define INPUT_MAX_ACTIVE_LAYERS STEAM_INPUT_MAX_ACTIVE_LAYERS
#define INPUT_MAX_ANALOG_ACTIONS STEAM_INPUT_MAX_ANALOG_ACTIONS
#define INPUT_MAX_ANALOG_ACTION_DATA STEAM_INPUT_MAX_ANALOG_ACTION_DATA
#define INPUT_MAX_COUNT STEAM_INPUT_MAX_COUNT
#define INPUT_MAX_DIGITAL_ACTIONS STEAM_INPUT_MAX_DIGITAL_ACTIONS
#define INPUT_MAX_ORIGINS STEAM_INPUT_MAX_ORIGINS
#define INPUT_MIN_ANALOG_ACTION_DATA STEAM_INPUT_MIN_ANALOG_ACTION_DATA

// Define Inventory constants
#define INVENTORY_RESULT_INVALID k_SteamInventoryResultInvalid
#define ITEM_INSTANCE_ID_INVALID k_SteamItemInstanceIDInvalid

// Define Matchmaking constants
#define FAVORITE_FLAG_FAVORITE k_unFavoriteFlagFavorite
#define FAVORITE_FLAG_HISTORY k_unFavoriteFlagHistory
#define FAVORITE_FLAG_NONE k_unFavoriteFlagNone
#define MAX_LOBBY_KEY_LENGTH k_nMaxLobbyKeyLength
#define SERVER_QUERY_INVALID HSERVERQUERY_INVALID

// Define Matchmaking Servers constants
#define MAX_GAME_SERVER_GAME_DATA k_cbMaxGameServerGameData
#define MAX_GAME_SERVER_GAME_DESCRIPTION k_cbMaxGameServerGameDescription
#define MAX_GAME_SERVER_GAME_DIR k_cbMaxGameServerGameDir
#define MAX_GAME_SERVER_MAP_NAME k_cbMaxGameServerMapName
#define MAX_GAME_SERVER_NAME k_cbMaxGameServerName
#define MAX_GAME_SERVER_TAGS k_cbMaxGameServerTags

// Define Music Remote constants
#define MUSIC_NAME_MAX_LENGTH k_SteamMusicNameMaxLength
#define MUSIC_PNG_MAX_LENGTH k_SteamMusicPNGMaxLength

// Define Networking Socket constants
#define MAX_STEAM_PACKET_SIZE k_cbMaxSteamNetworkingSocketsMessageSizeSend

// Define Networking Types constants | Found in steamnetworkingtypes.h
#define LISTEN_SOCKET_INVALID k_HSteamListenSocket_Invalid
#define MAX_NETWORKING_ERROR_MESSAGE k_cchMaxSteamNetworkingErrMsg
#define MAX_NETWORKING_PING_LOCATION_STRING k_cchMaxSteamNetworkingPingLocationString
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_DEFAULT k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Default
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_DISABLE k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Disable
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_RELAY k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Relay
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_PRIVATE k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Private
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_PUBLIC k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Public
#define NETWORKING_CONFIG_P2P_TRANSPORT_ICE_ALL k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_All
#define NETWORKING_CONNECTION_INFO_FLAG_UNAUTHENTICATED k_nSteamNetworkConnectionInfoFlags_Unauthenticated
#define NETWORKING_CONNECTION_INFO_FLAG_UNENCRYPTED k_nSteamNetworkConnectionInfoFlags_Unencrypted
#define NETWORKING_CONNECTION_INFO_FLAG_LOOPBACK_BUFFERS k_nSteamNetworkConnectionInfoFlags_LoopbackBuffers
#define NETWORKING_CONNECTION_INFO_FLAG_FAST k_nSteamNetworkConnectionInfoFlags_Fast
#define NETWORKING_CONNECTION_INFO_FLAG_RELAYED k_nSteamNetworkConnectionInfoFlags_Relayed
#define NETWORKING_CONNECTION_INFO_FLAG_DUALWIFI k_nSteamNetworkConnectionInfoFlags_DualWifi
#define NETWORKING_CONNECTION_INVALID k_HSteamNetConnection_Invalid
#define NETWORKING_MAX_CONNECTION_APP_NAME k_cchSteamNetworkingMaxConnectionAppName
#define NETWORKING_MAX_CONNECTION_CLOSE_REASON k_cchSteamNetworkingMaxConnectionCloseReason
#define NETWORKING_MAX_CONNECTION_DESCRIPTION k_cchSteamNetworkingMaxConnectionDescription
#define NETWORKING_PING_FAILED k_nSteamNetworkingPing_Failed
#define NETWORKING_PING_UNKNOWN k_nSteamNetworkingPing_Unknown
#define NETWORKING_SEND_UNRELIABLE k_nSteamNetworkingSend_Unreliable
#define NETWORKING_SEND_NO_NAGLE k_nSteamNetworkingSend_NoNagle
#define NETWORKING_SEND_URELIABLE_NO_NAGLE k_nSteamNetworkingSend_UnreliableNoNagle
#define NETWORKING_SEND_NO_DELAY k_nSteamNetworkingSend_NoDelay
#define NETWORKING_SEND_UNRELIABLE_NO_DELAY k_nSteamNetworkingSend_UnreliableNoDelay
#define NETWORKING_SEND_RELIABLE k_nSteamNetworkingSend_Reliable
#define NETWORKING_SEND_RELIABLE_NO_NAGLE k_nSteamNetworkingSend_ReliableNoNagle
#define NETWORKING_SEND_USE_CURRENT_THREAD k_nSteamNetworkingSend_UseCurrentThread
#define NETWORKING_SEND_AUTORESTART_BROKEN_SESSION k_nSteamNetworkingSend_AutoRestartBrokenSession

// Define Remote Storage constants
#define ENUMERATE_PUBLISHED_FILES_MAX_RESULTS k_unEnumeratePublishedFilesMaxResults
#define FILE_NAME_MAX k_cchFilenameMax
#define MAX_CLOUD_FILE_CHUNK_SIZE k_unMaxCloudFileChunkSize
#define PUBLISHED_DOCUMENT_CHANGE_DESCRIPTION_MAX k_cchPublishedDocumentChangeDescriptionMax
#define PUBLISHED_DOCUMENT_DESCRIPTION_MAX k_cchPublishedDocumentDescriptionMax
#define PUBLISHED_DOCUMENT_TITLE_MAX k_cchPublishedDocumentTitleMax
#define PUBLISHED_FILE_ID_INVALID k_PublishedFileIdInvalid
#define PUBLISHED_FILE_UPDATE_HANDLE_INVALID k_PublishedFileUpdateHandleInvalid
#define PUBLISHED_FILE_URL_MAX k_cchPublishedFileURLMax
#define TAG_LIST_MAX k_cchTagListMax
#define UGC_FILE_STREAM_HANDLE_INVALID k_UGCFileStreamHandleInvalid
#define UGC_HANDLE_INVALID k_UGCHandleInvalid

// Define Screenshot constants
#define MAX_TAGGED_PUBLISHED_FILES k_nScreenshotMaxTaggedPublishedFiles
#define MAX_TAGGED_USERS k_nScreenshotMaxTaggedUsers
#define SCREENSHOT_INVALID_HANDLE INVALID_SCREENSHOT_HANDLE
#define SCREENSHOT_THUMB_WIDTH k_ScreenshotThumbWidth
#define UFS_TAG_TYPE_MAX k_cubUFSTagTypeMax
#define UFS_TAG_VALUE_MAX k_cubUFSTagValueMax

// Define Timeline constants
#define MAX_PHASE_ID_LENGTH k_cchMaxPhaseIDLength
#define MAX_TIMELINE_PRIORITY k_unMaxTimelinePriority
#define MAX_TIMELINE_EVENT_DURATION k_flMaxTimelineEventDuration
#define TIMELINE_PRIORITY_KEEP_CURRENT_VALUE k_unTimelinePriority_KeepCurrentValue

// Define UGC constants
#define DEVELOPER_METADATA_MAX k_cchDeveloperMetadataMax
#define NUM_UGC_RESULTS_PER_PAGE kNumUGCResultsPerPage
#define UGC_QUERY_HANDLE_INVALID k_UGCQueryHandleInvalid
#define UGC_UPDATE_HANDLE_INVALID k_UGCUpdateHandleInvalid

// Define User Stats constants
#define LEADERBOARD_DETAIL_MAX k_cLeaderboardDetailsMax
#define LEADERBOARD_NAME_MAX k_cchLeaderboardNameMax
#define STAT_NAME_MAX k_cchStatNameMax


#endif // GODOTSTEAM_CONSTANTS_H