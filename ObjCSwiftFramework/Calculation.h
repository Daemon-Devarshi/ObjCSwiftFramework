//
//  Calculation.h
//  ObjCSwiftFramework
//
//  Created by Devarshi on 14/05/24.
//


#import <Foundation/Foundation.h>
#import <ObjCSwiftFramework/InternalProtocol.h>
//#import "SuperClassInPackage.h" // This gives error: Cannot find interface declaration for 'SuperClassInPackage', superclass of 'Calculation'

@protocol NiceLogs;
//@class SuperClassInPackage; // This gives error: Attempting to use the forward class 'SuperClassInPackage' as superclass of 'Calculation'
NS_ASSUME_NONNULL_BEGIN

// This cannot be declared as super class of Calculation
//@interface Calculation : SuperClassInPackage <NiceLogs> // This gives error: Attempting to use the forward class 'SuperClassInPackage' as superclass of 'Calculation'
@interface Calculation : NSObject <NiceLogs, InternalProtocol> // This gives warning: Cannot find protocol definition for 'NiceLogs'
@end

NS_ASSUME_NONNULL_END
