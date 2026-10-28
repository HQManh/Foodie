// rea decompile_all
// name: Utilities.ObjectScatterGroup$$GenerateScatterObjects
// address: 0x45177f8
// body: available
// range: 0x45177f8-0x4517c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4517c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4517c3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void Utilities_ObjectScatterGroup__GenerateScatterObjects(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 in_s3;
  undefined4 uVar29;
  long local_b8 [2];
  float local_a8;
  
  if ((DAT_09518573 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdc78);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518573 = 1;
  }
  local_b8[0] = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_04517c38:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
  if (-1 < iVar4 + -1) {
    do {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_04517c38;
      iVar4 = iVar4 + -1;
      lVar6 = UnityEngine_Transform__GetChild(*(long *)(param_1 + 0x28),iVar4,0);
      if (lVar6 == 0) goto LAB_04517c38;
      uVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar7,0);
    } while (0 < iVar4);
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0)) {
    iVar4 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(char *)(param_1 + 0x54) == '\0') {
      uVar5 = UnityEngine_Random__Range(iVar4,iVar1 + 1,0);
    }
    else {
      uVar5 = Utilities_RandomUtility__GetRange
                        (iVar4,iVar1 + 1,iVar4 * 0x1f7 + iVar1 * 0x1fd,
                         *(undefined4 *)(param_1 + 0x58),0);
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04517c38;
    iVar1 = *(int *)(param_1 + 0x44);
    iVar4 = *(int *)(param_1 + 0x48);
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    lVar6 = Utilities_RandomUtility__GetShuffledIndexArray
                      (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),0);
    lVar8 = Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
                      (*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                       CONCAT44(iVar4,iVar1),(ulong)uVar5,0);
    uVar7 = *(undefined8 *)(param_1 + 0x3c);
    uVar14 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x20);
      if ((lVar10 == 0) || (lVar6 == 0)) goto LAB_04517c38;
      uVar2 = *(uint *)(lVar10 + 0x18);
      iVar4 = 0;
      if (uVar2 != 0) {
        iVar4 = (int)uVar14 / (int)uVar2;
      }
      uVar3 = (int)uVar14 - iVar4 * uVar2;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
LAB_04517c3c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = *(uint *)(lVar6 + (long)(int)uVar3 * 4 + 0x20);
      if (uVar2 <= uVar3) goto LAB_04517c3c;
      uVar12 = *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x20);
        if (lVar10 == 0) goto LAB_04517c38;
        if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_04517c3c;
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uVar12 = *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar10 = FUN_04c35338(uVar12,uVar13,DAT_091d4bc0);
        if (lVar8 == 0) goto LAB_04517c38;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_04517c3c;
        uVar26 = *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8);
        uVar13 = *(undefined8 *)(param_1 + 0x3c);
        uVar12 = uVar26;
        fVar15 = (float)UnityEngine_Random__get_insideUnitCircle(0);
        fVar16 = *(float *)(param_1 + 0x38);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        lVar11 = *(long *)(DAT_0918cbd0 + 0xb8);
        fVar23 = *(float *)(lVar11 + 0xc);
        fVar17 = *(float *)(lVar11 + 0x10);
        fVar18 = *(float *)(lVar11 + 0x14);
        fVar19 = (float)UnityEngine_Random__Range
                                  (*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0)
        ;
        uVar27 = *(undefined4 *)(param_1 + 0x5c);
        local_a8 = (float)UnityEngine_Random__Range(uVar27,*(undefined4 *)(param_1 + 0x60),0);
        uVar24 = 0x3c8efa35;
        local_b8[1] = 0;
        local_a8 = local_a8 * 0.017453292;
        uVar20 = UnityEngine_Quaternion__Internal_FromEulerRad(local_b8 + 1,0);
        lVar11 = *(long *)(param_1 + 0x70);
        uVar29 = in_s3;
        uVar25 = uVar24;
        uVar28 = uVar27;
        UnityEngine_Random__get_value(0);
        if (((lVar11 == 0) || (uVar21 = UnityEngine_Gradient__Evaluate(lVar11,0), lVar10 == 0)) ||
           (lVar11 = UnityEngine_GameObject__get_transform(lVar10,0), lVar11 == 0))
        goto LAB_04517c38;
        fVar22 = ((float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar13 >> 0x20) -
                 (float)((ulong)uVar7 >> 0x20) * 0.5) + (float)uVar12 * fVar16;
        UnityEngine_Transform__SetLocalPositionAndRotation
                  (CONCAT44(fVar22,((float)uVar26 * (float)uVar13 - (float)uVar7 * 0.5) +
                                   fVar15 * fVar16),fVar22,0,uVar20,uVar24,uVar27,in_s3,lVar11,0);
        lVar11 = UnityEngine_GameObject__get_transform(lVar10,0);
        if (lVar11 == 0) goto LAB_04517c38;
        UnityEngine_Transform__set_localScale
                  (fVar23 * fVar19,fVar17 * fVar19,fVar18 * fVar19,lVar11,0);
        uVar9 = FUN_04b7d49c(lVar10,local_b8,DAT_091cdc78);
        in_s3 = uVar20;
        if ((uVar9 & 1) != 0) {
          if (local_b8[0] == 0) goto LAB_04517c38;
          UnityEngine_SpriteRenderer__set_color(uVar21,uVar25,uVar28,local_b8[0],0);
          in_s3 = uVar29;
        }
        UnityEngine_GameObject__SetActive(lVar10,1,0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar5 != uVar14);
  }
  return;
}

