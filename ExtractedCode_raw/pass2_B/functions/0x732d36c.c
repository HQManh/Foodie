// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$.cctor
// address: 0x732d36c
// body: available
// range: 0x732d36c-0x732e9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732e9cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732e9d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogConsole___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  
  if ((DAT_0952060b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09171080);
    FUN_03f5c2a4(&DAT_09171078);
    FUN_03f5c2a4(&DAT_09171200);
    FUN_03f5c2a4(&DAT_091711f0);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c7c50);
    FUN_03f5c2a4(&DAT_091c7c60);
    FUN_03f5c2a4(&DAT_091c7c58);
    FUN_03f5c2a4(&DAT_091c7c68);
    FUN_03f5c2a4(&DAT_091c7c70);
    FUN_03f5c2a4(&DAT_091c7c80);
    FUN_03f5c2a4(&DAT_091c7c78);
    FUN_03f5c2a4(&DAT_091c7c88);
    FUN_03f5c2a4(&DAT_091c7c90);
    FUN_03f5c2a4(&DAT_091c7ca0);
    FUN_03f5c2a4(&DAT_091c7c98);
    FUN_03f5c2a4(&DAT_091c7ca8);
    FUN_03f5c2a4(&DAT_091c7cb0);
    FUN_03f5c2a4(&DAT_091c7cb8);
    FUN_03f5c2a4(&DAT_091c7cc0);
    FUN_03f5c2a4(&DAT_091c7cc8);
    FUN_03f5c2a4(&DAT_091c7cd0);
    FUN_03f5c2a4(&DAT_091c7cd8);
    FUN_03f5c2a4(&DAT_091c7ce8);
    FUN_03f5c2a4(&DAT_091c7cf0);
    FUN_03f5c2a4(&DAT_091c7ce0);
    FUN_03f5c2a4(&DAT_091c7cf8);
    FUN_03f5c2a4(&DAT_091c7d00);
    FUN_03f5c2a4(&DAT_091c7d08);
    FUN_03f5c2a4(&DAT_091c7d10);
    FUN_03f5c2a4(&DAT_091c7d18);
    FUN_03f5c2a4(&DAT_091c7d20);
    FUN_03f5c2a4(&DAT_091c7d30);
    FUN_03f5c2a4(&DAT_091c7d28);
    FUN_03f5c2a4(&DAT_091c7d40);
    FUN_03f5c2a4(&DAT_091c7d38);
    FUN_03f5c2a4(&DAT_091c7d48);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091a0ed8);
    FUN_03f5c2a4(&DAT_091a0d58);
    FUN_03f5c2a4(&DAT_091a0ed0);
    FUN_03f5c2a4(&DAT_091a0d48);
    FUN_03f5c2a4(&DAT_09176fa8);
    FUN_03f5c2a4(&DAT_09176f58);
    FUN_03f5c2a4(&DAT_09171908);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091abcd8);
    FUN_03f5c2a4(&DAT_091abce0);
    FUN_03f5c2a4(&DAT_0917bec0);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0918fe28);
    FUN_03f5c2a4(&DAT_09172890);
    FUN_03f5c2a4(&DAT_09172988);
    FUN_03f5c2a4(&DAT_09172990);
    FUN_03f5c2a4(&DAT_09172980);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091734e0);
    FUN_03f5c2a4(&DAT_091734c8);
    FUN_03f5c2a4(&DAT_09173508);
    FUN_03f5c2a4(&DAT_091734f0);
    FUN_03f5c2a4(&DAT_09173518);
    FUN_03f5c2a4(&DAT_091fd050);
    FUN_03f5c2a4(&DAT_09223918);
    FUN_03f5c2a4(&DAT_0920cfe8);
    FUN_03f5c2a4(&DAT_0920adb0);
    FUN_03f5c2a4(&DAT_0921aeb8);
    FUN_03f5c2a4(&DAT_09212610);
    FUN_03f5c2a4(&DAT_09200448);
    FUN_03f5c2a4(&DAT_09214520);
    FUN_03f5c2a4(&DAT_0920df10);
    FUN_03f5c2a4(&DAT_091f7fa8);
    FUN_03f5c2a4(&DAT_091f7a98);
    FUN_03f5c2a4(&DAT_0920cfe0);
    FUN_03f5c2a4(&DAT_091fcdb8);
    FUN_03f5c2a4(&DAT_0921fbe0);
    FUN_03f5c2a4(&DAT_09202c08);
    FUN_03f5c2a4(&DAT_09212600);
    FUN_03f5c2a4(&DAT_0921f960);
    FUN_03f5c2a4(&DAT_09207198);
    FUN_03f5c2a4(&DAT_09204390);
    FUN_03f5c2a4(&DAT_0920ada0);
    FUN_03f5c2a4(&DAT_0921caf8);
    FUN_03f5c2a4(&DAT_09212098);
    FUN_03f5c2a4(&DAT_09226a28);
    FUN_03f5c2a4(&DAT_09207dd8);
    FUN_03f5c2a4(&DAT_091fcdb0);
    FUN_03f5c2a4(&DAT_0920dc10);
    FUN_03f5c2a4(&DAT_0920e9f8);
    FUN_03f5c2a4(&DAT_09201b58);
    FUN_03f5c2a4(&DAT_092041b8);
    FUN_03f5c2a4(&DAT_09212608);
    FUN_03f5c2a4(&DAT_09212188);
    FUN_03f5c2a4(&DAT_09204f30);
    FUN_03f5c2a4(&DAT_092080f8);
    FUN_03f5c2a4(&DAT_091fe808);
    FUN_03f5c2a4(&DAT_09200bd0);
    FUN_03f5c2a4(&DAT_0920ada8);
    FUN_03f5c2a4(&DAT_091f6e00);
    DAT_0952060b = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917bec0);
  FUN_057e0400(uVar2,DAT_091abcd8);
  **(undefined8 **)(DAT_09183668 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183668 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917bec0);
  FUN_057e0478(uVar2,4,DAT_091abce0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183668 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  lVar4 = thunk_FUN_03f9944c(DAT_09176fa8);
  FUN_06fd76bc(lVar4,DAT_091a0ed0);
  lVar7 = DAT_09535468;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar7 + 0x20,0);
  uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
  IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d08);
  if (lVar4 != 0) {
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c70);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cc8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d10);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cd0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d18);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c88);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cf8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d00);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d20);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c90);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cb8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cb0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7ca8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091734c8,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d28);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091734f0,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d38);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173518,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d48);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172890,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cd8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091711f0,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c98);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171200,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7ca0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172980,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7ce0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172990,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cf0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171078,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c78);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171908,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7cc0);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091734e0,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d30);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173508,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7d40);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09172988,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7ce8);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171080,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918fe28);
    IngameDebugConsole_DebugLogConsole_ParseFunction___ctor(uVar5,0,DAT_091c7c80);
    FUN_06fd8454(lVar4,uVar2,uVar5,DAT_091a0ed8);
    plVar6 = (long *)(*(long *)(DAT_09183668 + 0xb8) + 0x10);
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6,lVar4);
    lVar7 = thunk_FUN_03f9944c(DAT_09176f58);
    FUN_06fd76bc(lVar7,DAT_091a0d48);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    if (lVar7 != 0) {
      FUN_06fd8454(lVar7,uVar2,DAT_0920dc10,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_091fcdb8,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09204f30,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09212600,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09207198,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09212608,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_091fd050,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_0920cfe8,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_0920cfe0,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09212610,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_091fe808,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09202c08,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09200bd0,DAT_091a0d58);
      uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
      FUN_06fd8454(lVar7,uVar2,DAT_09200448,DAT_091a0d58);
      plVar6 = (long *)(*(long *)(DAT_09183668 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_03f5d7b8(plVar6,lVar7);
      uVar2 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0478(uVar2,8,DAT_091b0568);
      puVar3 = (undefined8 *)(*(long *)(DAT_09183668 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
      lVar7 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(undefined8 *)(lVar7 + 0x20) = DAT_091f6e00;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20));
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar7 + 0x28) = DAT_091f7a98;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28));
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x30) = DAT_09226a28;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x30));
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar7 + 0x38) = DAT_091f7fa8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x38));
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x40) = DAT_09214520;
                  thunk_FUN_03f5d7b8();
                  plVar6 = (long *)(*(long *)(DAT_09183668 + 0xb8) + 0x28);
                  *plVar6 = lVar7;
                  thunk_FUN_03f5d7b8(plVar6,lVar7);
                  plVar6 = (long *)thunk_FUN_03f9944c(DAT_09182ff8);
                  System_Globalization_CultureInfo___ctor(plVar6,DAT_0921aeb8,0);
                  if (plVar6 != (long *)0x0) {
                    uVar2 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
                    puVar3 = (undefined8 *)(*(long *)(DAT_09183668 + 0xb8) + 0x30);
                    *puVar3 = uVar2;
                    thunk_FUN_03f5d7b8(puVar3,uVar2);
                    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar2,0,DAT_091c7c58,0);
                    IngameDebugConsole_DebugLogConsole__AddCommand(DAT_0921caf8,DAT_0920ada0,uVar2);
                    uVar2 = thunk_FUN_03f9944c(DAT_09174980);
                    FUN_070a8c30(uVar2,0,DAT_091c7c60,0);
                    FUN_04a8a2ac(DAT_0921caf8,DAT_0920ada8,uVar2,DAT_091c7c50);
                    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar2,0,DAT_091c7c68,0);
                    IngameDebugConsole_DebugLogConsole__AddCommand(DAT_09223918,DAT_0920adb0,uVar2);
                    lVar7 = FUN_03f5c394(DAT_091805f8,0xc);
                    if (lVar7 != 0) {
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        *(undefined8 *)(lVar7 + 0x20) = DAT_09212098;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20));
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar7 + 0x28) = DAT_0920df10;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28));
                          if (2 < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x30) = DAT_092080f8;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x30));
                            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar7 + 0x38) = DAT_0921f960;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x38));
                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x40) = DAT_0921fbe0;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x40));
                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x48) = DAT_0920e9f8;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x48));
                                  if (6 < *(uint *)(lVar7 + 0x18)) {
                                    *(undefined8 *)(lVar7 + 0x50) = DAT_09207dd8;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x50));
                                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                                      *(undefined8 *)(lVar7 + 0x58) = DAT_092041b8;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x58));
                                      if (8 < *(uint *)(lVar7 + 0x18)) {
                                        *(undefined8 *)(lVar7 + 0x60) = DAT_091fcdb0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x60));
                                        if (9 < *(uint *)(lVar7 + 0x18)) {
                                          *(undefined8 *)(lVar7 + 0x68) = DAT_09212188;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x68));
                                          if (10 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + 0x70) = DAT_09204390;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x70));
                                            if (0xb < *(uint *)(lVar7 + 0x18)) {
                                              *(undefined8 *)(lVar7 + 0x78) = DAT_09201b58;
                                              thunk_FUN_03f5d7b8();
                                              lVar4 = thunk_FUN_03f6aadc(0);
                                              if ((lVar4 != 0) &&
                                                 (lVar4 = System_AppDomain__GetAssemblies(lVar4,0),
                                                 lVar4 != 0)) {
                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                if (0 < (int)uVar1) {
                                                  uVar12 = 0;
                                                  do {
                                                    if (uVar1 <= uVar12) goto LAB_0732e9cc;
                                                    plVar6 = *(long **)(lVar4 + (long)(int)uVar12 *
                                                                                8 + 0x20);
                                                    if (plVar6 == (long *)0x0) goto LAB_0732e9d0;
                                                    uVar8 = (**(code **)(*plVar6 + 0x338))
                                                                      (plVar6,*(undefined8 *)
                                                                               (*plVar6 + 0x340));
                                                    if ((uVar8 & 1) == 0) {
                                                      lVar9 = (**(code **)(*plVar6 + 0x2a8))
                                                                        (plVar6,*(undefined8 *)
                                                                                 (*plVar6 + 0x2b0));
                                                      if (lVar9 == 0) goto LAB_0732e9d0;
                                                      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                                                        uVar2 = *(undefined8 *)(lVar9 + 0x10);
                                                        uVar8 = 0;
                                                        uVar11 = *(ulong *)(lVar7 + 0x18) &
                                                                 0xffffffff;
                                                        do {
                                                          if (uVar11 <= uVar8) goto LAB_0732e9cc;
                                                          plVar10 = *(long **)(*(long *)(
                                                  DAT_09183668 + 0xb8) + 0x30);
                                                  if (plVar10 == (long *)0x0) goto LAB_0732e9d0;
                                                  uVar11 = (**(code **)(*plVar10 + 0x1c8))
                                                                     (plVar10,uVar2,
                                                                      *(undefined8 *)
                                                                       (lVar7 + 0x20 + uVar8 * 8),1,
                                                                      *(undefined8 *)
                                                                       (*plVar10 + 0x1d0));
                                                  if ((uVar11 & 1) != 0) goto LAB_0732e9a0;
                                                  uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
                                                  uVar8 = uVar8 + 1;
                                                  } while ((long)uVar8 <
                                                           (long)(int)*(uint *)(lVar7 + 0x18));
                                                  }
                                                  IngameDebugConsole_DebugLogConsole__SearchAssemblyForConsoleMethods
                                                            (plVar6);
                                                  }
LAB_0732e9a0:
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  uVar12 = uVar12 + 1;
                                                  } while ((int)uVar12 < (int)uVar1);
                                                }
                                                return;
                                              }
                                              goto LAB_0732e9d0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_0732e9cc;
                    }
                  }
                  goto LAB_0732e9d0;
                }
              }
            }
          }
        }
LAB_0732e9cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_0732e9d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

