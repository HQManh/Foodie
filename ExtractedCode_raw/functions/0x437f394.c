// rea decompile_all
// name: CakeOrder.InGame.BackgroundColorGradingControl$$ApplySkinPresetOnGameplayEnter
// address: 0x437f394
// body: available
// range: 0x437f394-0x437f57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437f578 to 0x437eca8 CakeOrder.InGame.BackgroundColorGradingControl$$SetPresetImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437f57c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_BackgroundColorGradingControl__ApplySkinPresetOnGameplayEnter(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0951795e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091819c0);
    FUN_03f5c2a4(&DAT_091b4d10);
    FUN_03f5c2a4(&DAT_091b4d18);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951795e = 1;
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517987 == '\0') {
    FUN_03f5c2a4(&DAT_091819c0);
    DAT_09517987 = '\x01';
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = *(undefined8 *)(*(long *)(DAT_091819c0 + 0xb8) + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_05a8f088(DAT_091b4d18), (uVar1 & 1) == 0)) {
    return;
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517987 == '\0') {
    FUN_03f5c2a4(&DAT_091819c0);
    DAT_09517987 = '\x01';
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar5 = *(long *)(*(long *)(DAT_091819c0 + 0xb8) + 0x20);
    if (DAT_09517987 == '\0') {
      FUN_03f5c2a4(&DAT_091819c0);
      DAT_09517987 = '\x01';
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(DAT_091819c0 + 0xb8) + 0x20);
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(DAT_091819c0 + 0xb8) + 0x20);
  lVar2 = *(long *)(DAT_091b4d10 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (((**(long **)(lVar2 + 0xb8) != 0) && (lVar3 != 0)) &&
     (uVar4 = CakeOrder_InGame_BackgroundColorGradingControl__GetPresetForSkin
                        (lVar3,*(undefined8 *)(**(long **)(lVar2 + 0xb8) + 0x30)), lVar5 != 0)) {
    CakeOrder_InGame_BackgroundColorGradingControl__SetPresetImmediate(lVar5,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

