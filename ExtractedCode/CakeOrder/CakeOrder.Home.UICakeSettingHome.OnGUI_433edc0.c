// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$OnGUI
// address: 0x433edc0
// body: available
// range: 0x433edc0-0x433f4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433f42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433f4a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__OnGUI(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int local_84;
  
  if ((DAT_09517741 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_0917ff68);
    FUN_03f5c2a4(&DAT_09184b38);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09206d20);
    FUN_03f5c2a4(&DAT_091f5d40);
    FUN_03f5c2a4(&DAT_092134c8);
    DAT_09517741 = 1;
  }
  local_84 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x218) == '\0') {
    return;
  }
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_GUI__get_matrix(&local_110,0);
  uStack_c8 = uStack_108;
  local_d0 = local_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  uStack_98 = uStack_d8;
  uStack_a0 = uStack_e0;
  iVar1 = UnityEngine_Screen__get_width(0);
  fVar17 = 1.0;
  if (1.0 <= (float)iVar1 / 640.0) {
    fVar17 = (float)iVar1 / 640.0;
  }
  if (DAT_09515ce9 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce9 = '\x01';
  }
  puVar7 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
  fVar13 = (float)puVar7[2];
  fVar14 = (float)puVar7[3];
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
    puVar7 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
  }
  uVar15 = *puVar7;
  uVar16 = puVar7[1];
  if (*(int *)(DAT_09184b38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_GUIUtility__ScaleAroundPivot(fVar17 * fVar13,fVar17 * fVar14,uVar15,uVar16,0);
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar13 = (float)NEON_fminnm((float)iVar1 / fVar17 + -20.0,0x441b0000);
  fVar14 = ((float)iVar2 / fVar17) * 0.7;
  CakeOrder_Home_UICakeSettingHome__EnsureLevelListStyles(param_1);
  UnityEngine_GUILayout__BeginArea
            (((float)iVar1 / fVar17 - fVar13) * 0.5,((float)iVar2 / fVar17 - fVar14) * 0.5,fVar13,
             fVar14,*(undefined8 *)(param_1 + 0x238),0);
  lVar3 = DAT_091c01c8;
  lVar8 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar8 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar8 = *(long *)(lVar3 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar3 + 0xb8),0);
  uVar4 = System_String__Concat(DAT_09206d20,*(undefined8 *)(param_1 + 0x220),DAT_091f5d40,0);
  lVar3 = DAT_091c01c8;
  lVar8 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar8 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar8 = *(long *)(lVar3 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  UnityEngine_GUILayout__Label(uVar4,**(undefined8 **)(lVar3 + 0xb8),0);
  UnityEngine_GUILayout__FlexibleSpace(0);
  lVar3 = FUN_03f5c394(DAT_0917ff68,2);
  uVar4 = UnityEngine_GUILayout__Width(0x42200000,0);
  if (lVar3 == 0) goto LAB_0433f42c;
  if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0433f4a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),uVar4);
  uVar4 = UnityEngine_GUILayout__Height(0x42080000,0);
  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0433f4a0;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  thunk_FUN_03f5d7b8();
  uVar5 = UnityEngine_GUILayout__Button(DAT_092134c8,lVar3,0);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  UnityEngine_GUILayout__EndHorizontal(0);
  lVar3 = DAT_091c01c8;
  uVar16 = *(undefined4 *)(param_1 + 0x230);
  uVar15 = *(undefined4 *)(param_1 + 0x234);
  lVar8 = *(long *)(DAT_091c01c8 + 0x38);
  if (lVar8 == 0) {
    FUN_03f95ac8(DAT_091c01c8);
    lVar8 = *(long *)(lVar3 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  uVar16 = UnityEngine_GUILayout__BeginScrollView(uVar16,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar3 = DAT_09188ad0;
  *(undefined4 *)(param_1 + 0x230) = uVar16;
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x234) = uVar15;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
LAB_0433f244:
    uVar5 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_0433f42c;
    uVar5 = System_String__op_Equality
                      (*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x20),
                       *(undefined8 *)(param_1 + 0x220),0);
    if ((uVar5 & 1) == 0) goto LAB_0433f244;
    if (*(long *)(param_1 + 0x110) == 0) goto LAB_0433f42c;
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x110) + 0x2c);
  }
  lVar3 = *(long *)(param_1 + 0x228);
  if (lVar3 != 0) {
    uVar10 = 0;
    do {
      lVar8 = DAT_091c01c8;
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar10) {
        UnityEngine_GUILayout__EndScrollView(0);
        UnityEngine_GUILayout__EndArea(0);
        if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_148 = uStack_c8;
        local_150 = local_d0;
        uStack_138 = uStack_b8;
        uStack_140 = uStack_c0;
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        UnityEngine_GUI__set_matrix(&local_150,0);
        return;
      }
      iVar1 = (int)uVar10 + (int)((uVar10 & 0xffffffff) / 5) * -5;
      puVar9 = (undefined8 *)(param_1 + 0x248);
      if (iVar1 == 0) {
        lVar3 = *(long *)(DAT_091c01c8 + 0x38);
        if (lVar3 == 0) {
          FUN_03f95ac8(DAT_091c01c8);
          lVar3 = *(long *)(lVar8 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        UnityEngine_GUILayout__BeginHorizontal(**(undefined8 **)(lVar3 + 0xb8),0);
        lVar3 = *(long *)(param_1 + 0x228);
        if (uVar5 != uVar10) {
          puVar9 = (undefined8 *)(param_1 + 0x240);
        }
        if (lVar3 == 0) break;
      }
      else if (uVar5 != uVar10) {
        puVar9 = (undefined8 *)(param_1 + 0x240);
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_0433f4a0;
      uVar11 = *puVar9;
      uVar12 = *(undefined8 *)(lVar3 + uVar10 * 8 + 0x20);
      lVar3 = FUN_03f5c394(DAT_0917ff68,2);
      uVar4 = UnityEngine_GUILayout__Width((fVar13 + -24.0) / 5.0,0);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0433f4a0;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),uVar4);
      uVar4 = UnityEngine_GUILayout__Height(0x42300000,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0433f4a0;
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_03f5d7b8();
      uVar6 = UnityEngine_GUILayout__Button(uVar12,uVar11,lVar3,0);
      if ((uVar6 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x140);
        local_84 = (int)uVar10 + 1;
        uVar4 = System_Int32__ToString(&local_84,0);
        if (lVar3 == 0) break;
        TMPro_TMP_InputField__set_text(lVar3,uVar4,0);
        CakeOrder_Home_UICakeSettingHome__CheatMoveProgressToLevel(param_1,uVar10 & 0xffffffff);
      }
      if (iVar1 == 4) {
LAB_0433f418:
        UnityEngine_GUILayout__EndHorizontal(0);
        lVar3 = *(long *)(param_1 + 0x228);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x228);
        if (lVar3 == 0) break;
        if (uVar10 == *(int *)(lVar3 + 0x18) - 1) goto LAB_0433f418;
      }
      uVar10 = uVar10 + 1;
    } while (lVar3 != 0);
  }
LAB_0433f42c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

