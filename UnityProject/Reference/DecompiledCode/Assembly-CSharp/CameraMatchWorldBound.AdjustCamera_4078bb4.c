// rea decompile_all
// name: CameraMatchWorldBound$$AdjustCamera
// address: 0x4078bb4
// body: available
// range: 0x4078bb4-0x40790d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40790d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CameraMatchWorldBound__AdjustCamera
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_88;
  float fStack_84;
  long local_80;
  long local_78;
  float local_24;
  
  if ((DAT_09515c2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c2e = 1;
  }
  local_88 = 0.0;
  fStack_84 = 0.0;
  local_80 = 0;
  local_24 = 0.0;
  local_78 = param_4;
  thunk_FUN_03f5d7b8(&local_78,param_4);
  local_80 = FUN_04a6a14c(param_4,DAT_091c52f8);
  thunk_FUN_03f5d7b8(&local_80,local_80);
  lVar3 = local_80;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (local_80 == 0) goto LAB_040790d4;
  iVar1 = UnityEngine_Camera__get_pixelWidth(local_80,0);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_80 == 0) goto LAB_040790d4;
  iVar1 = UnityEngine_Camera__get_pixelHeight(local_80,0);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_80 == 0) goto LAB_040790d4;
  fVar5 = (float)UnityEngine_Camera__get_aspect(local_80,0);
  if (fVar5 <= 0.0) {
    return 0;
  }
  if (0xfe < (uint)ABS(fVar5) >> 0x17) {
    return 0;
  }
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
  UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x20),0);
  fStack_84 = param_2;
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
  local_88 = (float)UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x20),0);
  if (fStack_84 <= 0.0) {
    return 0;
  }
  if (0xfe < (uint)ABS(fStack_84) >> 0x17) {
    return 0;
  }
  if (local_88 <= 0.0) {
    return 0;
  }
  if (0xfe < (uint)ABS(local_88) >> 0x17) {
    return 0;
  }
  if (local_80 == 0) goto LAB_040790d4;
  fVar5 = fStack_84;
  uVar2 = UnityEngine_Camera__get_orthographic(local_80,0);
  if ((uVar2 & 1) == 0) {
    if (((local_80 == 0) ||
        (fVar6 = (float)UnityEngine_Camera__get_aspect(local_80,0), local_80 == 0)) ||
       (lVar3 = UnityEngine_Component__get_transform(local_80,0), lVar3 == 0)) goto LAB_040790d4;
    UnityEngine_Transform__get_position(lVar3,0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
    fVar16 = param_3;
    UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
    local_24 = ABS(param_3 - fVar16);
    if (*(int *)(param_4 + 0x28) == 1) {
      if (local_88 / fStack_84 <= fVar6) goto LAB_04078e2c;
LAB_04078fb8:
      fVar5 = fStack_84;
      CameraMatchWorldBound__<AdjustCamera>g__AdjustPerspectivePosByQuadHeight_9_3
                (param_4,&local_88,&local_24);
    }
    else if (*(int *)(param_4 + 0x28) == 0) {
      if (local_88 / fStack_84 <= fVar6) goto LAB_04078fb8;
LAB_04078e2c:
      fVar5 = fStack_84;
      CameraMatchWorldBound__<AdjustCamera>g__AdjustPerspectivePosByQuadWidth_9_2
                (param_4,&local_88,&local_24);
    }
    if ((local_80 == 0) || (lVar3 = UnityEngine_Component__get_transform(local_80,0), lVar3 == 0))
    goto LAB_040790d4;
    fVar6 = (float)UnityEngine_Transform__get_position(lVar3,0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
    UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
    if (local_24 <= 0.0) {
      return 0;
    }
    if (0xfe < (uint)ABS(local_24) >> 0x17) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar6)) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar5)) {
      return 0;
    }
    fVar16 = fVar16 - local_24;
    if (ABS(fVar16) == INFINITY) {
      return 0;
    }
    if (ABS(fVar5) == INFINITY) {
      return 0;
    }
    if (ABS(fVar6) == INFINITY) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar16)) {
      return 0;
    }
  }
  else {
    if (local_80 == 0) goto LAB_040790d4;
    fVar6 = (float)UnityEngine_Camera__get_aspect(local_80,0);
    if (*(int *)(param_4 + 0x28) == 1) {
      if (local_88 / fStack_84 <= fVar6) goto LAB_04078db4;
LAB_04078e50:
      param_3 = local_88 / fStack_84;
      fVar16 = fStack_84 * 0.5;
      fVar5 = fStack_84;
    }
    else {
      fVar16 = 1.0;
      if (*(int *)(param_4 + 0x28) == 0) {
        if (local_88 / fStack_84 <= fVar6) goto LAB_04078e50;
LAB_04078db4:
        param_3 = local_88 / fStack_84;
        fVar16 = (local_88 / fVar6) * 0.5;
        fVar5 = 0.5;
      }
    }
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
    fVar7 = (float)UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
    fVar15 = *(float *)(param_4 + 0x30);
    UnityEngine_Transform__get_localScale(*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_040790d4;
    fVar14 = *(float *)(param_4 + 0x30);
    fVar17 = *(float *)(param_4 + 0x34);
    fVar11 = fVar5;
    fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0x20),0);
    fVar13 = param_3;
    fVar12 = fVar11;
    fVar9 = (float)FUN_0408ed34(0);
    fVar10 = fVar16 * *(float *)(param_4 + 0x2c);
    if (fVar10 <= 0.0) {
      return 0;
    }
    if (0xfe < (uint)ABS(fVar10) >> 0x17) {
      return 0;
    }
    fVar6 = ((fVar7 * fVar15 * 0.5 + fVar8) - fVar6 * fVar16 * fVar14) + fVar9 * 10.0;
    if (0x7f800000 < (uint)ABS(fVar6)) {
      return 0;
    }
    fVar5 = ((fVar5 * fVar17 * 0.5 + fVar11) - fVar16 * fVar17) + fVar12 * 10.0;
    if (0x7f800000 < (uint)ABS(fVar5)) {
      return 0;
    }
    fVar16 = param_3 + 0.0 + fVar13 * 10.0;
    if (ABS(fVar16) == INFINITY) {
      return 0;
    }
    if (ABS(fVar5) == INFINITY) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar16)) {
      return 0;
    }
    if (ABS(fVar6) == INFINITY) {
      return 0;
    }
    if (local_80 == 0) goto LAB_040790d4;
    UnityEngine_Camera__set_orthographicSize(local_80,0);
  }
  if ((local_80 != 0) && (lVar3 = UnityEngine_Component__get_transform(local_80,0), lVar3 != 0)) {
    UnityEngine_Transform__set_position(fVar6,fVar5,fVar16,lVar3,0);
    return 1;
  }
LAB_040790d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

