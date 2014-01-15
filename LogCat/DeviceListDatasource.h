//
//  DeviceListDatasource.h
//  LogCat
//
//  Created by Chris Wilson on 12/16/12.
//

#import <Foundation/Foundation.h>

extern NSString* const DEVICE_ID_KEY;
extern NSString* const DEVICE_TYPE_KEY;


@protocol DeviceListDatasourceDelegate <NSObject>

- (void) onDevicesConneceted: (NSArray*) devices;

- (void) onDeviceModel: (NSString*) deviceId model:(NSString*) model;

@end

@interface DeviceListDatasource : NSObject {
    id <DeviceListDatasourceDelegate> delegate;
}

@property (strong) id <DeviceListDatasourceDelegate> delegate;

- (void) loadDeviceList;

- (void) requestDeviceModel: (NSString*) deviceId;

@end
