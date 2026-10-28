// rea decompile_all
// name: Lean.Touch.LeanTwistRotate$$Update
// address: 0x7351250
// body: available
// range: 0x7351250-0x735184b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7351848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTwistRotate__Update
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09520777 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09520777 = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(param_5,0);
  if (lVar1 != 0) {
    fVar7 = (float)UnityEngine_Transform__get_localPosition(lVar1,0);
    fVar20 = param_3;
    fVar21 = param_2;
    lVar1 = UnityEngine_Component__get_transform(param_5,0);
    if (lVar1 != 0) {
      fVar8 = (float)UnityEngine_Transform__get_localRotation(lVar1,0);
      if (param_5[4] != 0) {
        fVar13 = fVar20;
        uVar2 = Lean_Touch_LeanFingerFilter__UpdateAndGetFingers(param_5[4],0);
        fVar9 = (float)Lean_Touch_LeanGesture__GetTwistRadians();
        fVar15 = 57.29578;
        fVar9 = fVar9 * 57.29578;
        if (fVar9 != 0.0) {
          if ((char)param_5[6] == '\0') {
            fVar15 = 57.29578;
            plVar3 = (long *)UnityEngine_Component__get_transform(param_5,0);
            if ((plVar3 == (long *)0x0) || (*plVar3 != DAT_09189c98)) {
              puVar5 = (undefined8 *)(*param_5 + 0x1c8);
              puVar6 = (undefined8 *)(*param_5 + 0x1d0);
            }
            else {
              puVar5 = (undefined8 *)(*param_5 + 0x1b8);
              puVar6 = (undefined8 *)(*param_5 + 0x1c0);
            }
          }
          else {
            local_70 = 0;
            Lean_Touch_LeanGesture__TryGetScreenCenter(uVar2,&local_70);
            uVar2 = local_70;
            fVar13 = local_70._4_4_;
            plVar3 = (long *)UnityEngine_Component__get_transform(param_5,0);
            fVar15 = (float)uVar2;
            if ((plVar3 == (long *)0x0) || (*plVar3 != DAT_09189c98)) {
              (**(code **)(*param_5 + 0x1a8))(fVar9,param_5,*(undefined8 *)(*param_5 + 0x1b0));
              puVar5 = (undefined8 *)(*param_5 + 0x1c8);
              puVar6 = (undefined8 *)(*param_5 + 0x1d0);
            }
            else {
              (**(code **)(*param_5 + 0x198))(fVar9,param_5,*(undefined8 *)(*param_5 + 0x1a0));
              puVar5 = (undefined8 *)(*param_5 + 0x1b8);
              puVar6 = (undefined8 *)(*param_5 + 0x1c0);
            }
          }
          (*(code *)*puVar5)(fVar9,param_5,*puVar6);
        }
        fVar23 = *(float *)(param_5 + 7);
        fVar9 = *(float *)((long)param_5 + 0x3c);
        fVar26 = *(float *)(param_5 + 8);
        lVar1 = UnityEngine_Component__get_transform(param_5,0);
        if (lVar1 != 0) {
          fVar10 = (float)UnityEngine_Transform__get_localPosition(lVar1,0);
          local_70 = CONCAT44(fVar21,fVar8);
          local_68 = CONCAT44(param_4,fVar20);
          fVar9 = fVar9 + (fVar15 - param_2);
          fVar24 = *(float *)((long)param_5 + 0x4c);
          fVar28 = *(float *)(param_5 + 10);
          fVar26 = fVar26 + (fVar13 - param_3);
          fVar27 = *(float *)((long)param_5 + 0x44);
          fVar25 = *(float *)(param_5 + 9);
          *(float *)(param_5 + 7) = fVar23 + (fVar10 - fVar7);
          *(float *)((long)param_5 + 0x3c) = fVar9;
          *(float *)(param_5 + 8) = fVar26;
          fVar10 = param_3;
          fVar11 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_70,0);
          fVar13 = fVar10;
          fVar15 = fVar9;
          fVar23 = fVar26;
          lVar1 = UnityEngine_Component__get_transform(param_5,0);
          if (lVar1 != 0) {
            fVar12 = (float)UnityEngine_Transform__get_localRotation(lVar1,0);
            uVar29 = *(undefined4 *)((long)param_5 + 0x34);
            fVar16 = (fVar9 * fVar23 + fVar10 * fVar12 + fVar11 * fVar13) - fVar26 * fVar15;
            fVar22 = ((fVar10 * fVar13 - fVar11 * fVar12) - fVar9 * fVar15) - fVar26 * fVar23;
            fVar19 = (fVar26 * fVar12 + fVar10 * fVar15 + fVar9 * fVar13) - fVar11 * fVar23;
            fVar13 = (fVar11 * fVar15 + fVar10 * fVar23 + fVar26 * fVar13) - fVar9 * fVar12;
            fVar15 = (fVar25 * fVar13 + fVar28 * fVar16 + fVar27 * fVar22) - fVar24 * fVar19;
            fVar9 = (fVar24 * fVar16 + fVar28 * fVar19 + fVar25 * fVar22) - fVar27 * fVar13;
            *(float *)((long)param_5 + 0x44) = fVar15;
            *(float *)(param_5 + 9) = fVar9;
            *(float *)((long)param_5 + 0x4c) =
                 (fVar27 * fVar19 + fVar28 * fVar13 + fVar24 * fVar22) - fVar25 * fVar16;
            *(float *)(param_5 + 10) =
                 ((fVar28 * fVar22 - fVar27 * fVar16) - fVar25 * fVar19) - fVar24 * fVar13;
            uVar14 = UnityEngine_Time__get_deltaTime(0);
            if (*(int *)(DAT_09183140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar13 = (float)CW_Common_CwHelper__DampenFactor(uVar29,uVar14,0);
            lVar1 = param_5[7];
            fVar26 = *(float *)(param_5 + 8);
            if (DAT_09515ce6 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515ce6 = '\x01';
            }
            fVar23 = 1.0;
            if (fVar13 <= 1.0) {
              fVar23 = fVar13;
            }
            fVar11 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
            uVar2 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
            fVar10 = 0.0;
            if (0.0 <= fVar13) {
              fVar10 = fVar23;
            }
            uVar18 = *(undefined8 *)((long)param_5 + 0x4c);
            uVar17 = *(undefined8 *)((long)param_5 + 0x44);
            if (DAT_09515ed5 == '\0') {
              FUN_03f5c2a4(&DAT_091898c0);
              DAT_09515ed5 = '\x01';
            }
            uStack_78 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
            local_80 = **(undefined8 **)(DAT_091898c0 + 0xb8);
            local_70 = uVar17;
            local_68 = uVar18;
            uVar14 = UnityEngine_Quaternion__Internal_Slerp(fVar13,&local_70,&local_80,0);
            lVar4 = UnityEngine_Component__get_transform(param_5,0);
            if (lVar4 != 0) {
              fVar24 = (float)lVar1;
              fVar25 = (float)((ulong)lVar1 >> 0x20);
              fVar24 = fVar24 + ((float)uVar2 - fVar24) * fVar10;
              fVar25 = fVar25 + ((float)((ulong)uVar2 >> 0x20) - fVar25) * fVar10;
              fVar26 = fVar26 + fVar10 * (fVar11 - fVar26);
              fVar23 = (param_2 + (float)((ulong)param_5[7] >> 0x20)) - fVar25;
              fVar10 = (param_3 + *(float *)(param_5 + 8)) - fVar26;
              UnityEngine_Transform__set_localPosition
                        (CONCAT44(fVar23,(fVar7 + (float)param_5[7]) - fVar24),fVar23,fVar10,lVar4,0
                        );
              lVar1 = UnityEngine_Component__get_transform(param_5,0);
              local_70 = CONCAT44((int)uVar17,uVar14);
              local_68 = CONCAT44(fVar9,fVar15);
              fVar13 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_70,0);
              if (lVar1 != 0) {
                fVar28 = ((param_4 * fVar7 - fVar8 * fVar13) - fVar21 * fVar23) - fVar20 * fVar10;
                fVar27 = (fVar21 * fVar10 + param_4 * fVar13 + fVar8 * fVar7) - fVar20 * fVar23;
                fVar12 = *(float *)((long)param_5 + 0x44);
                fVar16 = *(float *)(param_5 + 9);
                fVar11 = (fVar8 * fVar23 + param_4 * fVar10 + fVar20 * fVar7) - fVar21 * fVar13;
                fVar20 = (fVar20 * fVar13 + param_4 * fVar23 + fVar21 * fVar7) - fVar8 * fVar10;
                fVar7 = *(float *)((long)param_5 + 0x4c);
                fVar21 = *(float *)(param_5 + 10);
                UnityEngine_Transform__set_localRotation
                          ((fVar27 * fVar21 + fVar28 * fVar12 + fVar20 * fVar7) - fVar11 * fVar16,
                           (fVar11 * fVar12 + fVar20 * fVar21 + fVar28 * fVar16) - fVar27 * fVar7,
                           (fVar27 * fVar16 + fVar11 * fVar21 + fVar28 * fVar7) - fVar20 * fVar12,
                           ((fVar28 * fVar21 - fVar27 * fVar12) - fVar20 * fVar16) - fVar11 * fVar7,
                           lVar1,0);
                param_5[7] = CONCAT44(fVar25,fVar24);
                *(float *)(param_5 + 8) = fVar26;
                *(undefined4 *)((long)param_5 + 0x44) = uVar14;
                *(int *)(param_5 + 9) = (int)uVar17;
                *(float *)((long)param_5 + 0x4c) = fVar15;
                *(float *)(param_5 + 10) = fVar9;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

