#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("YesBridge", "Overview"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Send"),
QT_TRANSLATE_NOOP("YesBridge", "Receive"),
QT_TRANSLATE_NOOP("YesBridge", "Transactions"),
QT_TRANSLATE_NOOP("YesBridge", "Address Book"),
QT_TRANSLATE_NOOP("YesBridge", "Chat"),
QT_TRANSLATE_NOOP("YesBridge", "Notifications"),
QT_TRANSLATE_NOOP("YesBridge", "Options"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("YesBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Advanced"),
QT_TRANSLATE_NOOP("YesBridge", "Backup"),
QT_TRANSLATE_NOOP("YesBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("YesBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Tools"),
QT_TRANSLATE_NOOP("YesBridge", "Chain Data"),
QT_TRANSLATE_NOOP("YesBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("YesBridge", "Sign Message"),
QT_TRANSLATE_NOOP("YesBridge", "Verify Message"),
QT_TRANSLATE_NOOP("YesBridge", "Debug"),
QT_TRANSLATE_NOOP("YesBridge", "About Yes"),
QT_TRANSLATE_NOOP("YesBridge", "About QT"),
QT_TRANSLATE_NOOP("YesBridge", "QR code"),
QT_TRANSLATE_NOOP("YesBridge", "Address:"),
QT_TRANSLATE_NOOP("YesBridge", "Label:"),
QT_TRANSLATE_NOOP("YesBridge", "Narration:"),
QT_TRANSLATE_NOOP("YesBridge", "Amount:"),
QT_TRANSLATE_NOOP("YesBridge", "YES"),
QT_TRANSLATE_NOOP("YesBridge", "mYES"),
QT_TRANSLATE_NOOP("YesBridge", "µYES"),
QT_TRANSLATE_NOOP("YesBridge", "Yesshi"),
QT_TRANSLATE_NOOP("YesBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("YesBridge", "Normal"),
QT_TRANSLATE_NOOP("YesBridge", "Stealth"),
QT_TRANSLATE_NOOP("YesBridge", "BIP32"),
QT_TRANSLATE_NOOP("YesBridge", "Add Address"),
QT_TRANSLATE_NOOP("YesBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("YesBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("YesBridge", "Address Type"),
QT_TRANSLATE_NOOP("YesBridge", "Group"),
QT_TRANSLATE_NOOP("YesBridge", "Label"),
QT_TRANSLATE_NOOP("YesBridge", "Address"),
QT_TRANSLATE_NOOP("YesBridge", "Public Key"),
QT_TRANSLATE_NOOP("YesBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("YesBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("YesBridge", "Market"),
QT_TRANSLATE_NOOP("YesBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("YesBridge", "Coin Control"),
QT_TRANSLATE_NOOP("YesBridge", "Make payment"),
QT_TRANSLATE_NOOP("YesBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("YesBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("YesBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("YesBridge", "Quantity:"),
QT_TRANSLATE_NOOP("YesBridge", "Fee:"),
QT_TRANSLATE_NOOP("YesBridge", "After Fee:"),
QT_TRANSLATE_NOOP("YesBridge", "Bytes:"),
QT_TRANSLATE_NOOP("YesBridge", "Priority:"),
QT_TRANSLATE_NOOP("YesBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("YesBridge", "Change:"),
QT_TRANSLATE_NOOP("YesBridge", "Custom change address"),
QT_TRANSLATE_NOOP("YesBridge", "From account"),
QT_TRANSLATE_NOOP("YesBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("YesBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("YesBridge", "Balance:"),
QT_TRANSLATE_NOOP("YesBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("YesBridge", "To account"),
QT_TRANSLATE_NOOP("YesBridge", "Pay to"),
QT_TRANSLATE_NOOP("YesBridge", "Narration"),
QT_TRANSLATE_NOOP("YesBridge", "Amount"),
QT_TRANSLATE_NOOP("YesBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("YesBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("YesBridge", "Clear All"),
QT_TRANSLATE_NOOP("YesBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("YesBridge", "Send Payment"),
QT_TRANSLATE_NOOP("YesBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("YesBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("YesBridge", "Type"),
QT_TRANSLATE_NOOP("YesBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("YesBridge", "New Address"),
QT_TRANSLATE_NOOP("YesBridge", "Copy Address"),
QT_TRANSLATE_NOOP("YesBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("YesBridge", "Date"),
QT_TRANSLATE_NOOP("YesBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("YesBridge", "Delete"),
QT_TRANSLATE_NOOP("YesBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("YesBridge", "Name:"),
QT_TRANSLATE_NOOP("YesBridge", "Public Key:"),
QT_TRANSLATE_NOOP("YesBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("YesBridge", "Choose identity"),
QT_TRANSLATE_NOOP("YesBridge", "Identity:"),
QT_TRANSLATE_NOOP("YesBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("YesBridge", "Group name:"),
QT_TRANSLATE_NOOP("YesBridge", "Create Group"),
QT_TRANSLATE_NOOP("YesBridge", "Invite others"),
QT_TRANSLATE_NOOP("YesBridge", "Search"),
QT_TRANSLATE_NOOP("YesBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("YesBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("YesBridge", "Invite"),
QT_TRANSLATE_NOOP("YesBridge", "GROUP"),
QT_TRANSLATE_NOOP("YesBridge", "BOOK"),
QT_TRANSLATE_NOOP("YesBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("YesBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("YesBridge", "CHAT"),
QT_TRANSLATE_NOOP("YesBridge", "Leave Group"),
QT_TRANSLATE_NOOP("YesBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("YesBridge", "Coin Value"),
QT_TRANSLATE_NOOP("YesBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("YesBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("YesBridge", "Spends"),
QT_TRANSLATE_NOOP("YesBridge", "Least Depth"),
QT_TRANSLATE_NOOP("YesBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("YesBridge", "Refresh"),
QT_TRANSLATE_NOOP("YesBridge", "Hash"),
QT_TRANSLATE_NOOP("YesBridge", "Height"),
QT_TRANSLATE_NOOP("YesBridge", "Timestamp"),
QT_TRANSLATE_NOOP("YesBridge", "Value Out"),
QT_TRANSLATE_NOOP("YesBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("YesBridge", "Main"),
QT_TRANSLATE_NOOP("YesBridge", "Network"),
QT_TRANSLATE_NOOP("YesBridge", "Window"),
QT_TRANSLATE_NOOP("YesBridge", "Display"),
QT_TRANSLATE_NOOP("YesBridge", "I2P"),
QT_TRANSLATE_NOOP("YesBridge", "Tor"),
QT_TRANSLATE_NOOP("YesBridge", "Start Yes on system login"),
QT_TRANSLATE_NOOP("YesBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("YesBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("YesBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("YesBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("YesBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("YesBridge", "Reserve:"),
QT_TRANSLATE_NOOP("YesBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("YesBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("YesBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("YesBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("YesBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("YesBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("YesBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("YesBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("YesBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("YesBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("YesBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("YesBridge", "Details"),
QT_TRANSLATE_NOOP("YesBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("YesBridge", "Port:"),
QT_TRANSLATE_NOOP("YesBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("YesBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("YesBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("YesBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("YesBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("YesBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("YesBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("YesBridge", "Notifications:"),
QT_TRANSLATE_NOOP("YesBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("YesBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("YesBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("YesBridge", "Cancel"),
QT_TRANSLATE_NOOP("YesBridge", "Apply"),
QT_TRANSLATE_NOOP("YesBridge", "Ok"),
QT_TRANSLATE_NOOP("YesBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("YesBridge", "Password"),
QT_TRANSLATE_NOOP("YesBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("YesBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("YesBridge", "Language"),
QT_TRANSLATE_NOOP("YesBridge", "English"),
QT_TRANSLATE_NOOP("YesBridge", "French"),
QT_TRANSLATE_NOOP("YesBridge", "Japanese"),
QT_TRANSLATE_NOOP("YesBridge", "Spanish"),
QT_TRANSLATE_NOOP("YesBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("YesBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("YesBridge", "Next Step"),
QT_TRANSLATE_NOOP("YesBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("YesBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("YesBridge", "Important!"),
QT_TRANSLATE_NOOP("YesBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("YesBridge", "Back"),
QT_TRANSLATE_NOOP("YesBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("YesBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("YesBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("YesBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("YesBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("YesBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("YesBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("YesBridge", "Accounts"),
QT_TRANSLATE_NOOP("YesBridge", "ID"),
QT_TRANSLATE_NOOP("YesBridge", "Name"),
QT_TRANSLATE_NOOP("YesBridge", "Created"),
QT_TRANSLATE_NOOP("YesBridge", "Active Account"),
QT_TRANSLATE_NOOP("YesBridge", "Default"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("YesBridge", "Path"),
QT_TRANSLATE_NOOP("YesBridge", "Active"),
QT_TRANSLATE_NOOP("YesBridge", "Master"),
QT_TRANSLATE_NOOP("YesBridge", "Make Default"),
QT_TRANSLATE_NOOP("YesBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("YesBridge", "Set as Master"),
QT_TRANSLATE_NOOP("YesBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("YesBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("YesBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("YesBridge", "0 active connections to YEScoin network"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("YesBridge", "Open chat list"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("YesBridge", "Inputs"),
QT_TRANSLATE_NOOP("YesBridge", "Values"),
QT_TRANSLATE_NOOP("YesBridge", "Outputs"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a YEScash address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("YesBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("YesBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("YesBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a YEScash address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("YesBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a YEScash signature"),
QT_TRANSLATE_NOOP("YesBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("YesBridge", "Your total balance"),
QT_TRANSLATE_NOOP("YesBridge", "Balances overview"),
QT_TRANSLATE_NOOP("YesBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("YesBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("YesBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("YesBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("YesBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("YesBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("YesBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("YesBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("YesBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("YesBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("YesBridge", "The label for this address"),
QT_TRANSLATE_NOOP("YesBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("YesBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("YesBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("YesBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("YesBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("YesBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("YesBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("YesBridge", "Short payment note."),
QT_TRANSLATE_NOOP("YesBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("YesBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("YesBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("YesBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("YesBridge", "Enter a password"),
QT_TRANSLATE_NOOP("YesBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("YesBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("YesBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("YesBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("YesBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H