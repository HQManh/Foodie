// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$DrawBotSlider
// address: 0x4297144
// body: available
// range: 0x4297144-0x42974ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42974f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42974fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__DrawBotSlider
               (float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,ulong param_5
               ,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_64;
  double local_58;
  
  local_64 = param_1;
  if ((DAT_095171ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_0917ff68);
    DAT_095171ca = 1;
  }
  uVar1 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelCardStyle();
  lVar2 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginVertical(uVar1,**(undefined8 **)(lVar2 + 0xb8),0);
  lVar2 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar2 + 0xb8),0);
  uVar1 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelBodyStyle();
  lVar2 = DAT_091c01c8;
  lVar5 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(param_4,uVar1,**(undefined8 **)(lVar2 + 0xb8),0);
  UnityEngine_GUILayout__FlexibleSpace(0);
  uVar1 = System_Single__ToString(&local_64,param_6,0);
  uVar3 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelValueStyle();
  lVar2 = FUN_03f5c394(DAT_0917ff68,1);
  uVar4 = UnityEngine_GUILayout__Width(0x42dc0000,0);
  if (lVar2 == 0) goto LAB_042974f8;
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_042974fc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  thunk_FUN_03f5d7b8();
  UnityEngine_GUILayout__Label(uVar1,uVar3,lVar2,0);
  UnityEngine_GUILayout__EndHorizontal(0);
  fVar6 = local_64;
  lVar2 = FUN_03f5c394(DAT_0917ff68,1);
  uVar1 = UnityEngine_GUILayout__Height(0x42080000,0);
  if (lVar2 == 0) goto LAB_042974f8;
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_042974fc;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8();
  fVar6 = (float)UnityEngine_GUILayout__HorizontalSlider(fVar6,param_2,param_3,lVar2,0);
  if ((param_5 & 1) != 0) {
    dVar8 = modf((double)fVar6,&local_58);
    if (0.0 <= fVar6) {
      if (dVar8 == 0.5) {
        fVar11 = 1.0;
        goto LAB_04297414;
      }
      fVar6 = (float)(int)(fVar6 + 0.5);
    }
    else if (dVar8 == -0.5) {
      fVar11 = -1.0;
LAB_04297414:
      fVar6 = (float)local_58;
      if (((long)local_58 & 1U) != 0) {
        fVar6 = (float)local_58 + fVar11;
      }
    }
    else {
      fVar6 = (float)(int)(fVar6 + -0.5);
    }
  }
  fVar11 = local_64;
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar9 = ABS(fVar11);
  fVar7 = ABS(fVar6);
  if (ABS(fVar6) <= fVar9) {
    fVar7 = fVar9;
  }
  fVar10 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar9 = fVar7 * 1e-06;
  if (fVar7 * 1e-06 <= fVar10) {
    fVar9 = fVar10;
  }
  if (fVar9 <= ABS(fVar11 - fVar6)) {
    if (param_7 == 0) {
LAB_042974f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(param_7 + 0x18))
              (fVar6,*(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x28));
  }
  UnityEngine_GUILayout__EndVertical(0);
  return;
}

