/**
 * TiUUID
 *
 * Created by Your Name
 * Copyright (c) 2014 Your Company. All rights reserved.
 */

#import "ItScsoftTiuuidModule.h"
#import "TiBase.h"
#import "TiHost.h"
#import "TiUtils.h"
#import "FCUUID.h"

@implementation ItScsoftTiuuidModule

#pragma mark Internal

// this is generated for your module, please do not change it
-(id)moduleGUID
{
	return @"f3eee04f-0809-4510-a7df-1fd8908665a5";
}

// this is generated for your module, please do not change it
-(NSString*)moduleId
{
	return @"it.scsoft.tiuuid";
}

#pragma mark Lifecycle

-(void)startup
{
	// this method is called when the module is first loaded
	// you *must* call the superclass
	[super startup];

	NSLog(@"[INFO] %@ loaded",self);
}

-(void)shutdown:(id)sender
{
	// this method is called when the module is being unloaded
	// typically this is during shutdown. make sure you don't do too
	// much processing here or the app will be quit forceably

	// you *must* call the superclass
	[super shutdown:sender];
}



#pragma mark Internal Memory Management

-(void)didReceiveMemoryWarning:(NSNotification*)notification
{
	// optionally release any resources that can be dynamically
	// reloaded once memory is available - such as caches
	[super didReceiveMemoryWarning:notification];
}

#pragma mark Listener Notifications

-(void)_listenerAdded:(NSString *)type count:(int)count
{
	if (count == 1 && [type isEqualToString:@"my_event"])
	{
		// the first (of potentially many) listener is being added
		// for event named 'my_event'
	}
}

-(void)_listenerRemoved:(NSString *)type count:(int)count
{
	if (count == 0 && [type isEqualToString:@"my_event"])
	{
		// the last listener called for event named 'my_event' has
		// been removed, we can optionally clean up any resources
		// since no body is listening at this point for that event
	}
}

#pragma Public APIs



-(id)uuid:(id)args
{
    return [[FCUUID sharedInstance] uuid];
}
-(id)uuidForSession:(id)args
{
    return [[FCUUID sharedInstance] uuidForSession];
}
-(id)uuidForInstallation:(id)args
{
    return [[FCUUID sharedInstance] uuidForInstallation];
}
-(id)uuidForVendor:(id)args
{
    return [[FCUUID sharedInstance] uuidForVendor];
}
-(id)uuidForDevice:(id)args
{
    return [[FCUUID sharedInstance] uuidForDevice];
}
-(id)uuidsOfUserDevices:(id)args
{
    return [[FCUUID sharedInstance] uuidsOfUserDevices];
}

@end
