import Foundation


/*
  * input = ["airasia", "airasia", "garudaindonesia"]
  * output = 1
  * explanation = we can remove 1 instance of "airasia" to make the list equitable
  * equitable if there are no two adjacent strings that are the same
 */

/*
 * Complete the 'minOperations' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY providers as parameter.
 */

func minOperations(providers: [String]) -> Int {
  var dict = [String: Int]()
  for provider in providers {
    if let count = dict[provider] {
      dict[provider] = count + 1
    } else {
      dict[provider] = 1
    }
  }
  let maxCount = dict.values.max()!
  if dict.count == 1 {
    return 1
  }
  return providers.count - maxCount
}

let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
let fileHandle = FileHandle(forWritingAtPath: stdout)!

guard let providersCount = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

var providers = [String]()

for _ in 1...providersCount {
    guard let providersItem = readLine() else { fatalError("Bad input") }

    providers.append(providersItem)
}

guard providers.count == providersCount else { fatalError("Bad input") }

let result = minOperations(providers: providers)

fileHandle.write(String(result).data(using: .utf8)!)
fileHandle.write("\n".data(using: .utf8)!)
