//
//  panicTests.swift
//  panicTests
//
//  Created by Juan Pablo Civile on 23/06/2021.
//

import XCTest
@testable import panic
import Panicker

class panicTests: XCTestCase {

    func testExample() throws {
        PanickerInit()

        let p = PanickerPanickerImpl()
        let d = Data(repeating: 1, count: 10)
        for _ in 1...100_000 {
            let r = try p.panic(d)
            XCTAssertEqual(r.count, d.count)
        }
    }

}
