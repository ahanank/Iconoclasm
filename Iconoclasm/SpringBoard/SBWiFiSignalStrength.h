/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SpringBoard-Structs.h"
#import <Foundation/Foundation.h>


@interface SBWiFiSignalStrength : UIImageView {
	int _bars;
	float _rawStrength;
	BOOL _hilited;
	BOOL _selected;
	BOOL _secure;
	BOOL _joining;
	UIImageView *_icon;
}
@property(assign) BOOL joining;
@property(assign) BOOL selected;
@property(assign) BOOL hilited;
@property(assign) BOOL secure;
+(void)hideSpinner;
-(void)setSpinnerHilited:(BOOL)hilited;
-(id)initWithFrame:(CGRect)frame inView:(id)view;
-(void)dealloc;
-(void)updateStrength:(id)strength;
-(void)hide;
-(void)updateImage;
@end

