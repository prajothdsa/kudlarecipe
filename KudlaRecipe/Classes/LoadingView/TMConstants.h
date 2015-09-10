//
//  TMConstants.h
//  TeleMedicine
//
//  Created by Ashwin Kumar on 3/4/15.
//  Copyright (c) 2015 com.techendeavour.telemedicine. All rights reserved.
//
#import "AppDelegate.h"
#import "PopUpUtility.h"

#define APP_DELEGATE  (AppDelegate *)[[UIApplication sharedApplication] delegate]

#define kApplicationTimeoutInMinutes                        15
#define kApplicationDidTimeoutNotification                  @"AppTimeOut"
#define kLastTapDate                                        @"kLastTapDate"
#define kUserLocked                                         @"kUserLocked"
#define kRecieverDeletedORLocked                            @"kRecieverDeletedORLocked"
#define kResource                                           @"iPhoneiPad"

#ifdef CAREPROVIDER
#define StoryBoardName          @"CareProviderHomeScreen"
#define ViewControllerIDName    @"CareProviderList"
#define TYPE_OF_APP             @"3"
#else
#define StoryBoardName          @"PatientHomeScreen"
#define ViewControllerIDName    @"CareProviderList"
#define TYPE_OF_APP             @"2"
#endif

//-------------------------- Web Service Names-------------------------------
#define kRegisterRedemptionCode         @"registerRedemptioncode"
#define kGetUserProfile                 @"getUserProfile"
#define kGetCustomMessage               @"getCustomStatusMessage"
#define kUpdateUserStatusMessage        @"updateUserStatusMessage"
#define kGetHelpLineNumbers             @"getHelpLineNumber"
#define kGetLockedUsers                 @"getLockedUsers"
#define kGetInactiveUsers            @"getInactiveUsers"
#define kGetRetentionTime               @"getRetentionTime"
#define kMediaUploadService             @"imageupload"
#define kgetListofNotifications         @"getListofNotifications"
#define kMarkNotifAsReadInServer        @"updateusernotificationreadstatus"
#define kDeleteNotifications            @"deleteNotification"
#define kGetLockedAndInactiveNotif      @"getLockedAndInactiveNotif"
#define kUploadDeviceToken              @"userDeviceRegistration"
#define kUpdateUnreadMsgCount           @"updateUnreadMessageCount"
#define kUserLockedStatus               @"getUserDetails"
#define kForwardChat                    @"insertChatMessage"
#define kGetForwardChat                 @"getForwardMessage"
#define kUpdateUserprofile              @"updateUserprofile"
#define kInsertDeleteUserStatusMessage  @"insertDeleteUserStatusMessage"
#define kGetOthersProfileDetails        @"getOthersProfileDetails"
#define kInsertUpdateUserNote           @"insertUpdateUserNote"
#define kGetLastChatMessage             @"getLastChatMessage"
#define kGetChatMessage                 @"getChatMessage"


#define kRedemptionCode             @"redemptioncode"
#define kTypeOfApp                  @"typeOfApp"
#define kRefUserId                  @"refUserId"
#define kRefeUserID                 @"refUserID"
#define kBasePath                   @"basepath"
#define kTotalUnreadCount           @"unreadMessageCount"
#define kIsPasscodeCreated          @"isPasscodeCreated"
#define kIsRedemptionSuccess        @"isRedemptionSuccess"
#define kIsFirstTimeLogin           @"isFirstTimeLogin"
#define kKeychainIdentifier         @"teleMedicine"
#define kKeychainPasswordIdentifier @"teleMedicine-Password"
#define kProfilePicPath             @"myPic.png"
#define kDefaultProfilePic          @"dr_default_img"
#define kDefaultContactImage        @"default_contact_img"
#define kLoggedUserID               @"LoggedUserID"
#define kLoggerUserImgUrl           @"loggedUserImage"
#define kCurrentUserName            @"currentUserName"
#define kDeviceToken                        @"deviceToken"
#define kRetentionTimeDuration              @"retentionTimeDuration"
#define kUserId                             @"userId"
#define kForwardMessageId                   @"forwardMessageId"
#define kLockedStatus                       @"kLockedStatus"
#define kUserJID                            @"userJID"
#define kisToggleSetToAvailable             @"isToggleSetToAvailable"
#define kRedemptionCodeFromLaunchLink       @"redemptionCodeFromLaunchLink"
#define kTermsAndConditionsAccepted         @"termsAndConditionsAccepted"

#define RECIVER_JID                         @"toJID"
#define SENDER_JID                          @"fromJID"
#define FORWARD_JID                         @"forwardJID"
#define MESSAGE_DATE                        @"date"
#define MESSAGE_CONTENT                     @"message"
#define IS_SENT                             @"messageSent"
#define MESSAGE_TYPE                        @"messageType"
#define CHAT_RECORDS                        @"records"
#define kSessionTimeOut                     @"sessionTimeOut"
#define kProfilePicUpload                   @"ProfilePicUpload"
#define ktotalUnreadNotification            @"totalUnreadNotification"
#define kLastNotificationID                 @"notification_Id"
#define kReadNotificationID                 @"notificationId"

//---------------------------- Push Notification Keys ---------------------
#define Payload_Aps                     @"aps"
#define Payload_ContentAvailable        @"content-available"
#define Payload_Badge                   @"badge"
#define Payload_Alert                   @"alert"
#define Payload_Lock                    @"Lock"
#define Payload_Lock_Y                  @"Y"
#define Payload_User_Locked             @"LockedUser"
#define Payload_User_UnLocked           @"UnLockedUser"
#define Payload_User_Active             @"ActiveUser"
#define Payload_RetentionTime           @"RetentionTime"
#define Payload_Notification            @"Notification"
#define Payload_AdminNotification       @"AdminNotification"
#define Roaster_Synch                   @"Refresh"
#define Payload_ChatMsgNotification     @"ChatMessage"

//-------------------------- WebService Keys -------------------------------
#define kMediaUploadFileName        @"fileName"
#define kMediaUploadFromJID         @"fromJID"
#define kMediaUploadToJID           @"toJID"
#define kMediaUploadImage           @"image"


//-------------------------- Folder Names-------------------------------

#define kChatReceivedFiles          @"goto2AHCReceivedFiles"
#define kChatSentFiles              @"goto2AHCSentFiles"

//-------------------------- File Names---------------------------------
#define kTermsAndConditions         @"TermsAndConditions"
#define kDocx                       @"docx"
#define kWebViewInnerText           @"document.documentElement.innerText"

//-------------------------- XMPP DICT KEYS-------------------------------
#define kProfileImg                 @"profileImg"
#define kRosterID                   @"rosterID"

//-------------------------- NOTIFICATION NAMES -------------------------------
#define kProfilePicUpdateNotification               @"profilePicUpdateNotification"
#define kFriendProfilePicUpdateNotification         @"FriendProfilePicUpdateNotification"
#define kRefreshTotalUnreadCountNotification        @"refreshTotalUnreadCount"
#define kDeleteUserNotification                     @"kDeleteUserNotification"
#define kUnreadNotificationNotification             @"kUnreadNotificationNotification"
#define kUpdateUnreadMessageCount                   @"kUpdateUnreadMessageCount"
#define kReachabilityChangedNotification            @"kNetworkReachabilityChangedNotification"

#define kUnavailable @"unavailable"

/*Available/Not Available Images*/
#define kAvailable                                  @"available"
#define kNotAvailable                               @"notAvailable"

/*Available/Not Available Texts*/
#define kAvailableText                              @"Available"
#define kNotAvailableText                           @"Not Available"

#define kTextChat @"TextChat"
#define kImageChat @"ImageChat"

#define kChatID @"chatID"

#define kEMCColor_Clear_Color                        [UIColor clearColor]
#define kEMCColor_ffffff  [UIColor whiteColor]
#define kLoading                         @"Loading"
#define kLoadingContacts                 @"Loading contacts..."
#define kNSAssertDesc                    @"NSAssertDesc"

//--------------------------Device Type Constants-------------------------------
#define kApexDeviceTypeIphone               [[UIDevice currentDevice]userInterfaceIdiom]==UIUserInterfaceIdiomPhone
#define kApexDeviceTypeIpad                 [[UIDevice currentDevice]userInterfaceIdiom]==UIUserInterfaceIdiomPad
#define IS_IPHONE                           (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE_5                         (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0)
#define IS_IPHONE_6                         (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0)
#define IS_IPHONE_6_PLUS                    (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)
#define IS_IOS_8_OR_LATER                   ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define IS_STANDARD_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0  && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale == [UIScreen mainScreen].scale)
#define IS_ZOOMED_IPHONE_6 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0 && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale > [UIScreen mainScreen].scale)
#define IS_STANDARD_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0)
#define IS_ZOOMED_IPHONE_6_PLUS (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0 && IS_IOS_8_OR_LATER && [UIScreen mainScreen].nativeScale < [UIScreen mainScreen].scale)


#define kApexDeviceOrientationIsPortrait    [TMUtilities deviceOrientationIsPortrait:([[UIApplication sharedApplication] statusBarOrientation])]
#define kApexDeviceOrientationIsLandscape   [TMUtilities deviceOrientationIsLandscape:([[UIApplication sharedApplication] statusBarOrientation])]

//------------------------ Custom keyboard screen --------------------------//
#define kCustomKeyboardBackSpacePortrait            @"backspace"
#define kCustomKeyboardExitButton                   @"back"

#define kColorWithRGB_255_255_255   [UIColor colorWithRed:255.0f/255 green:255.0f/255 blue:255.0f/255 alpha:1]
#define kColorOfBorderColor       [UIColor colorWithRed:239.0f/255 green:240.0f/255 blue:242.0f/255 alpha:1]

// Fonts
#define kHelveticaRegularFontName                   @"Helvetica-Regular"
#define kSPECIAL_CHAR                               @"}"
#define HELVETICA_NAME                              @"Helvetica"
#define HELVETICA_BOLD_NAME                         @"Helvetica Bold"
#define HELVETICA_REGULAR                           @"Helvetica Regular"

#define MESSAGE                                     @"Message"
#define EMPTY_STR                                   @""
#define INVALID_USER_ID                             @"InvalidUserID"
#define SERVER_ERROR                                @"ServerError"
#define NOTIFICATION_DELETE_TITLE                   @"DeleteNotificationTitle"
#define NOTIFICATION_DELETE_MESSAGE                 @"DeleteNotificationMessage"
#define CANCEL_REQ                                  @"Cancel"
#define DELETE_REQ                                  @"Delete"
#define NOTIFICATION_ID                             @"notificationId"
#define NOTIFICATION_TITLE                          @"title"
#define CARE_PROVIDER_BAR_TITLE                     @"Care Providers"
#define NOTIFICATION_CONTENT                        @"content"
#define NOTIFICATION_DATE                           @"date"
#define NOTIFICATION_STATUS                         @"statusValue"
#define LIST_OF_NOTIFICATION                        @"listofNotifications"
#define USER_DEFAULT                                [NSUserDefaults standardUserDefaults]
#define NOINTERNET                                  @"NoNetworkError"
#define CHAT_SORT_KEY                               @"messageID"
#define NO_RESULTES                                 @"NoResults"
#define NO_RECENT_CHAT                              @"NoRecentChats"
#define NO_CONTACTS                                 @"NoContacts"
#define RECIEVED_NEW_MSG                            @"ReciviedNewMsg"
#define NO_NOTIFICATION                             @"NoNotification"
#define NOTES_MAX_CHARS                             @"NotesMaxChars"
#define SHOW_FULL_PHOTO                             @"showFullViewPhoto"
#define FAIL_TO_UPLOAD_MEDIA_FILE                   @"FailToUploadMediaFile"
#define FORWARD_CHAT                                @"View Forward Chat"
#define FOR_CHAT_TO_SAME_USER                       @"ForwardChatToSameUser"
#define USER_LOGGED_IN                              @"USER_LOGGED_IN"
#define THUMBNAIL_SIZE                                  200
#define NOTIFICATION_LOCK                           @"NotificationForLock"
#define NOTIFICATION_UNLOCK                         @"NotificationForUnLock"
#define NOTIFICATION_LOCK_MSG                       @"NotificationForLockMessage"
#define NOTIFICATION_UNLOCK_MSG                     @"NotificationForUNLockMessage"
#define OK_BUTTON_TITLE                             @"OK_BUTTON_TITLE"
#define LOCKED                                      @"locked"
#define LOCKED_USERS                                @"lockedUsers"
#define INACTIVE_USERS                              @"inActiveUserIds"
#define FORWARD_CHAT_FAIL                           @"ForwardChatFail"
#define FORWARD_CHAT_YES                            @"Yes"
#define FORWARD_CHAT_NO                             @"No"

#define FORWARD_CHAT_TITLE                          @"FowardChat"
#define FORWARD_CHAT_MESSAGE                        @"FowardChatMessage"
#define dateNotmatch                                @"dateMismatch"

#define SESSION_TIME_OUT                            @"SessionTimeOut"
#define SESSION_TIME_OUT_MSG                        @"SessionTimeOutMessage"

#define NO_CAMERA_PERMISSION                        @"NoCameraPermission"

#define CHAT_ROASTER_DELETED                        @"ChatRoasterDeleted"
#define CHAT_ROASTER_DELETED_MSG                    @"ChatRoasterDeletedMessage"
#define CHAT_ROASTER_LOCKED                         @"ChatRoasterLocked"
#define CHAT_ROASTER_LOCKED_MSG                     @"ChatRoasterLockedMessage"

#define YOU_ARE_NOT_AVAILABLE_MSG                   @"YouAreNotAvailable"

#define VALID_STRING(val) \
((val != nil) && (val.length != 0))) ? val : @""



//RGB color macro
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


#define TITLE_COLOR                 UIColorFromRGB(0x414042)
#define DATE_COLOR                 UIColorFromRGB(0x083A5D)
#define LIGHTH_BLUE_COLOR           UIColorFromRGB(0x21B0EA)
#define CONTENT_COLOR               UIColorFromRGB(0x2C2D31)
#define NAV_BG_COLOR                UIColorFromRGB(0x888888)
#define LIGHT_GRAY_COLOR            UIColorFromRGB(0x6E6E6E)
#define OFFLINE_STATUS_COLOR        UIColorFromRGB(0xD9312E)
#define PROFILE_BORDER_COLOR        UIColorFromRGB(0xAAACAF)

#define NOTIFICATION_READ_COLOR     UIColorFromRGB(0xCDCDCD)
#define NOTIFICATION_UNREAD_COLOR   UIColorFromRGB(0x209FEE)

#define DETAILTITLE_FONT      kApexDeviceTypeIpad ? 18 : 18
#define CONTENT_FONT    kApexDeviceTypeIpad ? 12 : 12
#define DATE_FONT    kApexDeviceTypeIpad ? 13 : 13
#define LIST_TITLE_FONT      kApexDeviceTypeIpad ? 14 : 14

#define BOLD_FONT(fontSize)     [UIFont fontWithName:@"Helvetica Bold" size:fontSize]
#define NORMAL_FONT(fontSize)   [UIFont fontWithName:@"Helvetica" size:fontSize]
#define GRAY_BUBLE              @"greyBubble"
#define BLUE_BUBLE              @"blueBubble"
#define SINGLE_TICK_GREY        @"SingleTickGrey"
#define DOUBLE_TICK_GREY        @"DoubleTickGrey"
#define DOUBLE_TICK_GREEN       @"DoubleTickGreen"


//------------------------ Userprofile Info ------------------------------------//
#define kGreyColor      [UIColor colorWithRed:207.0f/255.0f green:207.0f/255.0f blue:207.0f/255.0f alpha:1]
#define kBlueTitileColor   [UIColor colorWithRed:33.0f/255.0f green:176.0f/255.0f blue:234.0f/255.0f alpha:1]
#define kGreyTitleColor     [UIColor colorWithRed:91.0f/255.0f green:91.0f/255.0f blue:91.0f/255.0f alpha:1]
#define kNoteBorderColor    [UIColor colorWithRed:175.0f/255.0f green:175.0f/255.0f blue:175.0f/255.0f alpha:1]

//------------------------ Userprofile Info Backup Keys ------------------------------------//
#define kBackupFirstName            @"BackupFirstName"
#define kBackupLastName             @"BackupLastName"
#define kBackupStatusMessage        @"BackupStatusMessage"
#define kBackupStatus               @"BackupStatus"
#define kBackupPhoneNumber          @"BackupPhoneNo"
#define kBackupEmailID              @"BackupEmail"
#define kBackupUserID               @"BackupUserID"
#define kBackupProfilePicPath       @"BackupProfilePicPath"

//------------------------ Custom Cell Identifiers ------------------------------------//
#define HISTORYLIST_CELL                @"HistoryListCell"
#define HELPDESK_CELL_IDENTIFIER        @"helpDeskCell"
#define CHAT_LIST_CELL                  @"chatListCell"
#define CUSTOM_CONTACT_LIST_CELL_ID     @"customContactListCell"

#define PINGTONE                                    @"pingTone"
#define PINGTONE_FORMAT                             @"caf"
#define SEARCH_BAR_PLACEHOLDER                      @"Search"
#define TEXT_IMAGE                                  @"image"
#define TEXT_FORWARD_CHAT                           @"Forward Chat"

//------------------------ Emergency Screen ------------------------------------//
#define TELPROMPT_TEXT                              @"telprompt:"
#define HELPDESK_NUMBER_LABEL                       @"HelpDeskLineText"
#define ERROR_ALERT_TITLE                           @"ErrorTitle"
#define CALLING_TEXT                                @"CallingMsg"
#define NO_CALL_MSG                                 @"noCallMsg"

#define EMAIL_NOT_CONFIGURED_ERROR                  @"EmailNotConfiguredMessage"
#define EMAIL_SUBJECT                               @"EmailSubject"

#define JUST_TOOK_A_SCREENSHOT_MSG                  @"just took a screenshot!"
#define SCREENSHOT_ALERT_TITLE                      @"Screenshot"

#define sendFileNetowrkError                        @"sendFileNetworkError"
#define ENTER_PASSCODE_ALERT_MESSAGE                @"EnterPasscode"
#define WRONG_PASSCODE_ALERT_MESSAGE                @"WrongPasscode"
#define PASSCODE_CHAR                               @"*"
#define SERVER_ERROR                                @"ServerError"
#define NO_DATA_FOUND_ERROR                         @"NoDataFoundError"
#define INVALID_REDEMPTION_ERROR                    @"InvalidRedemptionCodeError"
#define INVALID_REDEMPTION_SERVER_ERORR             @"RedemptionServerError"
#define NO_REDEMPTION_CODE                          @"NoRedemptionCode"
#define NO_CAMERA                                   @"NoCamera"
#define NO_PHOTOS                                   @"NoPhotos"
#define PASSCODE_MISMATCH_ERROR                     @"PasscodeMisMatch"
#define MINIMUM_PIN_ERROR                           @"MinimumPinError"
#define WRONG_PASSCODE                              @"WrongPasscode"

#define INVALID_CODE                                @"InvalidCode"
#define INVALID_APPLICAITON_ACESS                   @"InvalidApplicationAccess"
#define USER_LOCKED                                 @"UserLocked"

#define COULD_NOT_LOAD_CONTACTS                     @"CouldNotLoadContacts"

//------------------------ Storyboard Names ------------------------------------//
#define REGISTRATION_STORYBOARD_NAME                @"Registration"
#define HISTORY_STORYBOARD_NAME                     @"History"
#define CHAT_WINDOW_STORYBOARD_NAME                 @"ChatWindow"
#define CONTACT_USER_PROFILE_STORYBOARD_NAME        @"ContactUserProfile"

//------------------------ Storyboard View Names ------------------------------------//
#define CREATE_PASSCODE_VIEW                        @"createPasscodeView"
#define CONFIRM_PASSCODE_VIEW                       @"confirmPasscodeView"
#define HISTORY_PASSCODE_VIEW                       @"historyPinView"
#define CHAT_VIEW                                   @"chatView"
#define PROFILE_VIEW                                @"profileView"
#define VOICE_RECORDING_VIEW                        @"voiceRecordingView"
#define LOGIN_VIEW                                  @"loginView"
#define HISTORY_VIEW                                @"historyView"
#define USER_PROFILE_VIEW                           @"userProfileView"
#define REDEMPTION_VIEW                             @"redemptionView"
#define EMERGENCY_VIEW                              @"emergencyView"
#define STATUS_VIEW                                 @"statusView"
#define TERMS_AND_CONDITIONS_VIEW                   @"termsView"














