// Massgate
// Copyright (C) 2017 Ubisoft Entertainment
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//
// THIS FILE HAS BEEN MODIFIED FOR USE IN A NON-UBISOFT PROJECT. IT IS NOT
// AN ORIGINAL COPY.
//
#pragma once

namespace MMG_ProtocolDelimiters
{
	enum Delimiter
	{
		ACCOUNT_START,

		ACCOUNT_NOT_CONNECTED,
		ACCOUNT_AUTH_ACCOUNT_REQ,
		ACCOUNT_AUTH_ACCOUNT_RSP,
		ACCOUNT_CREATE_ACCOUNT_REQ,
		ACCOUNT_CREATE_ACCOUNT_RSP,
		ACCOUNT_PREPARE_CREATE_ACCOUNT_REQ,
		ACCOUNT_PREPARE_CREATE_ACCOUNT_RSP,
		ACCOUNT_ACTIVATE_ACCESS_CODE_REQ,
		ACCOUNT_ACTIVATE_ACCESS_CODE_RSP,
		ACCOUNT_MODIFY_ACCOUNT_REQ_NOTUSED,
		ACCOUNT_MODIFY_ACCOUNT_RSP_NOTUSED,
		ACCOUNT_NEW_CREDENTIALS_REQ,
		ACCOUNT_NEW_CREDENTIALS_RSP,
		ACCOUNT_LOGOUT_ACCOUNT_REQ,
		ACCOUNT_LOGOUT_ACCOUNT_RSP,
		ACCOUNT_RETRIEVE_PROFILES_REQ,
		ACCOUNT_RETRIEVE_PROFILES_RSP,
		ACCOUNT_MODIFY_PROFILE_REQ,
		ACCOUNT_MODIFY_PROFILE_RSP,
		ACCOUNT_PATCH_INFORMATION,

		ACCOUNT_END,



		MESSAGING_START,

		MESSAGING_PROTOCOL_ERROR,
		MESSAGING_RETRIEVE_PROFILENAME,
		MESSAGING_RESPOND_PROFILENAME,
		MESSAGING_GET_FRIENDS_AND_ACQUAINTANCES_REQUEST,
		MESSAGING_GET_FRIENDS_RESPONSE,
		MESSAGING_GET_ACQUAINTANCES_RESPONSE,
		MESSAGING_ADD_FRIEND_REQUEST,
		MESSAGING_REMOVE_FRIEND_REQUEST,
		MESSAGING_REMOVE_FRIEND_RESPONSE,
		MESSAGING_IM_CHECK_PENDING_MESSAGES,
		MESSAGING_IM_SEND,
		MESSAGING_IM_RECEIVE,
		MESSAGING_IM_ACK,
		MESSAGING_SET_COMMUNICATION_OPTIONS_REQ,
		MESSAGING_GET_COMMUNICATION_OPTIONS_REQ,
		MESSAGING_GET_COMMUNICATION_OPTIONS_RSP,
		MESSAGING_GET_IM_SETTINGS,
		MESSAGING_SET_IM_SETTINGS,
		MESSAGING_GET_PPS_SETTINGS_REQ,
		MESSAGING_GET_PPS_SETTINGS_RSP,
		MESSAGING_CLAN_CREATE_REQUEST,
		MESSAGING_CLAN_CREATE_RESPONSE,
		MESSAGING_CLAN_MODIFY_REQUEST,
		MESSAGING_CLAN_MODIFY_RANKS_REQUEST,
		MESSAGING_CLAN_FULL_INFO_REQUEST,
		MESSAGING_CLAN_FULL_INFO_RESPONSE,
		MESSAGING_CLAN_BRIEF_INFO_REQUEST,
		MESSAGING_CLAN_BREIF_INFO_RESPONSE,
		MESSAGING_CLAN_INVITE_PLAYER_REQUEST,
		MESSAGING_CLAN_INVITE_PLAYER_RESPONSE,
		MESSAGING_CLAN_GUESTBOOK_POST_REQ,
		MESSAGING_CLAN_GUESTBOOK_GET_REQ,
		MESSAGING_CLAN_GUESTBOOK_GET_RSP,
		MESSAGING_CLAN_GUESTBOOK_DELETE_REQ,
		MESSAGING_CLAN_REQUEST_CLAN_MATCH_SERVER_REQ,
		MESSAGING_CLAN_REQUEST_CLAN_MATCH_SERVER_RSP,
		MESSAGING_CLAN_CLAN_MATCH_CHALLENGE_REQ,
		MESSAGING_CLAN_CLAN_MATCH_CHALLENGE_RSP,
		MESSAGING_CLAN_MESSAGE_SEND_REQ,
		MESSAGING_CLAN_NAMES_RSP,
		MESSAGING_FINAL_ACK_FROM_MATCH_SERVER,
		MESSAGING_MATCH_INVITE_REQ,
		MESSAGING_MATCH_INVITE_RSP,
		MESSAGING_GANG_INVITE_REQUEST,
		MESSAGING_GANG_INVITE_RESPONSE,
		MESSAGING_GANG_REQUEST_PERMISSION_TO_JOIN_SERVER,
		MESSAGING_GANG_RESPONSE_PERMISSION_TO_JOIN_SERVER,
		MESSAGING_INVITE_PROFILE_TO_SERVER,
		MESSAGING_FINAL_INIT_FOR_MATCH_SERVER,
		MESSAGING_REQ_GET_BANNERS_BY_SUPPLIER_ID,
		MESSAGING_RSP_GET_BANNERS_BY_SUPPLIER_ID,
		MESSAGING_REQ_GET_BANNER_BY_HASH,
		MESSAGING_RSP_GET_BANNER_BY_HASH,
		MESSAGING_REQ_ACK_BANNER,
		MESSAGING_RSP_ACK_BANNER,
		MESSAGING_MASSGATE_GENERIC_STATUS_RESPONSE,
		MESSAGING_PLAYER_JOINED_CLAN,
		MESSAGING_SET_STATUS_ONLINE,
		MESSAGING_SET_STATUS_PLAYING,
		MESSAGING_SET_STATUS_OFFLINE,
		MESSAGING_FIND_PROFILE_REQUEST,
		MESSAGING_FIND_PROFILE_RESPONSE,
		MESSAGING_FIND_PROFILE_SEARCH_COMPLETE,
		MESSAGING_FIND_CLAN_REQUEST,
		MESSAGING_FIND_CLAN_RESPONSE,
		MESSAGING_FIND_CLAN_SEARCH_COMPLETE,
		MESSAGING_GET_CLIENT_METRICS,
		MESSAGING_SET_CLIENT_SETTINGS,
		MESSAGING_GET_TOURNAMENT_LISTING,
		MESSAGING_TOURNAMENT_BRIEF_INFO,
		MESSAGING_GET_TOURNAMENT_INFO,
		MESSAGING_TOURNAMENT_FULL_INFO,
		MESSAGING_TOURNAMENT_PARTICIPATION_INFO,
		MESSAGING_TOURNAMENT_UPCOMING_MATCH,
		MESSAGING_TOURNAMENT_APPLY_REQUEST,
		MESSAGING_TOURNAMENT_APPLY_RESPONSE,
		MESSAGING_TOURNAMENT_LEAVE_REQUEST,
		MESSAGING_TOURNAMENT_LEAVE_RESPONSE,
		MESSAGING_TOURNAMENT_UPCOMING_MATCH_INFO_REQ,
		MESSAGING_TOURNAMENT_UPCOMING_MATCH_INFO_RSP,
		MESSAGING_TOURNAMENT_MATCH_SETUP_INFO_REQ,
		MESSAGING_TOURNAMENT_MATCH_SETUP_INFO_RSP,
		MESSAGING_TOURNAMENT_MATCH_LOBBY_READY_PRESSED,
		MESSAGING_STARTUP_SEQUENCE_COMPLETE,
		MESSAGING_CLIENT_REQ_GET_PCC,
		MESSAGING_CLIENT_RSP_GET_PCC,
		MESSAGING_NATNEG_CLIENT_TO_MEDIATING_REQUEST_CONNECT,
		MESSAGING_NATNEG_MEDIATING_TO_CLIENT_REQUEST_CONNECT,
		MESSAGING_NATNEG_CLIENT_TO_MEDIATING_RESPONSE_CONNECT,
		MESSAGING_NATNEG_MEDIATING_TO_CLIENT_RESPONSE_CONNECT,
		MESSAGING_ABUSE_REPORT,
		MESSAGING_OPTIONAL_CONTENT_GET_REQ,
		MESSAGING_OPTIONAL_CONTENT_GET_RSP,
		MESSAGING_OPTIONAL_CONTENT_RETRY_REQ,
		MESSAGING_OPTIONAL_CONTENT_RETRY_RSP,
		MESSAGING_PROFILE_GUESTBOOK_POST_REQ,
		MESSAGING_PROFILE_GUESTBOOK_GET_REQ,
		MESSAGING_PROFILE_GUESTBOOK_GET_RSP,
		MESSAGING_PROFILE_GUESTBOOK_DELETE_REQ,
		MESSAGING_PROFILE_SET_EDITABLES_REQ,
		MESSAGING_PROFILE_GET_EDITABLES_REQ,
		MESSAGING_PROFILE_GET_EDITABLES_RSP,
		MESSAGING_IGNORELIST_ADD_REMOVE_REQ,
		MESSAGING_IGNORELIST_GET_REQ,
		MESSAGING_IGNORELIST_GET_RSP,
		MESSAGING_LIMIT_REACHED,
		MESSAGING_LEFT_NEXTRANK_GET_REQ,
		MESSAGING_LEFT_NEXTRANK_GET_RSP,
		MESSAGING_GET_QUEUE_SPOT_REQ,
		MESSAGING_GET_QUEUE_SPOT_RSP,
		MESSAGING_REMOVE_QUEUE_SPOT_REQ,
		MESSAGING_CLAN_COLOSSEUM_REGISTER_REQ,
		MESSAGING_CLAN_COLOSSEUM_UNREGISTER_REQ,
		MESSAGING_CLAN_COLOSSEUM_GET_REQ,
		MESSAGING_CLAN_COLOSSEUM_GET_RSP,
		MESSAGING_CLAN_COLOSSEUM_GET_FILTER_WEIGHTS_REQ,
		MESSAGING_CLAN_COLOSSEUM_GET_FILTER_WEIGHTS_RSP,
		MESSAGING_SET_RECRUITING_FRIEND_REQ,
		MESSAGING_SET_RECRUITING_FRIEND_RSP,
		MESSAGING_CAN_PLAY_CLANMATCH_REQ,
		MESSAGING_CAN_PLAY_CLANMATCH_RSP,
		MESSAGING_BLACKLIST_MAP_REQ,

		MESSAGING_END,



		MESSAGING_DS_START,

		MESSAGING_DS_SECTION_START,
		MESSAGING_DS_PING,
		MESSAGING_DS_PONG,
		MESSAGING_DS_INVITE_RESERVE_SPOT_FOR_PROFILE,
		MESSAGING_DS_INVITE_RESULT,
		MESSAGING_DS_REQ_GET_PCC,
		MESSAGING_DS_RSP_GET_PCC,
		MESSAGING_DS_SET_METRICS,
		MESSAGING_DS_FINAL_INIT_FOR_MATCH_SERVER,
		MESSAGING_DS_FINAL_ACK_FROM_MATCH_SERVER,
		MESSAGING_DS_INFORM_PLAYER_JOINED,
		MESSAGING_DS_KICK_PLAYER,
		MESSAGING_DS_GET_QUEUE_SPOT_REQ,
		MESSAGING_DS_GET_QUEUE_SPOT_RSP,
		MESSAGING_DS_REMOVE_QUEUE_SPOT_REQ,
		MESSAGING_DS_GET_BANNED_WORDS_REQ,
		MESSAGING_DS_GET_BANNED_WORDS_RSP,
		MESSAGING_DS_REMOVE_MAP_REQ,
		MESSAGING_DS_SECTION_END,

		MESSAGING_DS_END,



		SERVERTRACKER_USER_START,

		SERVERTRACKER_USER_MINIPINGREQUEST,
		SERVERTRACKER_USER_MINIPINGRESPONSE,
		SERVERTRACKER_USER_NO_MORE_SERVER_INFO,
		SERVERTRACKER_USER_NUM_TOTAL_SERVERS,
		SERVERTRACKER_USER_SHORT_SERVER_INFO,
		SERVERTRACKER_USER_COMPLETE_SERVER_INFO,
		SERVERTRACKER_USER_GAME_EXTENDED_INFO_REQUEST,
		SERVERTRACKER_USER_GAME_EXTENDED_INFO_RESPONSE,
		SERVERTRACKER_USER_LIST_SERVERS,
		SERVERTRACKER_USER_GET_SERVER_BY_ID,
		SERVERTRACKER_USER_GET_SERVERS_BY_NAME,
		SERVERTRACKER_USER_JOIN,
		SERVERTRACKER_USER_PART,
		SERVERTRACKER_USER_CYCLE_MAP_LIST_REQ,
		SERVERTRACKER_USER_CYCLE_MAP_LIST_RSP,
		SERVERTRACKER_USER_PLAYER_LADDER_GET_REQ,
		SERVERTRACKER_USER_PLAYER_LADDER_GET_RSP,
		SERVERTRACKER_USER_FRIENDS_LADDER_GET_REQ,
		SERVERTRACKER_USER_FRIENDS_LADDER_GET_RSP,
		SERVERTRACKER_USER_CLAN_LADDER_GET_REQ,
		SERVERTRACKER_USER_CLAN_LADDER_RESULTS_START,
		SERVERTRACKER_USER_CLAN_LADDER_SINGLE_ITEM,
		SERVERTRACKER_USER_CLAN_LADDER_NO_MORE_RESULTS,
		SERVERTRACKER_USER_CLAN_LADDER_TOPTEN_REQ,
		SERVERTRACKER_USER_CLAN_LADDER_TOPTEN_RSP,
		SERVERTRACKER_USER_GET_SERVER_FOR_TOURNAMENT_MATCH,
		SERVERTRACKER_USER_TOURNAMENT_MATCH_SERVER_SHORT_INFO,
		SERVERTRACKER_USER_PLAYER_STATS_REQ,
		SERVERTRACKER_USER_PLAYER_STATS_RSP,
		SERVERTRACKER_USER_PLAYER_MEDALS_REQ,
		SERVERTRACKER_USER_PLAYER_MEDALS_RSP,
		SERVERTRACKER_USER_PLAYER_BADGES_REQ,
		SERVERTRACKER_USER_PLAYER_BADGES_RSP,
		SERVERTRACKER_USER_CLAN_STATS_REQ,
		SERVERTRACKER_USER_CLAN_STATS_RSP,
		SERVERTRACKER_USER_CLAN_MEDALS_REQ,
		SERVERTRACKER_USER_CLAN_MEDALS_RSP,
		SERVERTRACKER_USER_KEEPALIVE_REQ,
		SERVERTRACKER_USER_KEEPALIVE_RSP,
		SERVERTRACKER_USER_CLAN_MATCH_HISTORY_LISTING_REQ,
		SERVERTRACKER_USER_CLAN_MATCH_HISTORY_LISTING_RSP,
		SERVERTRACKER_USER_CLAN_MATCH_HISTORY_DETAILS_REQ,
		SERVERTRACKER_USER_CLAN_MATCH_HISTORY_DETAILS_RSP,

		SERVERTRACKER_USER_END,



		SERVERTRACKER_SERVER_START,

		SERVERTRACKER_SERVER_AUTH_DS_CONNECTION,
		SERVERTRACKER_SERVER_QUIZ_FROM_MASSGATE,
		SERVERTRACKER_SERVER_QUIZ_ANSWERS_TO_MASSGATE,
		SERVERTRACKER_SERVER_QUIZ_FAILED,
		SERVERTRACKER_SERVER_PUBLIC_ID,
		SERVERTRACKER_SERVER_INTERNAL_AUTHTOKEN,
		SERVERTRACKER_SERVER_REPORT_PLAYER_STATS,
		SERVERTRACKER_SERVER_STARTED,
		SERVERTRACKER_SERVER_STOPED,
		SERVERTRACKER_SERVER_STATUS,
		SERVERTRACKER_SERVER_GAME_FINISHED,
		SERVERTRACKER_SERVER_ACK,
		SERVERTRACKER_SERVER_MAP_LIST,
		SERVERTRACKER_SERVER_REPORT_CLAN_STATS,
		SERVERTRACKER_SERVER_CLAN_MATCH_PRELOAD,
		SERVERTRACKER_SERVER_CLAN_MATCH_INFO,
		SERVERTRACKER_SERVER_TOURNAMENT_INFO,
		SERVERTRACKER_SERVER_TOURNAMENT_RESET,
		SERVERTRACKER_SERVER_TOURNAMENT_PENDING,
		SERVERTRACKER_SERVER_TOURNAMENT_LOAD_MAP_COMPLETE,
		SERVERTRACKER_SERVER_TOURNAMENT_LOAD_MAP_FAILED,
		SERVERTRACKER_SERVER_TOURNAMENT_REPORT_STATS,
		SERVERTRACKER_SERVER_LOG_CHAT,
		SERVERTRACKER_SERVER_CHANGE_RANKING_REQ,
		SERVERTRACKER_SERVER_CHANGE_RANKING_RSP,

		SERVERTRACKER_SERVER_END,



		CHAT_START,

		CHAT_DENIED,
		CHAT_DENIED_ROOM_FULL,
		CHAT_DENIED_ROOM_PASSWORD_WRONG,
		CHAT_DENIED_COULD_NOT_JOIN_ROOM,
		CHAT_REAL_JOIN_REQ,
		CHAT_REAL_JOIN_RSP,
		CHAT_LEAVE_ROOM_REQ,
		CHAT_SEND_MESSAGE_REQ,
		CHAT_LIST_ROOMS_REQ,
		CHAT_ROOM_INFO_RSP,
		CHAT_NO_MORE_ROOMS_IN_LIST,
		CHAT_USER_CHAT_MESSAGE,
		CHAT_USER_LEFT,
		CHAT_USER_IN_ROOM,

		CHAT_END,



		// nat neg is somewhat special, there can be more than one connection here 
		NATNEG_START,

		NATNEG_CLIENT_TO_RELAYING_REQUEST_REGISTER,
		NATNEG_RELAYING_TO_SERVER_RESPONSE_REGISTER,
		NATNEG_CLIENT_TO_RELAYING_REQUEST_CONNECT_TO_PEER,
		NATNEG_RELAYING_TO_CLIENT_RESPONSE_CONNECT_TO_PEER,
		NATNEG_COOKIE,
		NATNEG_PING,
		NATNEG_PONG,
		NATNEG_DATA,

		NATNEG_END,



		// Post-Ubisoft
		CUSTOM_START,
		CUSTOM_SERVERTRACKER_TIME_CRITICAL_PING,
		CUSTOM_SERVERTRACKER_TIME_CRITICAL_PONG,
		CUSTOM_SERVERTRACKER_MOD_DATA_DOWNLOAD_REQ,
		CUSTOM_SERVERTRACKER_MOD_DATA_DOWNLOAD_RSP,
		CUSTOM_END,
	};
}