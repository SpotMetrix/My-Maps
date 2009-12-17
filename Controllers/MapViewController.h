//
//  MapView.h
//  MyMaps
//
//  Created by P. Mark Anderson on 12/16/09.
//  Copyright 2009 Bordertown Labs, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SM3DAR.h"

@interface MapViewController : UIViewController {
  SM3DAR_Controller *sm3dar;
  NSArray *points;
}

@property (nonatomic, retain) SM3DAR_Controller *sm3dar;
@property (nonatomic, retain) NSArray *points;

@end
