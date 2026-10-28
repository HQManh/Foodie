// rea decompile_all
// name: Lean.Touch.LeanFingerUpdate$$HandleFingerUpdate
// address: 0x734c034
// body: available
// range: 0x734c034-0x734c46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734c444 to 0x64829f0 FUN_064829f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x734c468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanFingerUpdate__HandleFingerUpdate
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  if ((DAT_0952072d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be158);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be0e8);
    FUN_03f5c2a4(&DAT_091be168);
    FUN_03f5c2a4(&DAT_091be1e8);
    DAT_0952072d = 1;
  }
  if (*(char *)(param_4 + 0x20) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    if (*(char *)(param_5 + 0x44) != '\0') {
      return;
    }
  }
  if (*(char *)(param_4 + 0x21) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    uVar1 = Lean_Touch_LeanFinger__get_IsOverGui(param_5);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  if (*(char *)(param_4 + 0x22) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    uVar7 = *(undefined8 *)(param_5 + 0x3c);
    uVar9 = *(undefined8 *)(param_5 + 0x34);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    fVar5 = (float)uVar7 - (float)uVar9;
    fVar8 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (SQRT(fVar5 * fVar5 + fVar8 * fVar8) <= 0.0) {
      return;
    }
  }
  if (*(char *)(param_4 + 0x23) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    if ((*(char *)(param_5 + 0x18) != '\0') && (*(char *)(param_5 + 0x19) == '\0')) {
      return;
    }
  }
  if (*(char *)(param_4 + 0x24) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    if ((*(char *)(param_5 + 0x18) == '\0') && (*(char *)(param_5 + 0x19) != '\0')) {
      return;
    }
  }
  if (*(char *)(param_4 + 0x25) != '\0') {
    if (param_5 == 0) goto LAB_0734c468;
    if (*(int *)(param_5 + 0x10) == -0x2a) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_0734c468;
    uVar1 = Lean_Common_LeanSelectable__get_IsSelected(*(long *)(param_4 + 0x28),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    FUN_0647fad4(*(long *)(param_4 + 0x30),param_5,DAT_091be070);
  }
  if (param_5 == 0) {
LAB_0734c468:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar5 = (float)*(undefined8 *)(param_5 + 0x3c) - (float)*(undefined8 *)(param_5 + 0x34);
  fVar8 = (float)((ulong)*(undefined8 *)(param_5 + 0x3c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_5 + 0x34) >> 0x20);
  if (*(int *)(param_4 + 0x38) == 2) {
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar3 = (float)Lean_Touch_LeanTouch__get_ScreenFactor();
  }
  else {
    if (*(int *)(param_4 + 0x38) != 0) goto LAB_0734c270;
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar3 = (float)Lean_Touch_LeanTouch__get_ScalingFactor();
  }
  fVar5 = fVar5 * fVar3;
  fVar8 = fVar8 * fVar3;
LAB_0734c270:
  fVar5 = fVar5 * *(float *)(param_4 + 0x3c);
  fVar8 = fVar8 * *(float *)(param_4 + 0x3c);
  if (*(long *)(param_4 + 0x40) != 0) {
    FUN_06480470(CONCAT44(fVar8,fVar5),fVar8,*(long *)(param_4 + 0x40),DAT_091be158);
  }
  lVar2 = *(long *)(param_4 + 0x48);
  if (lVar2 != 0) {
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0647ff8c(SQRT(fVar5 * fVar5 + fVar8 * fVar8),lVar2,DAT_091be0e8);
  }
  uVar6 = *(undefined4 *)(param_5 + 0x34);
  fVar5 = *(float *)(param_5 + 0x38);
  uVar7 = UnityEngine_Component__get_gameObject(param_4,0);
  if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091876f0);
  }
  fVar3 = (float)Lean_Touch_LeanScreenDepth__Convert(uVar6,fVar5,param_4 + 0x50,uVar7,0);
  uVar6 = *(undefined4 *)(param_5 + 0x3c);
  fVar10 = *(float *)(param_5 + 0x40);
  fVar8 = param_3;
  uVar7 = UnityEngine_Component__get_gameObject(param_4,0);
  fVar4 = (float)Lean_Touch_LeanScreenDepth__Convert(uVar6,fVar10,param_4 + 0x50,uVar7,0);
  if (*(long *)(param_4 + 0x70) != 0) {
    FUN_06480954(fVar3,fVar5,param_3,*(long *)(param_4 + 0x70),DAT_091be168);
  }
  if (*(long *)(param_4 + 0x78) != 0) {
    FUN_06480954(fVar4,fVar10,fVar8,*(long *)(param_4 + 0x78),DAT_091be168);
  }
  if (*(long *)(param_4 + 0x80) != 0) {
    FUN_06480954(fVar4 - fVar3,fVar10 - fVar5,fVar8 - param_3,*(long *)(param_4 + 0x80),DAT_091be168
                );
  }
  if (*(long *)(param_4 + 0x88) == 0) {
    return;
  }
  FUN_064829f0(fVar3,fVar5,param_3,fVar4,fVar10,fVar8,*(long *)(param_4 + 0x88),DAT_091be1e8);
  return;
}

