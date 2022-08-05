// rapidjson/example/simpledom/simpledom.cpp`
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
 
using namespace rapidjson;
 
int main() {
    // 1. 把 JSON 解析至 DOM。
    const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
    Document d;
    d.Parse(json);
 
    // 2. 利用 DOM 作出修改。
    Value& s = d["stars"];
    s.SetInt(s.GetInt() + 1);
 
    // 3. 把 DOM 转换（stringify）成 JSON。
    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
 
    // Output {"project":"rapidjson","stars":11}
    std::cout << buffer.GetString() << std::endl;

    Document json_content;
    Document::AllocatorType& allocator = json_content.GetAllocator();
    json_content.SetObject();

    // set string, int, bool
    json_content.AddMember("key1", "value1", allocator); // char*
    // json_content.AddMember("key1", Value().SetString("value1".c_str(), allocator), allocator); // string
    json_content.AddMember("key2", 10, allocator); // int
    json_content.AddMember("key3", true, allocator); // bool

    StringBuffer buffer2;
    Writer<StringBuffer> writer2(buffer2);
    json_content.Accept(writer2);
    std::cout << buffer2.GetString() << std::endl;

    return 0;
}
