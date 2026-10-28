// rea decompile_all
// name: CookingGraph.CookingGraphAsset$$.ctor
// address: 0x4408bc8
// body: available
// range: 0x4408bc8-0x44090db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44090d8 to 0x865f398 UnityEngine.ScriptableObject$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphAsset___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_09517eb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182dc8);
    FUN_03f5c2a4(&DAT_09182e10);
    FUN_03f5c2a4(&DAT_091af270);
    FUN_03f5c2a4(&DAT_091acf28);
    FUN_03f5c2a4(&DAT_091abc18);
    FUN_03f5c2a4(&DAT_091acfc0);
    FUN_03f5c2a4(&DAT_091aca60);
    FUN_03f5c2a4(&DAT_091abbd0);
    FUN_03f5c2a4(&DAT_091aea28);
    FUN_03f5c2a4(&DAT_091ae788);
    FUN_03f5c2a4(&DAT_091ac590);
    FUN_03f5c2a4(&DAT_091ad9e8);
    FUN_03f5c2a4(&DAT_091b0fb8);
    FUN_03f5c2a4(&DAT_091ac598);
    FUN_03f5c2a4(&DAT_091aebe0);
    FUN_03f5c2a4(&DAT_091af230);
    FUN_03f5c2a4(&DAT_0917c738);
    FUN_03f5c2a4(&DAT_0917be80);
    FUN_03f5c2a4(&DAT_0917c950);
    FUN_03f5c2a4(&DAT_0917c158);
    FUN_03f5c2a4(&DAT_0917c068);
    FUN_03f5c2a4(&DAT_0917c810);
    FUN_03f5c2a4(&DAT_0917c248);
    FUN_03f5c2a4(&DAT_0917ce80);
    FUN_03f5c2a4(&DAT_0917c270);
    FUN_03f5c2a4(&DAT_0917c4a0);
    FUN_03f5c2a4(&DAT_0917c960);
    FUN_03f5c2a4(&DAT_0917be78);
    FUN_03f5c2a4(&DAT_0917c070);
    FUN_03f5c2a4(&DAT_0917c7c0);
    DAT_09517eb9 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09182e10);
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  System_Object___ctor(lVar1,0);
  *(long *)(param_1 + 0x28) = lVar1;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),lVar1);
  uVar2 = thunk_FUN_03f9944c(DAT_09182dc8);
  CookingGraph_CookingIdTables___ctor();
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c4a0);
  FUN_057e0400(uVar2,DAT_091ad9e8);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ce80);
  FUN_057e0400(uVar2,DAT_091b0fb8);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c270);
  FUN_057e0400(uVar2,DAT_091acfc0);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917be78);
  FUN_057e0400(uVar2,DAT_091abbd0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c070);
  FUN_057e0400(uVar2,DAT_091ac598);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c738);
  FUN_057e0400(uVar2,DAT_091ae788);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c158);
  FUN_057e0400(uVar2,DAT_091aca60);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c960);
  FUN_057e0400(uVar2,DAT_091af270);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917be80);
  FUN_057e0400(uVar2,DAT_091abc18);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c248);
  FUN_057e0400(uVar2,DAT_091acf28);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c950);
  FUN_057e0400(uVar2,DAT_091af230);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c7c0);
  FUN_057e0400(uVar2,DAT_091aea28);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c7c0);
  FUN_057e0400(uVar2,DAT_091aea28);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c810);
  FUN_057e0400(uVar2,DAT_091aebe0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c068);
  FUN_057e0400(uVar2,DAT_091ac590);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar2);
  UnityEngine_ScriptableObject___ctor(param_1,0);
  return;
}

