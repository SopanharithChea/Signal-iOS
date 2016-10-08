//  Created by Dylan Bourgeois on 20/11/14.
//  Portions Copyright (c) 2016 Open Whisper Systems. All rights reserved.

#import "OWSMessageData.h"
#import "TSMessageAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@class TSCall;

typedef enum : NSUInteger {
    kCallOutgoing = 1,
    kCallIncoming = 2,
    kCallMissed = 3,
    kGroupUpdateJoin = 4,
    kGroupUpdateLeft = 5,
    kGroupUpdate = 6
} CallStatus;

@interface OWSCall : NSObject <OWSMessageData, NSCoding, NSCopying>

#pragma mark - Initialization

- (instancetype)initWithCallRecord:(TSCall *)callRecord;

- (instancetype)initWithCallerId:(NSString *)callerId
               callerDisplayName:(NSString *)callerDisplayName
                            date:(nullable NSDate *)date
                          status:(CallStatus)status
                   displayString:(NSString *)detailString NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

/*
 * Returns the string Id of the user who initiated the call
 */
@property (copy, nonatomic, readonly) NSString *senderId;

/*
 * Returns the display name for user who initiated the call
 */
@property (copy, nonatomic, readonly) NSString *senderDisplayName;

/*
 * Returns date of the call
 */
@property (copy, nonatomic, readonly) NSDate *date;

/*
 * Returns the call status
 * @see CallStatus
 */
@property (nonatomic) CallStatus status;

/**
 *  String to be displayed
 */
@property (nonatomic, copy) NSString *detailString;

- (NSString *)dateText;

@end

NS_ASSUME_NONNULL_END
