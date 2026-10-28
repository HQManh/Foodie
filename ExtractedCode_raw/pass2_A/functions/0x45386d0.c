// rea decompile_all
// name: DG.Tweening.DOTween$$Shake
// address: 0x45386d0
// body: available
// range: 0x45386d0-0x4538ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4538edc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4538ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween__Shake
               (float param_1,float param_2,float param_3,ulong param_4,float param_5,
               undefined8 param_6,undefined8 param_7,int param_8,uint param_9,uint param_10,
               uint param_11,int param_12)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  undefined4 uVar26;
  float fVar27;
  float local_f8;
  float local_f4;
  float local_d4;
  undefined8 local_b0;
  float local_a8;
  
  local_f4 = (float)param_4;
  if ((DAT_095186a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091831c8);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc040);
    FUN_03f5c2a4(&DAT_091cc050);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_095186a3 = 1;
  }
  fVar16 = param_2;
  if ((param_10 & 1) != 0) {
    if (DAT_0951690d == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_0951690d = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar16 = SQRT(local_f4 * local_f4 + param_2 * param_2 + param_3 * param_3);
  }
  uVar7 = (uint)((float)param_8 * param_1);
  if ((int)uVar7 < 3) {
    uVar7 = 2;
  }
  uVar2 = 2;
  if ((float)param_8 * param_1 != INFINITY) {
    uVar2 = uVar7;
  }
  uVar11 = (ulong)uVar2;
  fVar23 = (float)(int)uVar2;
  fVar21 = fVar16 / fVar23;
  lVar5 = FUN_03f5c394(DAT_09180528,uVar2);
  fVar13 = 0.0;
  uVar8 = 0;
  do {
    fVar17 = param_1 / fVar23;
    if ((param_11 & 1) != 0) {
      fVar17 = ((float)((int)uVar8 + 1) / fVar23) * param_1;
    }
    uVar19 = (ulong)(uint)fVar17;
    if (lVar5 == 0) goto LAB_04538ee0;
    uVar7 = *(uint *)(lVar5 + 0x18);
    if (uVar7 <= uVar8) goto LAB_04538edc;
    fVar13 = fVar13 + fVar17;
    lVar10 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    *(float *)(lVar5 + lVar10 + 0x20) = fVar17;
  } while (uVar11 != uVar8);
  lVar10 = 0;
  do {
    if ((ulong)uVar7 * 4 - lVar10 == 0) goto LAB_04538edc;
    lVar1 = lVar5 + lVar10;
    lVar10 = lVar10 + 4;
    *(float *)(lVar1 + 0x20) = (param_1 / fVar13) * *(float *)(lVar1 + 0x20);
  } while (uVar11 * 4 - lVar10 != 0);
  fVar13 = (float)UnityEngine_Random__Range(0,0x43b40000,0);
  lVar10 = FUN_03f5c394(DAT_091807f8,uVar11);
  if ((param_11 & 1) == 0) {
    fVar21 = 0.0;
  }
  uVar8 = 0;
  uVar7 = param_9 ^ 1 | param_10;
  pfVar12 = (float *)(lVar10 + 0x28);
  local_f8 = param_3;
  local_d4 = param_2;
  do {
    if (uVar8 < uVar2 - 1) {
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      puVar9 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      uVar26 = *puVar9;
      fVar23 = (float)puVar9[1];
      uVar25 = puVar9[2];
      uVar22 = puVar9[3];
      if (param_12 == 1) {
        if (uVar8 != 0) {
          fVar17 = (float)UnityEngine_Random__Range(0,param_5,0);
          fVar13 = fVar13 + -180.0 + fVar17;
        }
        if ((uVar7 & 1) != 0) {
          fVar17 = 0.0;
LAB_04538a28:
          uVar26 = UnityEngine_Random__Range(fVar17,param_5,0);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          local_b0 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
          local_a8 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
          fVar23 = local_a8;
          uVar26 = UnityEngine_Quaternion__Internal_AngleAxis(uVar26,&local_b0,0);
          uVar25 = (uint)uVar19;
          uVar22 = (uint)param_4;
        }
      }
      else {
        if (uVar8 != 0) {
          fVar17 = (float)UnityEngine_Random__Range(-param_5,param_5,0);
          fVar13 = fVar13 + -180.0 + fVar17;
        }
        fVar17 = -param_5;
        if ((uVar7 & 1) != 0) goto LAB_04538a28;
      }
      uVar18 = (undefined4)uVar19;
      iVar3 = *(int *)(DAT_091831c8 + 0xe4);
      if ((param_10 & 1) == 0) {
        if ((param_9 & 1) == 0) {
          if (iVar3 == 0) {
            FUN_03f5c424();
          }
          fVar17 = fVar16;
          uVar14 = DG_Tweening_Core_DOTweenUtils__Vector3FromAngle(fVar13,fVar16,0);
          uVar19 = (ulong)uVar25;
          param_4 = (ulong)uVar22;
          fVar17 = (float)UnityEngine_Quaternion__op_Multiply
                                    (uVar26,fVar23,uVar19,param_4,uVar14,fVar17,uVar18,0);
        }
        else {
          if (iVar3 == 0) {
            FUN_03f5c424();
          }
          fVar23 = fVar16;
          fVar17 = (float)DG_Tweening_Core_DOTweenUtils__Vector3FromAngle(fVar13,0);
        }
        if (lVar10 == 0) goto LAB_04538ee0;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_04538edc;
        pfVar12[-2] = fVar17;
        pfVar12[-1] = fVar23;
        *pfVar12 = (float)uVar19;
        fVar16 = fVar16 - fVar21;
      }
      else {
        if (iVar3 == 0) {
          FUN_03f5c424();
        }
        fVar17 = fVar16;
        uVar14 = DG_Tweening_Core_DOTweenUtils__Vector3FromAngle(fVar13,fVar16,0);
        uVar19 = (ulong)uVar25;
        uVar15 = UnityEngine_Quaternion__op_Multiply
                           (uVar26,fVar23,uVar19,uVar22,uVar14,fVar17,uVar18,0);
        param_4 = uVar15 & 0xffffffff;
        fVar17 = (float)uVar19;
        if (DAT_0951877f == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951877f = '\x01';
        }
        fVar20 = (float)uVar15;
        fVar27 = fVar17 * fVar17;
        fVar24 = fVar27 + fVar20 * fVar20 + fVar23 * fVar23;
        if (local_d4 * local_d4 < fVar24) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            param_4 = (ulong)(uint)(local_d4 * (fVar20 / SQRT(fVar24)));
            if (DAT_0951877f == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951877f = '\x01';
            }
          }
          else {
            param_4 = (ulong)(uint)(local_d4 * (fVar20 / SQRT(fVar24)));
          }
        }
        fVar20 = (float)param_4;
        fVar24 = fVar27 + fVar23 * fVar23 + fVar20 * fVar20;
        if (local_f8 * local_f8 < fVar24) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar23 = local_f8 * (fVar23 / SQRT(fVar24));
            if (DAT_0951877f == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951877f = '\x01';
            }
          }
          else {
            fVar23 = local_f8 * (fVar23 / SQRT(fVar24));
          }
        }
        fVar24 = fVar20 * fVar20 + fVar23 * fVar23;
        fVar27 = fVar27 + fVar24;
        if (local_f4 * local_f4 < fVar27) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar17 = local_f4 * (fVar17 / SQRT(fVar27));
        }
        if (DAT_0951690c == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951690c = '\x01';
        }
        if (DAT_0951690d == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951690d = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        cVar4 = DAT_0951877f;
        fVar24 = SQRT(fVar24 + fVar17 * fVar17);
        if (fVar24 <= 1e-05) {
          fVar17 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
          uVar6 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
        }
        else {
          fVar17 = fVar17 / fVar24;
          uVar19 = CONCAT44(fVar23,fVar20);
          uVar6 = CONCAT44(fVar23 / fVar24,fVar20 / fVar24);
        }
        if (lVar10 == 0) {
LAB_04538ee0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar8) {
LAB_04538edc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(ulong *)(pfVar12 + -2) =
             CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar16,(float)uVar6 * fVar16);
        *pfVar12 = fVar16 * fVar17;
        if (cVar4 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951877f = '\x01';
        }
        fVar16 = fVar16 - fVar21;
        fVar23 = local_f4 * local_f4 + local_f8 * local_f8 + local_d4 * local_d4;
        if (fVar16 * fVar16 < fVar23) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar23 = SQRT(fVar23);
          param_4 = (ulong)(uint)local_f4;
          uVar19 = (ulong)(uint)(local_f8 / fVar23);
          local_d4 = fVar16 * (local_d4 / fVar23);
          local_f8 = fVar16 * (local_f8 / fVar23);
          local_f4 = fVar16 * (local_f4 / fVar23);
        }
      }
    }
    else {
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar10 == 0) goto LAB_04538ee0;
      if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_04538edc;
      fVar23 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
      *(undefined8 *)(pfVar12 + -2) = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
      *pfVar12 = fVar23;
    }
    uVar8 = uVar8 + 1;
    pfVar12 = pfVar12 + 3;
    if (uVar11 == uVar8) {
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = DG_Tweening_DOTween__ToArray(param_6,param_7,lVar10,lVar5);
      uVar6 = FUN_04b265a4(uVar6,DAT_091cc040);
      FUN_04b265cc(uVar6,2,DAT_091cc050);
      return;
    }
  } while( true );
}

