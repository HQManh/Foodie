// rea decompile_all
// name: Lean.Touch.LeanFingerOld$$HandleFingerOld
// address: 0x7349f10
// body: available
// range: 0x7349f10-0x734a0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734a094 to 0x6480470 FUN_06480470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x734a0a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanFingerOld__HandleFingerOld(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((DAT_0952070a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be158);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be168);
    DAT_0952070a = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (param_2 == 0) goto LAB_0734a0a8;
    if (*(char *)(param_2 + 0x44) != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (param_2 == 0) goto LAB_0734a0a8;
    uVar1 = Lean_Touch_LeanFinger__get_IsOverGui(param_2);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0734a0a8;
    uVar1 = Lean_Common_LeanSelectable__get_IsSelected(*(long *)(param_1 + 0x28),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0647fad4(*(long *)(param_1 + 0x30),param_2,DAT_091be070);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    if (param_2 == 0) goto LAB_0734a0a8;
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    uVar4 = *(undefined4 *)(param_2 + 0x40);
    uVar2 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091876f0);
    }
    Lean_Touch_LeanScreenDepth__Convert(uVar3,uVar4,param_1 + 0x38,uVar2,0);
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0734a0a8;
    FUN_06480954(*(long *)(param_1 + 0x58),DAT_091be168);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_06480470(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
                 *(long *)(param_1 + 0x60),DAT_091be158);
    return;
  }
LAB_0734a0a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

