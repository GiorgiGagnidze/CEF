// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_PROFILES_PROFILE_METRICS_H_
#define CHROME_BROWSER_PROFILES_PROFILE_METRICS_H_

#include <stddef.h>
#include <string>

#include "base/time/time.h"
#include "build/build_config.h"
#include "components/signin/core/browser/signin_header_helper.h"

class Profile;
class ProfileManager;

namespace base {
class FilePath;
}

namespace profile_metrics {
struct Counts;
}

class ProfileMetrics {
 public:

  // Enum for counting the ways users were added.
  enum ProfileAdd {
    ADD_NEW_USER_ICON = 0,      // User adds new user from icon menu
    ADD_NEW_USER_MENU,          // User adds new user from menu bar
    ADD_NEW_USER_DIALOG,        // User adds new user from create-profile dialog
    ADD_NEW_USER_MANAGER,       // User adds new user from User Manager
    ADD_NEW_USER_LAST_DELETED,  // Auto-created after deleting last user
    NUM_PROFILE_ADD_METRICS
  };

  enum ProfileDelete {
    // Delete profile from settings page.
    DELETE_PROFILE_SETTINGS = 0,
    // Delete profile from User Manager.
    DELETE_PROFILE_USER_MANAGER,
    // Show the delete profile warning in the User Manager.
    DELETE_PROFILE_USER_MANAGER_SHOW_WARNING,
    // Show the delete profile warning in the Settings page.
    DELETE_PROFILE_SETTINGS_SHOW_WARNING,
    NUM_DELETE_PROFILE_METRICS
  };

  // Enum for counting the ways user profiles and menus were opened.
  enum ProfileOpen {
    NTP_AVATAR_BUBBLE = 0,   // User opens avatar menu from NTP
    ICON_AVATAR_BUBBLE,      // User opens the avatar menu from button
    SWITCH_PROFILE_ICON,     // User switches profiles from icon menu
    SWITCH_PROFILE_MENU,     // User switches profiles from menu bar
    SWITCH_PROFILE_DOCK,     // User switches profiles from dock (Mac-only)
    OPEN_USER_MANAGER,       // User opens the User Manager
    SWITCH_PROFILE_MANAGER,  // User switches profiles from the User Manager
    SWITCH_PROFILE_UNLOCK,   // User switches to locked profile via User Manager
    SWITCH_PROFILE_GUEST,    // User switches to guest profile
    SWITCH_PROFILE_CONTEXT_MENU,  // User switches profiles from context menu
    NUM_PROFILE_OPEN_METRICS
  };

  // Enum for getting net counts for adding and deleting users.
  enum ProfileNetUserCounts {
    ADD_NEW_USER = 0,         // Total count of add new user
    PROFILE_DELETED,          // User deleted a profile
    NUM_PROFILE_NET_METRICS
  };

  // Sign in is logged once the user has entered their GAIA information.
  // The options for sync are logged after the user has submitted the options
  // form. See sync_setup_handler.h.
  enum ProfileSync {
    SYNC_CUSTOMIZE = 0,       // User decided to customize sync
    SYNC_CHOOSE,              // User chose what to sync
    SYNC_ENCRYPT,             // User has chosen to encrypt all data
    SYNC_PASSPHRASE,          // User is using a passphrase
    NUM_PROFILE_SYNC_METRICS
  };

  enum ProfileType {
    ORIGINAL = 0,             // Refers to the original/default profile
    SECONDARY,                // Refers to a user-created profile
    NUM_PROFILE_TYPE_METRICS
  };

  enum ProfileGaia {
    GAIA_OPT_IN = 0,          // User changed to GAIA photo as avatar
    GAIA_OPT_OUT,             // User changed to not use GAIA photo as avatar
    NUM_PROFILE_GAIA_METRICS
  };

  enum ProfileAuth {
    AUTH_UNNECESSARY,     // Profile was not locked
    AUTH_LOCAL,           // Profile was authenticated locally
    AUTH_ONLINE,          // Profile was authenticated on-line
    AUTH_FAILED,          // Profile failed authentication
    AUTH_FAILED_OFFLINE,  // Profile failed authentication and was offline
    NUM_PROFILE_AUTH_METRICS
  };

  // Enum for tracking user interactions with the user menu and user manager.
  // Interactions initiated from the content area are logged into a different
  // histogram from those that were initiated from the avatar button.
  // An example of the interaction beginning in the content area is
  // clicking "Manage Accounts" within account selection on a Google property.
  enum ProfileDesktopMenu {
    // User opened the user menu, and clicked lock.
    PROFILE_DESKTOP_MENU_LOCK = 0,
    // User opened the user menu, and removed an account.
    PROFILE_DESKTOP_MENU_REMOVE_ACCT,
    // User opened the user menu, and started adding an account.
    PROFILE_DESKTOP_MENU_ADD_ACCT,
    // User opened the user menu, and changed the profile name.
    PROFILE_DESKTOP_MENU_EDIT_NAME,
    // User opened the user menu, and started selecting a new profile image.
    PROFILE_DESKTOP_MENU_EDIT_IMAGE,
    // User opened the user menu, and opened the user manager.
    PROFILE_DESKTOP_MENU_OPEN_USER_MANAGER,
    // User opened the user menu, and selected Go Incognito.
    PROFILE_DESKTOP_MENU_GO_INCOGNITO,
    NUM_PROFILE_DESKTOP_MENU_METRICS,
  };

#if defined(OS_ANDROID)
  // Enum for tracking user interactions with the account management menu
  // on Android.
  //
  // A Java counterpart will be generated for this enum.
  // GENERATED_JAVA_ENUM_PACKAGE: org.chromium.chrome.browser.profiles
  // GENERATED_JAVA_CLASS_NAME_OVERRIDE: ProfileAccountManagementMetrics
  // GENERATED_JAVA_PREFIX_TO_STRIP: PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_
  enum ProfileAndroidAccountManagementMenu {
    // User arrived at the Account management screen.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_VIEW = 0,
    // User arrived at the Account management screen, and clicked Add account.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_ADD_ACCOUNT = 1,
    // User arrived at the Account management screen, and clicked Go incognito.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_GO_INCOGNITO = 2,
    // User arrived at the Account management screen, and clicked on primary.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_CLICK_PRIMARY_ACCOUNT = 3,
    // User arrived at the Account management screen, and clicked on secondary.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_CLICK_SECONDARY_ACCOUNT = 4,
    // User arrived at the Account management screen, toggled Chrome signout.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_TOGGLE_SIGNOUT = 5,
    // User toggled Chrome signout, and clicked Signout.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_SIGNOUT_SIGNOUT = 6,
    // User toggled Chrome signout, and clicked Cancel.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_SIGNOUT_CANCEL = 7,
    // User arrived at the android Account management screen directly from some
    // Gaia requests.
    PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_DIRECT_ADD_ACCOUNT = 8,
    NUM_PROFILE_ANDROID_ACCOUNT_MANAGEMENT_MENU_METRICS,
  };
#endif  // defined(OS_ANDROID)

  // Enum for tracking user interactions with the 'Not You?' bubble that users
  // can navigate to from the Upgrade bubble after upgrade.
  enum ProfileNewAvatarMenuNotYou {
    // User views the 'Not You?' bubble.
    PROFILE_AVATAR_MENU_NOT_YOU_VIEW = 0,
    // User selects back from within the 'Not You?' bubble.
    PROFILE_AVATAR_MENU_NOT_YOU_BACK,
    // User adds a person from within the 'Not You?' bubble.
    PROFILE_AVATAR_MENU_NOT_YOU_ADD_PERSON,
    // User chooses to disconnect (sign out) from within the 'Not You?' bubble.
    PROFILE_AVATAR_MENU_NOT_YOU_DISCONNECT,
    NUM_PROFILE_AVATAR_MENU_NOT_YOU_METRICS,
  };

  // Enum for tracking user interactions with the signin bubble that appears
  // in the New Avatar Menu after using the Inline Signin flow.
  enum ProfileNewAvatarMenuSignin {
    // User viewed the signin bubble after successfully using the inline signin.
    PROFILE_AVATAR_MENU_SIGNIN_VIEW = 0,
    // User selected ok to dismiss the signin bubble.
    PROFILE_AVATAR_MENU_SIGNIN_OK,
    // User opened the settings from the signin bubble.
    PROFILE_AVATAR_MENU_SIGNIN_SETTINGS,
    NUM_PROFILE_AVATAR_MENU_SIGNIN_METRICS,
  };

  // Enum for tracking user interactions with the bubble that appears for all
  // users in the new avatar menu after upgrading.
  enum ProfileNewAvatarMenuUpgrade {
    // User views the upgrade bubble.
    PROFILE_AVATAR_MENU_UPGRADE_VIEW = 0,
    // User dismissed the upgrade bubble.
    PROFILE_AVATAR_MENU_UPGRADE_DISMISS,
    // User selects 'What's New' in the upgrade bubble.
    PROFILE_AVATAR_MENU_UPGRADE_WHATS_NEW,
    // User selects 'Not You?' in the upgrade bubble.
    PROFILE_AVATAR_MENU_UPGRADE_NOT_YOU,
    NUM_PROFILE_AVATAR_MENU_UPGRADE_METRICS,
  };

  static void UpdateReportedProfilesStatistics(ProfileManager* manager);
  // Count and return summary information about the profiles currently in the
  // |manager|. This information is returned in the output variable |counts|.
  static bool CountProfileInformation(ProfileManager* manager,
                                      profile_metrics::Counts* counts);

#if !defined(OS_ANDROID) && !defined(OS_IOS)
  static void LogNumberOfProfileSwitches();
#endif

#if defined(OS_WIN) || defined(OS_MACOSX)
  // Update OS level tracking of profile counts.
  static void UpdateReportedOSProfileStatistics(size_t active, size_t signedin);
#endif

  static void LogNumberOfProfiles(ProfileManager* manager);
  static void LogProfileAddNewUser(ProfileAdd metric);
  static void LogProfileAvatarSelection(size_t icon_index);
  static void LogProfileDeleteUser(ProfileDelete metric);
  static void LogProfileOpenMethod(ProfileOpen metric);
#if !defined(OS_ANDROID) && !defined(OS_IOS)
  static void LogProfileSwitch(ProfileOpen metric,
                               ProfileManager* manager,
                               const base::FilePath& profile_path);
#endif
  static void LogProfileSwitchGaia(ProfileGaia metric);
  static void LogProfileSyncInfo(ProfileSync metric);
  static void LogProfileAuthResult(ProfileAuth metric);
  static void LogProfileDesktopMenu(ProfileDesktopMenu metric,
                                    signin::GAIAServiceType gaia_service);
  static void LogProfileDelete(bool profile_was_signed_in);
  static void LogProfileNewAvatarMenuNotYou(ProfileNewAvatarMenuNotYou metric);
  static void LogProfileNewAvatarMenuSignin(ProfileNewAvatarMenuSignin metric);
  static void LogProfileNewAvatarMenuUpgrade(
      ProfileNewAvatarMenuUpgrade metric);
  static void LogTimeToOpenUserManager(const base::TimeDelta& time_to_open);

#if defined(OS_ANDROID)
  static void LogProfileAndroidAccountManagementMenu(
      ProfileAndroidAccountManagementMenu metric,
      signin::GAIAServiceType gaia_service);
#endif  // defined(OS_ANDROID)

  // These functions should only be called on the UI thread because they hook
  // into g_browser_process through a helper function.
  static void LogProfileLaunch(Profile* profile);
  static void LogProfileSyncSignIn(const base::FilePath& profile_path);
  static void LogProfileUpdate(const base::FilePath& profile_path);
};


#endif  // CHROME_BROWSER_PROFILES_PROFILE_METRICS_H_
