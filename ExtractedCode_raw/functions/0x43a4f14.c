// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$AddTriangleBounds
// address: 0x43a4f14
// body: available
// range: 0x43a4f14-0x43a51ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a519c to 0x43a3f90 ChocDino.UIFX.ScreenRectFromMeshes$$AddBounds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a51a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChocDino_UIFX_ScreenRectFromMeshes__AddTriangleBounds
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  unkbyte10 *pVar1;
  unkbyte10 *pVar2;
  unkbyte10 *pVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar29;
  ulong uVar28;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_5 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if (*(long *)(param_5 + 0x18) != 0) {
        lVar18 = param_5;
      }
    }
    if (((*(long *)(param_3 + 0x18) != 0) && (uVar5 = *(uint *)(param_4 + 0x18), 2 < (int)uVar5)) &&
       (uVar5 % 3 == 0)) {
      uVar28 = 0xff7fffffff7fffff;
      bVar16 = false;
      lVar4 = lVar18 + 0x23;
      uVar20 = 0;
      auVar22 = _DAT_01a8be50;
      do {
        while( true ) {
          if (((uVar5 <= uVar20) || (uVar5 <= uVar20 + 1)) || (uVar5 <= uVar20 + 2))
          goto LAB_043a51a8;
          uVar7 = *(uint *)(param_4 + (long)(int)uVar20 * 4 + 0x20);
          uVar6 = *(uint *)(param_4 + (long)(int)(uVar20 + 2) * 4 + 0x20);
          if (uVar6 != uVar7) break;
LAB_043a50c0:
          uVar20 = uVar20 + 3;
          if ((int)uVar5 <= (int)uVar20) {
            if (!bVar16) {
              return;
            }
            goto LAB_043a5188;
          }
        }
        uVar8 = *(uint *)(param_4 + (long)(int)(uVar20 + 1) * 4 + 0x20);
        if ((uVar7 == uVar8) || (uVar8 == uVar6)) goto LAB_043a50c0;
        if (lVar18 != 0) {
          uVar19 = *(uint *)(lVar18 + 0x18);
          if (uVar19 <= uVar7) goto LAB_043a51a8;
          if (*(char *)(lVar4 + (long)(int)uVar7 * 4) != '\0') {
            if (uVar19 <= uVar8) goto LAB_043a51a8;
            if (*(char *)(lVar4 + (long)(int)uVar8 * 4) != '\0') {
              if (uVar19 <= uVar6) goto LAB_043a51a8;
              if (*(char *)(lVar4 + (long)(int)uVar6 * 4) != '\0') goto LAB_043a5024;
            }
          }
          goto LAB_043a50c0;
        }
LAB_043a5024:
        uVar19 = (uint)*(long *)(param_3 + 0x18);
        if (((uVar19 <= uVar7) || (uVar19 <= uVar8)) || (uVar19 <= uVar6)) {
LAB_043a51a8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar21 = param_3 + (long)(int)uVar7 * 0xc;
        lVar17 = param_3 + (long)(int)uVar8 * 0xc;
        pVar1 = (unkbyte10 *)(lVar21 + 0x20);
        uVar27 = *(undefined8 *)pVar1;
        fVar33 = *(float *)(lVar21 + 0x28);
        pVar2 = (unkbyte10 *)(lVar17 + 0x20);
        uVar24 = *(undefined8 *)pVar2;
        fVar10 = *(float *)(lVar17 + 0x28);
        fVar23 = (float)uVar24;
        fVar26 = (float)uVar27;
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar29 = (float)((ulong)uVar27 >> 0x20);
        if ((fVar33 - fVar10) * (fVar33 - fVar10) +
            (fVar26 - fVar23) * (fVar26 - fVar23) + (fVar29 - fVar25) * (fVar29 - fVar25) <
            9.9999994e-11) goto LAB_043a50c0;
        lVar17 = param_3 + (long)(int)uVar6 * 0xc;
        pVar3 = (unkbyte10 *)(lVar17 + 0x20);
        uVar31 = *(undefined8 *)pVar3;
        fVar34 = *(float *)(lVar17 + 0x28);
        fVar30 = (float)uVar31;
        fVar32 = (float)((ulong)uVar31 >> 0x20);
        if (((fVar10 - fVar34) * (fVar10 - fVar34) +
             (fVar23 - fVar30) * (fVar23 - fVar30) + (fVar25 - fVar32) * (fVar25 - fVar32) <
             9.9999994e-11) ||
           ((fVar34 - fVar33) * (fVar34 - fVar33) +
            (fVar30 - fVar26) * (fVar30 - fVar26) + (fVar32 - fVar29) * (fVar32 - fVar29) <
            9.9999994e-11)) goto LAB_043a50c0;
        uVar20 = uVar20 + 3;
        bVar16 = true;
        sVar35 = -(ushort)(auVar22._4_4_ < fVar29);
        sVar36 = -(ushort)(auVar22._8_4_ < fVar33);
        sVar37 = -(ushort)(fVar26 < auVar22._12_4_);
        auVar12._10_2_ = (short)((uint)fVar33 >> 0x10);
        auVar12._0_10_ = *pVar1;
        auVar12._12_2_ = (short)uVar27;
        auVar12._14_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar13._4_2_ = sVar35;
        auVar13._0_4_ = (int)(short)-(ushort)(auVar22._0_4_ < fVar26);
        auVar13._6_2_ = sVar35 >> 0xf;
        auVar13._8_2_ = sVar36;
        auVar13._10_2_ = sVar36 >> 0xf;
        auVar13._12_2_ = sVar37;
        auVar13._14_2_ = sVar37 >> 0xf;
        auVar22 = auVar22 ^ (auVar22 ^ auVar12) & ~auVar13;
        auVar15._10_2_ = (short)((uint)fVar10 >> 0x10);
        auVar15._0_10_ = *pVar2;
        auVar15._12_2_ = (short)uVar24;
        auVar15._14_2_ = (short)((ulong)uVar24 >> 0x10);
        auVar11._4_4_ = (int)(short)-(ushort)(auVar22._4_4_ < fVar25);
        auVar11._0_4_ = (int)(short)-(ushort)(auVar22._0_4_ < fVar23);
        auVar11._8_4_ = (int)(short)-(ushort)(auVar22._8_4_ < fVar10);
        auVar11._12_4_ = (int)(short)-(ushort)(fVar23 < auVar22._12_4_);
        auVar22 = auVar22 ^ (auVar22 ^ auVar15) & ~auVar11;
        uVar28 = CONCAT44(fVar29,fVar33) ^
                 (CONCAT44(fVar29,fVar33) ^ uVar28) &
                 (ulong)-(uint)(fVar29 < (float)(uVar28 >> 0x20)) << 0x20;
        sVar36 = -(ushort)(auVar22._4_4_ < fVar32);
        sVar37 = -(ushort)(auVar22._8_4_ < fVar34);
        sVar35 = -(ushort)(fVar30 < auVar22._12_4_);
        uVar28 = CONCAT44(fVar25,fVar10) ^
                 (CONCAT44(fVar25,fVar10) ^ uVar28) &
                 (ulong)-(uint)(fVar25 < (float)(uVar28 >> 0x20)) << 0x20;
        auVar14._10_2_ = (short)((uint)fVar34 >> 0x10);
        auVar14._0_10_ = *pVar3;
        auVar14._12_2_ = (short)uVar31;
        auVar14._14_2_ = (short)((ulong)uVar31 >> 0x10);
        auVar9._4_2_ = sVar36;
        auVar9._0_4_ = (int)(short)-(ushort)(auVar22._0_4_ < fVar30);
        auVar9._6_2_ = sVar36 >> 0xf;
        auVar9._8_2_ = sVar37;
        auVar9._10_2_ = sVar37 >> 0xf;
        auVar9._12_2_ = sVar35;
        auVar9._14_2_ = sVar35 >> 0xf;
        auVar22 = auVar22 ^ (auVar22 ^ auVar14) & ~auVar9;
        uVar28 = CONCAT44(fVar32,fVar34) ^
                 (CONCAT44(fVar32,fVar34) ^ uVar28) &
                 (ulong)-(uint)(fVar32 < (float)(uVar28 >> 0x20)) << 0x20;
      } while ((int)uVar20 < (int)uVar5);
LAB_043a5188:
      ChocDino_UIFX_ScreenRectFromMeshes__AddBounds
                (auVar22,auVar22._4_4_,auVar22._8_4_,auVar22._12_4_,(short)(uVar28 >> 0x20));
      return;
    }
  }
  return;
}

