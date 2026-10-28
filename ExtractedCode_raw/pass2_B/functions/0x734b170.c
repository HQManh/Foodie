// rea decompile_all
// name: Lean.Touch.LeanFingerTap$$HandleFingerTap
// address: 0x734b170
// body: available
// range: 0x734b170-0x734b373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734b35c to 0x6480470 FUN_06480470 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x734b370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanFingerTap__HandleFingerTap(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09520719 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be158);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be168);
    FUN_03f5c2a4(&DAT_091be058);
    DAT_09520719 = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (param_2 == 0) goto LAB_0734b370;
    if (*(char *)(param_2 + 0x44) != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (param_2 == 0) goto LAB_0734b370;
    uVar3 = Lean_Touch_LeanFinger__get_IsOverGui(param_2);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    if (param_2 == 0) goto LAB_0734b370;
    if (*(int *)(param_2 + 0x1c) != *(int *)(param_1 + 0x30)) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (0 < iVar1) {
    if (param_2 == 0) goto LAB_0734b370;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_2 + 0x1c) / iVar1;
    }
    if (*(int *)(param_2 + 0x1c) != iVar2 * iVar1) {
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0734b370;
    uVar3 = Lean_Common_LeanSelectable__get_IsSelected(*(long *)(param_1 + 0x28),0);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0647fad4(*(long *)(param_1 + 0x38),param_2,DAT_091be070);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (param_2 == 0) goto LAB_0734b370;
    FUN_0647f11c(*(long *)(param_1 + 0x40),*(undefined4 *)(param_2 + 0x1c),DAT_091be058);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    if (param_2 == 0) goto LAB_0734b370;
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    uVar6 = *(undefined4 *)(param_2 + 0x40);
    uVar4 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091876f0);
    }
    Lean_Touch_LeanScreenDepth__Convert(uVar5,uVar6,param_1 + 0x48,uVar4,0);
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0734b370;
    FUN_06480954(*(long *)(param_1 + 0x68),DAT_091be168);
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_06480470(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
                 *(long *)(param_1 + 0x70),DAT_091be158);
    return;
  }
LAB_0734b370:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

