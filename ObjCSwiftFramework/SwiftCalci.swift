//
//  SwiftCalci.swift
//  ObjCSwiftFramework
//
//  Created by apple on 14/05/24.
//

import Foundation

class SwiftCalci {
    func doSomething() {
        Calculation().printInt() // This gives compilation error. Method belongs to ObjCPackage-NiceLogs protocol
        Calculation().helloWorld() // This compiles fine. Method belongs to InternalProtocol
    }
}
