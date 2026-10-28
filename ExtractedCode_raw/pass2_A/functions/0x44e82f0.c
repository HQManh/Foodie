// rea decompile_all
// name: CW.Common.CwFollow$$UpdatePosition
// address: 0x44e82f0
// body: available
// range: 0x44e82f0-0x44e863f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e863c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwFollow__UpdatePosition
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  undefined1 auVar2 [12];
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  
  if ((DAT_095183ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095183ba = 1;
  }
  lVar5 = *(long *)(param_4 + 0x28);
  if (*(int *)(param_4 + 0x20) == 1) {
    lVar3 = UnityEngine_Camera__get_main(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) goto LAB_044e863c;
      lVar5 = UnityEngine_Component__get_transform(lVar3,0);
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar3 = UnityEngine_Component__get_transform(param_4,0);
  if ((lVar3 != 0) && (fVar6 = (float)UnityEngine_Transform__get_position(lVar3,0), lVar5 != 0)) {
    fVar11 = *(float *)(param_4 + 0x40);
    fVar13 = *(float *)(param_4 + 0x44);
    fVar7 = (float)UnityEngine_Transform__TransformPoint(*(undefined4 *)(param_4 + 0x3c),lVar5,0);
    fVar37 = *(float *)(param_4 + 0x30);
    fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
    if (*(int *)(DAT_09183140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = 1.0;
    if (0.0 <= fVar37) {
      fVar9 = powf(2.7182817,-(fVar37 * fVar8));
      fVar9 = 1.0 - fVar9;
    }
    cVar1 = *(char *)(param_4 + 0x35);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      if (cVar1 != '\0') {
        fVar13 = param_3;
      }
      fVar7 = fVar7 - fVar6;
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      fVar37 = 0.0;
      if (0.0 <= fVar9) {
        fVar37 = fVar8;
      }
      param_3 = param_3 + fVar37 * (fVar13 - param_3);
      uVar4 = (ulong)(uint)(param_2 + (fVar11 - param_2) * fVar37);
      uVar12 = 0;
      UnityEngine_Transform__set_position(fVar6 + fVar7 * fVar37,lVar3,0);
      if (*(char *)(param_4 + 0x34) == '\0') {
        return;
      }
      fVar11 = (float)UnityEngine_Transform__get_rotation(lVar5,0);
      uVar15 = (ulong)(uint)*(float *)(param_4 + 0x50);
      uVar17 = 0;
      fVar18 = 0.017453292;
      local_78 = *(float *)(param_4 + 0x50) * 0.017453292;
      local_80 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20) * 0.017453292,
                          (float)*(undefined8 *)(param_4 + 0x48) * 0.017453292);
      fVar8 = local_78;
      fVar37 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_80,0);
      uStack_f8 = (undefined4)uVar17;
      uStack_f4 = (undefined4)((ulong)uVar17 >> 0x20);
      uVar16 = uVar15;
      fVar6 = fVar18;
      fVar13 = fVar8;
      lVar5 = UnityEngine_Component__get_transform(param_4,0);
      fVar14 = (float)uVar16;
      lVar3 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar3 != 0) {
        uVar10 = UnityEngine_Transform__get_rotation(lVar3,0);
        auVar49._8_8_ = uVar12;
        auVar49._0_8_ = uVar4;
        auVar31._8_4_ = uStack_f8;
        auVar31._0_8_ = uVar15;
        local_80 = CONCAT44(fVar13,uVar10);
        auVar19._0_4_ = (float)uVar4;
        auVar19._4_4_ = fVar37;
        auVar27._0_4_ = (float)uVar15;
        auVar26._0_8_ = CONCAT44(param_3,auVar27._0_4_);
        auVar26._8_8_ = uVar17;
        auVar19._12_4_ = (undefined4)((ulong)uVar12 >> 0x20);
        auVar19._8_4_ = fVar8;
        auVar32 = NEON_ext(auVar19,auVar19,0xc,1);
        auVar2._4_8_ = auVar19._8_8_;
        auVar2._0_4_ = fVar8;
        auVar20._0_8_ = auVar2._0_8_ << 0x20;
        auVar20._8_4_ = auVar19._0_4_;
        auVar20._12_4_ = fVar8;
        auVar31._12_4_ = uStack_f4;
        auVar33 = NEON_ext(auVar32,auVar31,8,1);
        auVar35._0_8_ = auVar33._0_8_;
        fVar13 = auVar33._0_4_;
        fVar38 = auVar33._4_4_;
        auVar32._8_4_ = fVar11;
        auVar32._0_8_ = auVar26._0_8_;
        auVar32._12_4_ = auVar19._0_4_;
        auVar39._12_4_ = fVar18;
        auVar39._0_12_ = auVar33._0_12_;
        auVar39 = NEON_ext(auVar39,auVar32,0xc,1);
        auVar40._8_8_ = auVar39._8_8_;
        auVar40._0_4_ = auVar39._0_4_;
        auVar40._4_4_ = auVar19._0_4_;
        auVar41._4_12_ = auVar49._4_12_;
        auVar41._0_4_ = auVar40._0_4_;
        auVar43._0_8_ = auVar41._0_8_;
        auVar43._8_4_ = auVar19._0_4_;
        auVar43._12_4_ = auVar19._12_4_;
        auVar42._8_8_ = auVar43._8_8_;
        auVar42._4_4_ = fVar13;
        auVar42._0_4_ = auVar40._0_4_;
        auVar44._0_12_ = auVar42._0_12_;
        auVar44._12_4_ = fVar38;
        auVar35._12_4_ = auVar33._12_4_;
        auVar35._8_4_ = fVar38;
        auVar34._8_8_ = auVar35._8_8_;
        auVar34._4_4_ = auVar27._0_4_;
        auVar34._0_4_ = fVar13;
        auVar36._0_12_ = auVar34._0_12_;
        auVar36._12_4_ = param_3;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ = auVar19._0_4_;
        auVar23._0_8_ = auVar21._0_8_;
        auVar23._8_4_ = fVar8;
        auVar23._12_4_ = fVar8;
        auVar22._8_8_ = auVar23._8_8_;
        auVar22._4_4_ = auVar39._8_4_;
        auVar22._0_4_ = auVar19._0_4_;
        auVar24._0_12_ = auVar22._0_12_;
        auVar24._12_4_ = auVar39._12_4_;
        auVar45._4_12_ = auVar44._4_12_;
        auVar45._0_4_ = auVar40._0_4_;
        auVar47._0_8_ = auVar45._0_8_;
        auVar47._8_4_ = fVar13;
        auVar47._12_4_ = fVar38;
        auVar46._8_8_ = auVar47._8_8_;
        auVar46._4_4_ = auVar40._0_4_;
        auVar46._0_4_ = auVar40._0_4_;
        auVar48._0_12_ = auVar46._0_12_;
        auVar48._12_4_ = auVar19._0_4_;
        auVar27._4_12_ = auVar26._4_12_;
        auVar29._0_8_ = auVar27._0_8_;
        auVar29._8_4_ = param_3;
        auVar29._12_4_ = uStack_f4;
        auVar28._8_8_ = auVar29._8_8_;
        auVar28._4_4_ = fVar13;
        auVar28._0_4_ = auVar27._0_4_;
        auVar30._0_12_ = auVar28._0_12_;
        auVar30._12_4_ = auVar27._0_4_;
        auVar32 = NEON_ext(auVar24,auVar24,8,1);
        auVar49 = NEON_ext(auVar40,auVar48,0xc,1);
        auVar31 = NEON_ext(auVar30,auVar36,8,1);
        auVar25._0_8_ =
             CONCAT44((fVar38 * fVar7 + auVar19._0_4_ * auVar49._4_4_ + param_3 * fVar37) -
                      auVar32._4_4_ * auVar31._4_4_,
                      (fVar13 * fVar7 + auVar40._0_4_ * auVar49._0_4_ +
                      auVar27._0_4_ * auVar19._0_4_) - auVar32._0_4_ * auVar31._0_4_);
        auVar25._8_4_ =
             (auVar33._8_4_ * fVar7 + auVar39._8_4_ * auVar49._8_4_ + fVar11 * fVar8) -
             auVar32._8_4_ * auVar31._8_4_;
        auVar25._12_4_ =
             ((fVar18 * fVar7 - auVar39._12_4_ * auVar49._12_4_) - auVar19._0_4_ * fVar8) -
             auVar32._12_4_ * auVar31._12_4_;
        uStack_88 = auVar25._8_8_;
        local_90 = auVar25._0_8_;
        local_78 = fVar14;
        fStack_74 = fVar6;
        UnityEngine_Quaternion__Internal_Slerp(fVar9,&local_80,&local_90,0);
        if (lVar5 != 0) {
          UnityEngine_Transform__set_rotation(lVar5,0);
          return;
        }
      }
    }
  }
LAB_044e863c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

