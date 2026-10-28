// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.DiagnosticsExtensions$$.cctor
// address: 0x7dcb268
// body: available
// range: 0x7dcb268-0x7dcb81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcb814 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7dcb818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_095261a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_09183b18);
    FUN_03f5c2a4(&DAT_091a0d58);
    FUN_03f5c2a4(&DAT_091a0d48);
    FUN_03f5c2a4(&DAT_09176f58);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_091730b0);
    FUN_03f5c2a4(&DAT_09173368);
    FUN_03f5c2a4(&DAT_09173358);
    FUN_03f5c2a4(&DAT_0921a958);
    FUN_03f5c2a4(&DAT_0921d628);
    FUN_03f5c2a4(&DAT_092201f0);
    FUN_03f5c2a4(&DAT_09222a88);
    FUN_03f5c2a4(&DAT_0920e848);
    FUN_03f5c2a4(&DAT_09223660);
    FUN_03f5c2a4(&DAT_09225248);
    FUN_03f5c2a4(&DAT_09212000);
    FUN_03f5c2a4(&DAT_09218af0);
    FUN_03f5c2a4(&DAT_09211ff0);
    FUN_03f5c2a4(&DAT_0921a390);
    FUN_03f5c2a4(&DAT_09218210);
    FUN_03f5c2a4(&DAT_09225640);
    FUN_03f5c2a4(&DAT_09221ef0);
    FUN_03f5c2a4(&DAT_09216fa8);
    FUN_03f5c2a4(&DAT_0921ebc0);
    FUN_03f5c2a4(&DAT_092186e8);
    FUN_03f5c2a4(&DAT_09224648);
    FUN_03f5c2a4(&DAT_092246f0);
    FUN_03f5c2a4(&DAT_0921b8b0);
    DAT_095261a0 = 1;
  }
  uVar2 = DAT_09189db0;
  **(undefined1 **)(DAT_09183b18 + 0xb8) = 1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  System_Text_RegularExpressions_Regex___ctor(uVar2,DAT_09216fa8,8,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183b18 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  lVar4 = thunk_FUN_03f9944c(DAT_09176f58);
  FUN_06fd76bc(lVar4,DAT_091a0d48);
  lVar1 = DAT_095353f8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
  if (lVar4 != 0) {
    FUN_06fd8454(lVar4,uVar2,DAT_09225640,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09218210,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_092186e8,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09218af0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0921a390,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0921a958,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0921b8b0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0921d628,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0921ebc0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_092201f0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09221ef0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09222a88,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09223660,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09224648,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_092246f0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09225248,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091730b0,0);
    FUN_06fd8454(lVar4,uVar2,DAT_0920e848,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173358,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09211ff0,DAT_091a0d58);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173368,0);
    FUN_06fd8454(lVar4,uVar2,DAT_09212000,DAT_091a0d58);
    plVar5 = (long *)(*(long *)(DAT_09183b18 + 0xb8) + 0x10);
    *plVar5 = lVar4;
    thunk_FUN_03f5d7b8(plVar5,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

