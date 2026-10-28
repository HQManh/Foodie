# Task: turn Ghidra pseudocode into C# method bodies

Project: D:\Unity\Foodie\UnityProject (Unity 6, recovered from an IL2CPP build; only for an app the user owns the rights to examine).
Stub sources: D:\Unity\Foodie\UnityProject\Assets\Scripts\Assembly-CSharp\**\*.cs  (class/field/method signatures exist, bodies are empty or `return default`).
Your input: a batch file D:\Unity\Foodie\convert\bundles\batchNNN.txt (pseudocode, grouped as `########## TYPE Ns.Type`, then `//==== Type.Method @addr` per method) and batchNNN.types (the type names).

For every type in your batch:
1. Find its stub .cs (grep the class name under Assets/Scripts/Assembly-CSharp; nested types live inside the parent's file).
2. Fill in each method/ctor/property/accessor body so it reproduces what the pseudocode does, as idiomatic readable C#.
3. Edit the stub in place with Edit/Write. Do NOT change namespaces, class/field names, field order, attributes ([SerializeField] etc.), base types, or method signatures. Do not add public API. You may add `using` lines and private helper locals/lambdas. Never delete fields. Compiler-generated members (<>c, display classes, `<Method>d__N` state machines, `get_`/`set_` of auto-properties, `.cctor` field initialisers) should be folded back into normal C# (lambdas, coroutines with yield, async/UniTask, auto-properties, initialisers).
4. Reading the pseudocode:
   - First arg is `this` for instance methods; the last arg is a hidden MethodInfo (ignore).
   - `UnityEngine_X__get_Y(...)` is the property/method X.Y. `Type__Method` names are real names; `FUN_xxxx` are unnamed helpers: class-init (`FUN_03f5c2a4`/`if ((DAT_.. & 1)==0)` blocks), null-check/throw, generic-instantiation thunks, il2cpp_codegen helpers, boxing, array bounds checks, type-cast checks. Ignore all of those; they are IL2CPP boilerplate.
   - Field access `*(T*)(this + 0xNN)` : object header is 0x10 bytes; fields follow base-class fields, in declaration order, naturally aligned (instance fields only; statics are via `DAT_`/static fields block). Use the stub's field order to map offsets to names (bool/byte 1, int/float 4, long/double/refs 8, Vector2 8, Vector3 12, Color 16 ...).
   - String literals appear as `DAT_xxxx` with no text available. Use a short sensible literal inferred from context (e.g. a log message, PlayerPrefs key, format string) and mark it `/* literal recovered by guess */` only when the actual value matters (keys, formats, tags, scene names). Do not invent large amounts of text.
   - Virtual calls look like `(**(code **)(*obj + 0x...))(...)`; map them to the likeliest member from context and the stub's methods/base class.
5. If a body cannot be understood, leave the stub body but add one line `// TODO(unrecovered): <why>`; do not fabricate behaviour. Prefer correct and compilable over complete. Stay within what the pseudocode shows.
6. No Unity is installed here, so you cannot compile. Be careful with syntax: balanced braces, definite assignment, `out` params, return on all paths.
7. When finished, reply with ONE short line: counts of types done / methods left as TODO. Do not paste code.
Work through the whole batch; it is large, be efficient: read a type, write it, move on.
