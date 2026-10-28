// rea decompile_all
// name: AnhPD.FoodOrder.UIHintFlexibleHelper$$TryGetSpriteBounds
// address: 0x4129cf4
// body: available
// range: 0x4129cf4-0x4129f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4129f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4129f28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_UIHintFlexibleHelper__TryGetSpriteBounds(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  if ((DAT_095162f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdbe8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162f3 = 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((param_1 != 0) && (lVar2 = FUN_04b7ceb4(param_1,0,DAT_091cdbe8), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((int)uVar1 < 1) {
      iVar7 = 0;
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_04129f24;
        uVar3 = UnityEngine_Renderer__get_enabled(lVar5,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = UnityEngine_SpriteRenderer__get_sprite(lVar5,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
          if ((uVar3 & 1) != 0) {
            if (iVar7 == 0) {
              UnityEngine_Renderer__get_bounds(&local_68,lVar5,0);
              param_2[1] = CONCAT44(fStack_5c,fStack_60);
              *param_2 = local_68;
              param_2[2] = CONCAT44(fStack_54,fStack_58);
            }
            else {
              UnityEngine_Renderer__get_bounds(&local_68,lVar5,0);
              fVar13 = fStack_60 - fStack_54;
              fVar8 = fStack_60 + fStack_54;
              fVar16 = *(float *)(param_2 + 1) - *(float *)((long)param_2 + 0x14);
              fVar19 = (float)local_68 - fStack_5c;
              fVar12 = (float)((ulong)local_68 >> 0x20);
              fVar20 = fVar12 - fStack_58;
              fVar9 = *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14);
              fVar11 = (float)local_68 + fStack_5c;
              fVar12 = fVar12 + fStack_58;
              fVar17 = (float)*param_2;
              fVar10 = (float)*(undefined8 *)((long)param_2 + 0xc);
              fVar21 = fVar17 - fVar10;
              fVar18 = (float)((ulong)*param_2 >> 0x20);
              fVar15 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
              fVar22 = fVar18 - fVar15;
              fVar17 = fVar17 + fVar10;
              fVar18 = fVar18 + fVar15;
              if (fVar13 <= fVar16) {
                fVar16 = fVar13;
              }
              if (fVar9 <= fVar13) {
                fVar9 = fVar13;
              }
              uVar3 = CONCAT44(fVar20,fVar19) ^
                      (CONCAT44(fVar20,fVar19) ^ CONCAT44(fVar22,fVar21)) &
                      CONCAT44(-(uint)(fVar22 < fVar20),-(uint)(fVar21 < fVar19));
              uVar14 = CONCAT44(fVar20,fVar19) ^
                       (CONCAT44(fVar20,fVar19) ^ CONCAT44(fVar18,fVar17)) &
                       CONCAT44(-(uint)(fVar20 < fVar18),-(uint)(fVar19 < fVar17));
              fVar17 = (float)uVar3;
              fVar10 = (float)(uVar3 >> 0x20);
              fVar13 = (fVar9 - fVar16) * 0.5;
              fVar18 = ((float)uVar14 - fVar17) * 0.5;
              fVar15 = ((float)(uVar14 >> 0x20) - fVar10) * 0.5;
              fVar17 = fVar17 + fVar18;
              fVar10 = fVar10 + fVar15;
              fVar9 = (fVar16 + fVar13) - fVar13;
              fVar13 = fVar13 + fVar16 + fVar13;
              fVar16 = fVar17 - fVar18;
              fVar19 = fVar10 - fVar15;
              uVar14 = CONCAT44(fVar19,fVar16);
              fVar18 = fVar18 + fVar17;
              fVar15 = fVar15 + fVar10;
              uVar3 = CONCAT44(fVar15,fVar18);
              if (fVar8 <= fVar9) {
                fVar9 = fVar8;
              }
              uVar14 = uVar14 ^ (uVar14 ^ CONCAT44(fVar12,fVar11)) &
                                ~CONCAT44(-(uint)(fVar19 < fVar12),-(uint)(fVar16 < fVar11));
              uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar12,fVar11)) &
                              ~CONCAT44(-(uint)(fVar12 < fVar15),-(uint)(fVar11 < fVar18));
              if (fVar13 <= fVar8) {
                fVar13 = fVar8;
              }
              fVar12 = (float)uVar14;
              fVar17 = (float)(uVar14 >> 0x20);
              fVar8 = ((float)uVar3 - fVar12) * 0.5;
              fVar11 = ((float)(uVar3 >> 0x20) - fVar17) * 0.5;
              fVar16 = (fVar13 - fVar9) * 0.5;
              *(ulong *)((long)param_2 + 0xc) = CONCAT44(fVar11,fVar8);
              *(float *)((long)param_2 + 0x14) = fVar16;
              *param_2 = CONCAT44(fVar17 + fVar11,fVar12 + fVar8);
              *(float *)(param_2 + 1) = fVar9 + fVar16;
            }
            iVar7 = 1;
          }
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    return iVar7;
  }
LAB_04129f24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

