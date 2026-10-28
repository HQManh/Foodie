// rea decompile_all
// name: TrungKien.UI.NewFearther.UINextFeatherButton$$UpdateFeatureAvailable
// address: 0x4086800
// body: available
// range: 0x4086800-0x4086b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4086b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 TrungKien_UI_NewFearther_UINextFeatherButton__UpdateFeatureAvailable(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  int local_68;
  int local_64;
  undefined8 local_58;
  
  if ((DAT_09515c9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_091b4c50);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    FUN_03f5c2a4(&DAT_092260b8);
    DAT_09515c9e = 1;
  }
  local_58 = 0;
  uVar7 = FUN_05a8f088(DAT_091b4c50);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)(DAT_091b4c48 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_04086b5c;
  lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    return 0;
  }
  iVar2 = *(int *)(lVar8 + 0x1c);
  uVar13 = *(undefined8 *)(lVar8 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = TrungKien_UI_NewFearther_UIPopupNewFeather__TryGetNewToolMilestones
                    (uVar13,iVar2,uVar10,(long)&local_58 + 4,&local_58);
  uVar7 = local_58;
  lVar12 = DAT_09188ad0;
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  uVar6 = local_58._4_4_ & ((int)local_58._4_4_ >> 0x1f ^ 0xffffffffU);
  uVar4 = iVar2 - uVar6;
  iVar5 = (int)local_58 - uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  iVar1 = iVar5;
  if ((int)(uVar4 + 1) < iVar5) {
    iVar1 = uVar4 + 1;
  }
  if (0x7ffffffe < uVar4) {
    iVar1 = 1;
  }
  iVar3 = *(int *)(lVar12 + 0xe4);
  *(bool *)(param_1 + 0x80) = iVar2 + 1 == (int)local_58;
  if (iVar3 == 0) {
    FUN_03f5c424();
  }
  uVar9 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar9 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0x38);
    local_64 = iVar1;
    uVar10 = FUN_03f5c42c(DAT_09535420,&local_64);
    local_68 = iVar5;
    uVar13 = FUN_03f5c42c(DAT_09535420,&local_68);
    uVar10 = System_String__Format(DAT_092260b8,uVar10,uVar13,0);
    if (plVar11 == (long *)0x0) goto LAB_04086b5c;
    (**(code **)(*plVar11 + 0x558))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x560));
  }
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar9 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x60);
    uVar10 = TrungKien_UI_NewFearther_UINextFeatherButton__GetToolIcon
                       (param_1,*(undefined8 *)(lVar8 + 0x10),uVar7 & 0xffffffff);
    if (lVar12 == 0) goto LAB_04086b5c;
    UnityEngine_UI_Image__set_sprite(lVar12,uVar10,0);
    lVar12 = *(long *)(param_1 + 0x60);
    if (lVar12 == 0) goto LAB_04086b5c;
    uVar10 = *(undefined8 *)(lVar12 + 0xd8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar10,0);
    UnityEngine_Behaviour__set_enabled(lVar12,uVar6 & 1,0);
  }
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = TrungKien_UI_NewFearther_UIPopupNewFeather__IsRestaurantMilestone
                    (uVar10,uVar7 & 0xffffffff);
  TrungKien_UI_NewFearther_UINextFeatherButton__SetNewLabel(param_1,uVar6 & 1);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
LAB_04086b5c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x68),0,0);
  }
  if (iVar5 < 1) {
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar14 = (float)(iVar1 + -1) / (float)iVar5;
    fVar15 = (float)iVar1 / (float)iVar5;
  }
  TrungKien_UI_NewFearther_UINextFeatherButton__PlayFillAnim(fVar14,fVar15,param_1);
  return 1;
}

