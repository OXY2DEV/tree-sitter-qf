import XCTest
import SwiftTreeSitter
import TreeSitterQf

final class TreeSitterQfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_qf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Quickfix grammar")
    }
}
