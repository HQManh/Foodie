// rea decompile_all
// name: _GAME.GameUI.PopupController$$OpenPopupLoading
// address: 0x774bf70
// body: available
// range: 0x774bf70-0x774c16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774c108 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774c16c to 0x4ca5ed4 FUN_04ca5ed4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_PopupController__OpenPopupLoading(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09522b73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6070);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091b8638);
    FUN_03f5c2a4(&DAT_092140b8);
    DAT_09522b73 = 1;
  }
  lVar1 = *(long *)(DAT_091b8638 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522bdb == '\0') {
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09522bdb = '\x01';
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = **(undefined8 **)(DAT_09189468 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_092140b8,0);
    return;
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522bdb == '\0') {
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09522bdb = '\x01';
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04ca5ed4(**(undefined8 **)(DAT_09189468 + 0xb8),DAT_091d6070);
  return;
}

