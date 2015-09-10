/*
 TMLoadingScreen.m
 EMCApplication
 
 Created by Ashwin Kumar on 07/23/13.
 Copyright (c) 2013 Endeavour Software Technologies. All rights reserved.
 
 Modification Date		Modified By		Comments
 =================		===========		=================================================
 */
#import "TMLoadingScreen.h"
#import "TMConstants.h"
#define kSpinView_Height            50.0
#define kActivityIndicatorSize      20.0
#define kLoadingLabel_Height        25.0
#define kHelveticaNeueLight   @"HelveticaNeue-Light"

@implementation TMSpinBackgroundView


- (id)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
		self.opaque = NO;
    }
    return self;
}



- (void)drawRect:(CGRect)rect {
	[super drawRect:rect];
	
	CGContextRef context = UIGraphicsGetCurrentContext();
	CGContextSetLineWidth(context, 1.5);
	
	CGFloat color[] = {0.1, 0.1, 0.1, 1.0};
	CGContextSetFillColor(context, color);
	
	float ovalWidth = 10, ovalHeight = 10;
	float fw, fh;
	CGContextBeginPath(context);
	CGContextSaveGState(context);
    CGContextTranslateCTM (context, CGRectGetMinX(rect),
						   CGRectGetMinY(rect));
    CGContextScaleCTM (context, ovalWidth, ovalHeight);
    fw = CGRectGetWidth (rect) / ovalWidth;
    fh = CGRectGetHeight (rect) / ovalHeight;
	
    CGContextMoveToPoint(context, fw, fh/2);
    CGContextAddArcToPoint(context, fw, fh, fw/2, fh, 1);
    CGContextAddArcToPoint(context, 0, fh, 0, fh/2, 1);
    CGContextAddArcToPoint(context, 0, 0, fw/2, 0, 1);
    CGContextAddArcToPoint(context, fw, 0, fw, fh/2, 1);
    CGContextClosePath(context);
	
    CGContextRestoreGState(context);
	CGContextFillPath(context);
}


@end

@implementation TMLoadingScreen
- (id)initWithFrame:(CGRect)frame withMessage:(NSString*)aMessage{
    if (self = [super initWithFrame:CGRectIntegral(frame)]) {
		self.opaque =NO;
		
         self.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
		self.backgroundColor = [UIColor colorWithRed:0.1 green:0.1 blue:0.1 alpha:0.5];
        
        CGSize theMessageSize;
        theMessageSize = [aMessage sizeWithAttributes:@{NSFontAttributeName:[UIFont fontWithName:kHelveticaNeueLight size:16.0]}];
        
		CGRect spinBgViewFrame = CGRectIntegral(CGRectMake(self.frame.size.width/2-(theMessageSize.width+kActivityIndicatorSize*2.5)/2,
                                                           (self.frame.size.height-kSpinView_Height)/2,
                                                           theMessageSize.width+kActivityIndicatorSize*2.5, kSpinView_Height));
        
		mSpinBackground = [[TMSpinBackgroundView alloc] initWithFrame:spinBgViewFrame];
		mSpinBackground.autoresizingMask  = UIViewAutoresizingFlexibleTopMargin| UIViewAutoresizingFlexibleBottomMargin |UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin;
		[self addSubview:mSpinBackground];
		
		if(mSpinner != nil)
        {
			[mSpinner  stopAnimating];
			[mSpinner removeFromSuperview];
			mSpinner = nil;
		}
        
		CGRect spinFrame = CGRectIntegral(CGRectMake(spinBgViewFrame.size.width-theMessageSize.width-(kActivityIndicatorSize*2),
                                                     spinBgViewFrame.size.height/2-kActivityIndicatorSize/2,
                                                     kActivityIndicatorSize,kActivityIndicatorSize));
        
        
        
		mSpinner = [[UIActivityIndicatorView alloc] initWithFrame:spinFrame];
		mSpinner.activityIndicatorViewStyle = UIActivityIndicatorViewStyleWhite;
        		mSpinner.autoresizingMask = UIViewAutoresizingFlexibleTopMargin |UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleLeftMargin |UIViewAutoresizingFlexibleRightMargin;
		[mSpinBackground addSubview:mSpinner];
		[mSpinner startAnimating];
		
		if(mLoadingLabel != nil){
			[mLoadingLabel removeFromSuperview];
			mLoadingLabel = nil;
		}
		mLoadingLabel =[[UILabel alloc] initWithFrame:CGRectIntegral(CGRectMake(spinBgViewFrame.size.width-theMessageSize.width-kLoadingLabel_Height/2,
                                                                                spinBgViewFrame.size.height/2-kLoadingLabel_Height/2,
                                                                                theMessageSize.width, kLoadingLabel_Height))];
		mLoadingLabel.backgroundColor = kEMCColor_Clear_Color;
		mLoadingLabel.text =aMessage;
		mLoadingLabel.font = [UIFont fontWithName:kHelveticaNeueLight size:16.0];
		mLoadingLabel.textColor = kEMCColor_ffffff;
        mLoadingLabel.autoresizingMask = UIViewAutoresizingFlexibleTopMargin|UIViewAutoresizingFlexibleBottomMargin
        		| UIViewAutoresizingFlexibleLeftMargin |UIViewAutoresizingFlexibleRightMargin;
		[mSpinBackground addSubview:mLoadingLabel];
        
        
        if([aMessage length]==0)
        {
            
            mSpinner.hidden = YES;
            mLoadingLabel.hidden = YES;
            mSpinBackground.hidden = YES;
        }
        else
        {
            mSpinner.hidden = NO;
            mLoadingLabel.hidden = NO;
            mSpinBackground.hidden = NO;
        }
        
	}
    return self;
}

/*
 * Method Name	: deselectAllButtons
 * Description	: Remove the loading view added to its superview
 * Parameters	: None
 * Return value	: None
 */
-(void)dischargeLoadingScreen{
	if(mSpinner != nil)
	{
		[mSpinner stopAnimating];
		[mSpinner removeFromSuperview];mSpinner = nil;
		[mLoadingLabel removeFromSuperview];mLoadingLabel = nil;
		[mSpinBackground removeFromSuperview];mSpinBackground = nil;
	}
}


@end
