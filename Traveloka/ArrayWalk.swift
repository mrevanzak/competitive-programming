import Foundation



/**
    Make the following line of code below work by providing the
    implementation for the `walk` function:

        let array : [Any] = [1, 2, [3, 4], 5]
        array.walk { (value, index) in
            print("\(index) \(value)")
        }
 
    Write your solution below this comment.
    Input array will onl consist of String, Number, or Array

    Example:
    Input: [1, 2, [3, 4], 5]
    Output:
    0 1
    1 2
    2 3
    3 4
    4 5
**/

extension Array {
    func walk(_ closure: (Any, Int) -> Void) {
        for i in 0..<self.count {
            if let subarray = self[i] as? [Any] {
                subarray.walk(closure)
            } else {
                closure(self[i], i)
            }
        }
    }
}

let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: stdout)!

guard let input = readLine() else { fatalError("Bad input") }
let tokenized = input.split(separator: " ")

var array : [Any] = []
var indexKeys : [Int] = []
var subarrays : [Int:[Any]] = [:]
var depth = 0

for i in 0..<tokenized.count {
    let token = String(tokenized[i])
    if token == "[" {
        subarrays[i] = []
        indexKeys.append(i)
    }
    else if token == "]" {
        let expiringKey = indexKeys.popLast()
        if let subarray = subarrays[expiringKey!] {
            if indexKeys.isEmpty {
                array.append(subarray)
            } else {
                let key = indexKeys.last!
                subarrays[key]?.append(subarray)
            }
        }
    }
    else {
        if indexKeys.isEmpty {
            array.append(token)
        } else {
            let key = indexKeys.last!
            subarrays[key]?.append(token)
        }
    }
}

var res : [String] = []
array.walk { (value, index) in
    res.append("\(index) \(value)")
}

fileHandle.write(res.joined(separator: "\n").data(using: .utf8)!)
fileHandle.write("\n".data(using: .utf8)!)
