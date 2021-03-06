/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/Foundation.h>
#import "SpringBoard-Structs.h"

@class NSString, UITextLabel;

@interface VolumeControlView : UIView {
	float _volume;
	int _mode;
	BOOL _headphonesPresent;
	UITextLabel *_label1;
	UITextLabel *_label2;
	NSString *_line1;
	NSString *_line2;
}
@property(readonly, assign) float volume;
+(void)loadImages;
+(CGSize)controlSize;
-(id)initWithFrame:(CGRect)frame;
-(void)_checkHeadphonesPresent;
-(void)setMode:(int)mode;
-(void)setVolume:(float)volume mode:(int)mode;
-(void)_updateLabelStrings;
-(void)dealloc;
-(BOOL)_showLabel;
-(void)_drawLine1;
-(void)_drawLine2;
-(void)drawRect:(CGRect)rect;
@end

