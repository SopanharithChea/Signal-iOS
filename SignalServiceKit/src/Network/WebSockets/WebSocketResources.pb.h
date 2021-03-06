// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class PBDescriptorProto;
@class PBDescriptorProtoBuilder;
@class PBDescriptorProtoExtensionRange;
@class PBDescriptorProtoExtensionRangeBuilder;
@class PBEnumDescriptorProto;
@class PBEnumDescriptorProtoBuilder;
@class PBEnumOptions;
@class PBEnumOptionsBuilder;
@class PBEnumValueDescriptorProto;
@class PBEnumValueDescriptorProtoBuilder;
@class PBEnumValueOptions;
@class PBEnumValueOptionsBuilder;
@class PBFieldDescriptorProto;
@class PBFieldDescriptorProtoBuilder;
@class PBFieldOptions;
@class PBFieldOptionsBuilder;
@class PBFileDescriptorProto;
@class PBFileDescriptorProtoBuilder;
@class PBFileDescriptorSet;
@class PBFileDescriptorSetBuilder;
@class PBFileOptions;
@class PBFileOptionsBuilder;
@class PBMessageOptions;
@class PBMessageOptionsBuilder;
@class PBMethodDescriptorProto;
@class PBMethodDescriptorProtoBuilder;
@class PBMethodOptions;
@class PBMethodOptionsBuilder;
@class PBOneofDescriptorProto;
@class PBOneofDescriptorProtoBuilder;
@class PBServiceDescriptorProto;
@class PBServiceDescriptorProtoBuilder;
@class PBServiceOptions;
@class PBServiceOptionsBuilder;
@class PBSourceCodeInfo;
@class PBSourceCodeInfoBuilder;
@class PBSourceCodeInfoLocation;
@class PBSourceCodeInfoLocationBuilder;
@class PBUninterpretedOption;
@class PBUninterpretedOptionBuilder;
@class PBUninterpretedOptionNamePart;
@class PBUninterpretedOptionNamePartBuilder;
@class WebSocketResourcesWebSocketMessage;
@class WebSocketResourcesWebSocketMessageBuilder;
@class WebSocketResourcesWebSocketRequestMessage;
@class WebSocketResourcesWebSocketRequestMessageBuilder;
@class WebSocketResourcesWebSocketResponseMessage;
@class WebSocketResourcesWebSocketResponseMessageBuilder;


typedef NS_ENUM(SInt32, WebSocketResourcesWebSocketMessageType) {
  WebSocketResourcesWebSocketMessageTypeUnknown = 0,
  WebSocketResourcesWebSocketMessageTypeRequest = 1,
  WebSocketResourcesWebSocketMessageTypeResponse = 2,
};

BOOL WebSocketResourcesWebSocketMessageTypeIsValidValue(WebSocketResourcesWebSocketMessageType value);
NSString *NSStringFromWebSocketResourcesWebSocketMessageType(WebSocketResourcesWebSocketMessageType value);


@interface WebSocketResourcesWebSocketResourcesRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define WebSocketRequestMessage_verb @"verb"
#define WebSocketRequestMessage_path @"path"
#define WebSocketRequestMessage_body @"body"
#define WebSocketRequestMessage_headers @"headers"
#define WebSocketRequestMessage_id @"id"
@interface WebSocketResourcesWebSocketRequestMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasVerb_:1;
  BOOL hasPath_:1;
  BOOL hasBody_:1;
  UInt64 id;
  NSString* verb;
  NSString* path;
  NSData* body;
  NSMutableArray * headersArray;
}
- (BOOL) hasVerb;
- (BOOL) hasPath;
- (BOOL) hasBody;
- (BOOL) hasId;
@property (readonly, strong) NSString* verb;
@property (readonly, strong) NSString* path;
@property (readonly, strong) NSData* body;
@property (readonly, strong) NSArray * headers;
@property (readonly) UInt64 id;
- (NSString*)headersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketRequestMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketRequestMessageBuilder*) builderWithPrototype:(WebSocketResourcesWebSocketRequestMessage*) prototype;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) toBuilder;

+ (WebSocketResourcesWebSocketRequestMessage*) parseFromData:(NSData*) data;
+ (WebSocketResourcesWebSocketRequestMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketRequestMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketResourcesWebSocketRequestMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketRequestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketResourcesWebSocketRequestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketResourcesWebSocketRequestMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketResourcesWebSocketRequestMessage* resultWebSocketRequestMessage;
}

- (WebSocketResourcesWebSocketRequestMessage*) defaultInstance;

- (WebSocketResourcesWebSocketRequestMessageBuilder*) clear;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) clone;

- (WebSocketResourcesWebSocketRequestMessage*) build;
- (WebSocketResourcesWebSocketRequestMessage*) buildPartial;

- (WebSocketResourcesWebSocketRequestMessageBuilder*) mergeFrom:(WebSocketResourcesWebSocketRequestMessage*) other;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasVerb;
- (NSString*) verb;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) setVerb:(NSString*) value;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) clearVerb;

- (BOOL) hasPath;
- (NSString*) path;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) setPath:(NSString*) value;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) clearPath;

- (BOOL) hasBody;
- (NSData*) body;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) setBody:(NSData*) value;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) clearBody;

- (NSMutableArray *)headers;
- (NSString*)headersAtIndex:(NSUInteger)index;
- (WebSocketResourcesWebSocketRequestMessageBuilder *)addHeaders:(NSString*)value;
- (WebSocketResourcesWebSocketRequestMessageBuilder *)setHeadersArray:(NSArray *)array;
- (WebSocketResourcesWebSocketRequestMessageBuilder *)clearHeaders;

- (BOOL) hasId;
- (UInt64) id;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) setId:(UInt64) value;
- (WebSocketResourcesWebSocketRequestMessageBuilder*) clearId;
@end

#define WebSocketResponseMessage_id @"id"
#define WebSocketResponseMessage_status @"status"
#define WebSocketResponseMessage_message @"message"
#define WebSocketResponseMessage_headers @"headers"
#define WebSocketResponseMessage_body @"body"
@interface WebSocketResourcesWebSocketResponseMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasMessage_:1;
  BOOL hasBody_:1;
  BOOL hasStatus_:1;
  UInt64 id;
  NSString* message;
  NSData* body;
  UInt32 status;
  NSMutableArray * headersArray;
}
- (BOOL) hasId;
- (BOOL) hasStatus;
- (BOOL) hasMessage;
- (BOOL) hasBody;
@property (readonly) UInt64 id;
@property (readonly) UInt32 status;
@property (readonly, strong) NSString* message;
@property (readonly, strong) NSArray * headers;
@property (readonly, strong) NSData* body;
- (NSString*)headersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketResponseMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketResponseMessageBuilder*) builderWithPrototype:(WebSocketResourcesWebSocketResponseMessage*) prototype;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) toBuilder;

+ (WebSocketResourcesWebSocketResponseMessage*) parseFromData:(NSData*) data;
+ (WebSocketResourcesWebSocketResponseMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketResponseMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketResourcesWebSocketResponseMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketResponseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketResourcesWebSocketResponseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketResourcesWebSocketResponseMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketResourcesWebSocketResponseMessage* resultWebSocketResponseMessage;
}

- (WebSocketResourcesWebSocketResponseMessage*) defaultInstance;

- (WebSocketResourcesWebSocketResponseMessageBuilder*) clear;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) clone;

- (WebSocketResourcesWebSocketResponseMessage*) build;
- (WebSocketResourcesWebSocketResponseMessage*) buildPartial;

- (WebSocketResourcesWebSocketResponseMessageBuilder*) mergeFrom:(WebSocketResourcesWebSocketResponseMessage*) other;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) setId:(UInt64) value;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) clearId;

- (BOOL) hasStatus;
- (UInt32) status;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) setStatus:(UInt32) value;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) clearStatus;

- (BOOL) hasMessage;
- (NSString*) message;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) setMessage:(NSString*) value;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) clearMessage;

- (NSMutableArray *)headers;
- (NSString*)headersAtIndex:(NSUInteger)index;
- (WebSocketResourcesWebSocketResponseMessageBuilder *)addHeaders:(NSString*)value;
- (WebSocketResourcesWebSocketResponseMessageBuilder *)setHeadersArray:(NSArray *)array;
- (WebSocketResourcesWebSocketResponseMessageBuilder *)clearHeaders;

- (BOOL) hasBody;
- (NSData*) body;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) setBody:(NSData*) value;
- (WebSocketResourcesWebSocketResponseMessageBuilder*) clearBody;
@end

#define WebSocketMessage_type @"type"
#define WebSocketMessage_request @"request"
#define WebSocketMessage_response @"response"
@interface WebSocketResourcesWebSocketMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasRequest_:1;
  BOOL hasResponse_:1;
  BOOL hasType_:1;
  WebSocketResourcesWebSocketRequestMessage* request;
  WebSocketResourcesWebSocketResponseMessage* response;
  WebSocketResourcesWebSocketMessageType type;
}
- (BOOL) hasType;
- (BOOL) hasRequest;
- (BOOL) hasResponse;
@property (readonly) WebSocketResourcesWebSocketMessageType type;
@property (readonly, strong) WebSocketResourcesWebSocketRequestMessage* request;
@property (readonly, strong) WebSocketResourcesWebSocketResponseMessage* response;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketResourcesWebSocketMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketMessageBuilder*) builder;
+ (WebSocketResourcesWebSocketMessageBuilder*) builderWithPrototype:(WebSocketResourcesWebSocketMessage*) prototype;
- (WebSocketResourcesWebSocketMessageBuilder*) toBuilder;

+ (WebSocketResourcesWebSocketMessage*) parseFromData:(NSData*) data;
+ (WebSocketResourcesWebSocketMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketResourcesWebSocketMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResourcesWebSocketMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketResourcesWebSocketMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketResourcesWebSocketMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketResourcesWebSocketMessage* resultWebSocketMessage;
}

- (WebSocketResourcesWebSocketMessage*) defaultInstance;

- (WebSocketResourcesWebSocketMessageBuilder*) clear;
- (WebSocketResourcesWebSocketMessageBuilder*) clone;

- (WebSocketResourcesWebSocketMessage*) build;
- (WebSocketResourcesWebSocketMessage*) buildPartial;

- (WebSocketResourcesWebSocketMessageBuilder*) mergeFrom:(WebSocketResourcesWebSocketMessage*) other;
- (WebSocketResourcesWebSocketMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketResourcesWebSocketMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (WebSocketResourcesWebSocketMessageType) type;
- (WebSocketResourcesWebSocketMessageBuilder*) setType:(WebSocketResourcesWebSocketMessageType) value;
- (WebSocketResourcesWebSocketMessageBuilder*) clearType;

- (BOOL) hasRequest;
- (WebSocketResourcesWebSocketRequestMessage*) request;
- (WebSocketResourcesWebSocketMessageBuilder*) setRequest:(WebSocketResourcesWebSocketRequestMessage*) value;
- (WebSocketResourcesWebSocketMessageBuilder*) setRequestBuilder:(WebSocketResourcesWebSocketRequestMessageBuilder*) builderForValue;
- (WebSocketResourcesWebSocketMessageBuilder*) mergeRequest:(WebSocketResourcesWebSocketRequestMessage*) value;
- (WebSocketResourcesWebSocketMessageBuilder*) clearRequest;

- (BOOL) hasResponse;
- (WebSocketResourcesWebSocketResponseMessage*) response;
- (WebSocketResourcesWebSocketMessageBuilder*) setResponse:(WebSocketResourcesWebSocketResponseMessage*) value;
- (WebSocketResourcesWebSocketMessageBuilder*) setResponseBuilder:(WebSocketResourcesWebSocketResponseMessageBuilder*) builderForValue;
- (WebSocketResourcesWebSocketMessageBuilder*) mergeResponse:(WebSocketResourcesWebSocketResponseMessage*) value;
- (WebSocketResourcesWebSocketMessageBuilder*) clearResponse;
@end


// @@protoc_insertion_point(global_scope)
