Problem Statement: 
- Unable to import .h file from an ObjC SPM to a .h file in an ObjC file in a framework with mix of ObjC and Swift code
- The issue is: in order to support access of ObjC file in Swift code in a framework we need to use umbrella header (in place of bridging header). Once the file is imported in Umbrella header and made public it will no longer allow import of .h file from package in its interface

Project Structure:

a. Package: ObjCPackage

ObjCPackage
  |- Package.swift
  |- ObjCPackage
          |- MathsUtilities.h (class interface)
          |- MathsUtilities.m (class implementation)
          |- NiceLogs.h (protocol)

b. Project: ObjCSwiftFramework

ObjCSwiftFramework
  |- ObjCSwiftFramework.h (umbrella header)
  |- Calculation.h (objc class interface)
  |- Calculation.m (objc class implementation)
  |- SwiftCalci.swift (swift class)

Details:
- #import <ObjCSwiftFramework/Calculation.h> added in ObjCSwiftFramework.h as Calculation has to be used in SwiftCalci
- Calculation.h to marked as public in target membership in Xcode
- #import "NiceLogs.h" in Calculation.h gives error






     
