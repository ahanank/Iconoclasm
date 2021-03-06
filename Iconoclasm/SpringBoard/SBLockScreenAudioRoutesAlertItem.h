/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"


@interface SBLockScreenAudioRoutesAlertItem : SBAlertItem {
}
-(Class)alertSheetClass;
-(id)alertSheet;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(BOOL)allowMenuButtonDismissal;
-(void)willRelockForButtonPress:(BOOL)buttonPress;
-(BOOL)shouldShowInLockScreen;
-(BOOL)togglesMediaControls;
-(void)performUnlockAction;
-(void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
@end

