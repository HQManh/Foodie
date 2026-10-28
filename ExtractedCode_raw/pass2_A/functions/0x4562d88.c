// rea decompile_all
// name: DG.Tweening.Plugins.PathPlugin$$SetChangeValue
// address: 0x4562d88
// body: available
// range: 0x4562d88-0x45631b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45631a8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45631ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45631b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45631b4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_PathPlugin__SetChangeValue
               (undefined1 param_1 [16],undefined8 param_2,float param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  
  if ((DAT_0951883f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182880);
    FUN_03f5c2a4(&DAT_091831c8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091807f8);
    FUN_03f5c2a4(&DAT_091ff9a0);
    DAT_0951883f = 1;
  }
  if ((param_6 == 0) || (plVar6 = *(long **)(param_6 + 0x48), plVar6 == (long *)0x0))
  goto LAB_045631ac;
  lVar11 = *plVar6;
  if (lVar11 == DAT_09184b68) {
    lVar11 = UnityEngine_GameObject__get_transform(plVar6,0);
  }
  else {
    if ((*(byte *)(lVar11 + 0x130) < *(byte *)(DAT_09182880 + 0x130)) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(DAT_09182880 + 0x130) * 8 + -8) !=
        DAT_09182880)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    lVar11 = UnityEngine_Component__get_transform(plVar6,0);
  }
  if (*(int *)(param_6 + 0x144) == 1) {
    if (lVar11 == 0) goto LAB_045631ac;
    uVar7 = UnityEngine_Transform__GetParent(lVar11,0);
    *(undefined8 *)(param_6 + 0x188) = uVar7;
    thunk_FUN_03f5d7b8(param_6 + 0x188,uVar7);
  }
  lVar10 = *(long *)(param_6 + 0x130);
  if (lVar10 == 0) goto LAB_045631ac;
  if (*(char *)(lVar10 + 0x3c) != '\0') goto LAB_04563184;
  lVar10 = *(long *)(param_6 + 0x1b0);
  if (lVar10 == 0) goto LAB_045631ac;
  uVar7 = (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
  lVar10 = *(long *)(param_6 + 0x130);
  if (lVar10 == 0) goto LAB_045631ac;
  memmove((void *)(lVar10 + 0x58),(void *)(param_6 + 0x140),0x70);
  thunk_FUN_03f5d7b8(lVar10 + 0x78,0);
  plVar6 = (long *)(lVar10 + 0x18);
  if ((*plVar6 == 0) || (plVar8 = *(long **)(lVar10 + 0xd8), plVar8 == (long *)0x0))
  goto LAB_045631ac;
  uVar18 = *(ulong *)(*plVar6 + 0x18);
  iVar5 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
  iVar17 = (int)uVar18;
  if (iVar5 < iVar17) {
    lVar12 = *plVar6;
    if (lVar12 == 0) goto LAB_045631ac;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_045631b0;
    uVar21 = *(undefined4 *)(lVar12 + 0x20);
    uVar23 = *(undefined4 *)(lVar12 + 0x24);
    uVar25 = *(undefined4 *)(lVar12 + 0x28);
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar22 = uVar7;
    uVar9 = DG_Tweening_Core_DOTweenUtils__Vector3AreApproximatelyEqual
                      (uVar21,uVar23,uVar25,uVar7,param_2,param_3,0);
    param_4 = (undefined4)uVar22;
    if ((uVar9 & 1) == 0) goto LAB_04562f74;
    uVar16 = 0;
  }
  else {
LAB_04562f74:
    uVar16 = 1;
  }
  if (*(char *)(param_6 + 0x150) == '\0') {
LAB_04563044:
    bVar4 = false;
    uVar3 = uVar16;
  }
  else {
    lVar12 = *plVar6;
    if (lVar12 == 0) goto LAB_045631ac;
    if (*(uint *)(lVar12 + 0x18) <= iVar17 - 1U) goto LAB_045631b0;
    lVar14 = lVar12 + (long)(int)(iVar17 - 1U) * 0xc;
    uVar22 = *(undefined8 *)(lVar14 + 0x20);
    fVar24 = *(float *)(lVar14 + 0x28);
    if (*(int *)(lVar10 + 0x20) == 2) {
      if (iVar17 < 3) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogError(DAT_091ff9a0,0);
      }
      else {
        if (*(uint *)(lVar12 + 0x18) <= iVar17 - 3U) goto LAB_045631b0;
        lVar12 = lVar12 + (ulong)(iVar17 - 3U) * 0xc;
        uVar22 = *(undefined8 *)(lVar12 + 0x20);
        fVar24 = *(float *)(lVar12 + 0x28);
      }
    }
    fVar19 = (float)uVar22 - (float)uVar7;
    fVar20 = (float)((ulong)uVar22 >> 0x20) - (float)param_2;
    if ((fVar24 - param_3) * (fVar24 - param_3) + fVar19 * fVar19 + fVar20 * fVar20 < 9.9999994e-11)
    goto LAB_04563044;
    bVar4 = true;
    uVar3 = uVar16 + 1;
  }
  lVar12 = FUN_03f5c394(DAT_091807f8,uVar3 + iVar17);
  if (uVar16 != 0) {
    if (lVar12 == 0) goto LAB_045631ac;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_045631b0;
    *(float *)(lVar12 + 0x28) = param_3;
    *(float *)(lVar12 + 0x20) = (float)uVar7;
    *(float *)(lVar12 + 0x24) = (float)param_2;
  }
  if (0 < iVar17) {
    uVar9 = 0;
    lVar14 = 0x20;
    do {
      lVar15 = *plVar6;
      if (lVar15 == 0) goto LAB_045631ac;
      if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_045631b0;
      if (lVar12 == 0) goto LAB_045631ac;
      if ((ulong)*(uint *)(lVar12 + 0x18) <= uVar16 + uVar9) goto LAB_045631b0;
      puVar13 = (undefined8 *)(lVar15 + lVar14);
      uVar9 = uVar9 + 1;
      puVar1 = (undefined8 *)(lVar12 + (ulong)uVar16 * 0xc + lVar14);
      uVar21 = *(undefined4 *)(puVar13 + 1);
      lVar14 = lVar14 + 0xc;
      *puVar1 = *puVar13;
      *(undefined4 *)(puVar1 + 1) = uVar21;
    } while ((uVar18 & 0xffffffff) != uVar9);
  }
  if (bVar4) {
    if (lVar12 == 0) goto LAB_045631ac;
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_045631b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    puVar13 = (undefined8 *)(lVar12 + 0x20 + (long)(*(int *)(lVar12 + 0x18) + -1) * 0xc);
    uVar21 = *(undefined4 *)(lVar12 + 0x28);
    *puVar13 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined4 *)(puVar13 + 1) = uVar21;
  }
  *(long *)(lVar10 + 0x18) = lVar12;
  thunk_FUN_03f5d7b8(plVar6);
  uVar2 = *(undefined1 *)(param_6 + 0x150);
  uVar21 = *(undefined4 *)(param_6 + 0x148);
  *(char *)(lVar10 + 0x54) = (char)uVar16;
  *(bool *)(lVar10 + 0x55) = bVar4;
  DG_Tweening_Plugins_Core_PathCore_Path__FinalizePath(uVar7,lVar10,uVar2,uVar21);
  uVar21 = (undefined4)param_2;
  if (lVar11 != 0) {
    uVar23 = UnityEngine_Transform__get_rotation(lVar11,0);
    *(undefined4 *)(param_6 + 0x194) = uVar23;
    *(undefined4 *)(param_6 + 0x198) = uVar21;
    *(float *)(param_6 + 0x19c) = param_3;
    *(undefined4 *)(param_6 + 0x1a0) = param_4;
    UnityEngine_Transform__get_eulerAngles(lVar11,0);
    lVar10 = *(long *)(param_6 + 0x130);
    *(float *)(param_6 + 0x1a4) = param_3;
LAB_04563184:
    *(long *)(param_6 + 0x138) = lVar10;
    thunk_FUN_03f5d7b8(param_6 + 0x138);
    return;
  }
LAB_045631ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

