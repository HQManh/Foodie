// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode.<IETweenToScaleAndTint>d__44$$MoveNext
// address: 0x434dc6c
// body: available
// range: 0x434dc6c-0x434dfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434dfb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434dfb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_Map_HomeLevelNode_<IETweenToScaleAndTint>d__44__MoveNext
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((DAT_095177a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce0);
    DAT_095177a1 = 1;
  }
  lVar8 = *(long *)(param_4 + 0x28);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
LAB_0434dd18:
    fVar10 = (float)UnityEngine_Time__get_time(0);
    fVar14 = *(float *)(param_4 + 0x44);
    if (fVar14 <= fVar10) {
      if (lVar8 != 0) {
        CakeOrder_Home_Map_HomeLevelNode__SetScaleAndTintImmediate
                  (*(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x30),
                   *(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),
                   *(undefined4 *)(param_4 + 0x3c),lVar8);
        return 0;
      }
    }
    else if ((lVar8 != 0) && (lVar3 = *(long *)(lVar8 + 0xa0), lVar3 != 0)) {
      fVar10 = (float)UnityEngine_Transform__get_localScale(lVar3,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      fVar15 = *(float *)(param_4 + 0x40);
      fVar21 = *(float *)(param_4 + 0x48);
      fVar11 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
      uVar19 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
      fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar21 = fVar21 * fVar12;
      uVar6 = CONCAT44(fVar14,fVar10);
      fVar12 = 1.0;
      if (fVar21 <= 1.0) {
        fVar12 = fVar21;
      }
      fVar22 = 0.0;
      if (0.0 <= fVar21) {
        fVar22 = fVar12;
      }
      fVar14 = fVar14 + ((float)((ulong)uVar19 >> 0x20) * fVar15 - fVar14) * fVar22;
      uVar20 = (ulong)(uint)(param_3 + (fVar11 * fVar15 - param_3) * fVar22);
      uVar17 = (ulong)(uint)fVar14;
      UnityEngine_Transform__set_localScale
                (CONCAT44(fVar14,fVar10 + ((float)uVar19 * fVar15 - fVar10) * fVar22),uVar17,uVar20,
                 lVar3,0);
      lVar3 = *(long *)(lVar8 + 0x98);
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          fVar12 = (float)uVar6;
          fVar14 = (float)uVar20;
          fVar10 = (float)uVar17;
          if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar5) {
            *(undefined8 *)(param_4 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
            *(undefined4 *)(param_4 + 0x10) = 1;
            return 1;
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar5) {
LAB_0434dfb4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
          if (lVar3 == 0) break;
          fVar11 = (float)UnityEngine_SpriteRenderer__get_color(lVar3,0);
          lVar4 = *(long *)(param_4 + 0x50);
          if (lVar4 == 0) break;
          lVar5 = lVar5 + 1;
          if (*(uint *)(lVar4 + 0x18) <= (int)lVar5 - 1U) goto LAB_0434dfb4;
          lVar4 = lVar4 + lVar7;
          fVar22 = *(float *)(param_4 + 0x48);
          fVar23 = *(float *)(lVar4 + 0x28);
          fVar15 = *(float *)(lVar4 + 0x2c);
          fVar24 = *(float *)(lVar4 + 0x20);
          fVar25 = *(float *)(lVar4 + 0x24);
          lVar7 = lVar7 + 0x10;
          fVar21 = (float)UnityEngine_Time__get_deltaTime(0);
          fVar22 = fVar22 * fVar21;
          fVar21 = 1.0;
          if (fVar22 <= 1.0) {
            fVar21 = fVar22;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar22) {
            fVar16 = fVar21;
          }
          uVar17 = (ulong)(uint)(fVar10 + (fVar25 - fVar10) * fVar16);
          uVar20 = (ulong)(uint)(fVar14 + (fVar23 - fVar14) * fVar16);
          uVar6 = (ulong)(uint)(fVar12 + (fVar15 - fVar12) * fVar16);
          UnityEngine_SpriteRenderer__set_color
                    (fVar11 + (fVar24 - fVar11) * fVar16,uVar17,uVar20,uVar6,lVar3,0);
          lVar3 = *(long *)(lVar8 + 0x98);
        } while (lVar3 != 0);
      }
    }
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    fVar10 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_4 + 0x44) = fVar10 + *(float *)(param_4 + 0x20);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      lVar3 = *(long *)(lVar8 + 0x98);
      *(float *)(param_4 + 0x48) = *(float *)(*(long *)(lVar8 + 0xb8) + 0x40) * 50.0;
      if (lVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lVar3 + 0x18);
      }
      lVar3 = FUN_03f5c394(DAT_0917fce0,uVar2);
      plVar9 = (long *)(param_4 + 0x50);
      *plVar9 = lVar3;
      thunk_FUN_03f5d7b8(plVar9,lVar3);
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        lVar5 = 2;
        do {
          uVar6 = lVar5 - 2;
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6) goto LAB_0434dd18;
          lVar7 = *(long *)(lVar8 + 0xb0);
          if (lVar7 == 0) break;
          if ((*(uint *)(lVar7 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6))
          goto LAB_0434dfb4;
          puVar1 = (undefined8 *)(lVar7 + lVar5 * 0x10);
          uVar13 = puVar1[1];
          uVar19 = *puVar1;
          uVar18 = *(undefined8 *)(param_4 + 0x30);
          puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x10);
          puVar1[1] = CONCAT44((float)((ulong)uVar13 >> 0x20) *
                               (float)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20),
                               (float)uVar13 * (float)*(undefined8 *)(param_4 + 0x38));
          *puVar1 = CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar18 >> 0x20),
                             (float)uVar19 * (float)uVar18);
          lVar5 = lVar5 + 1;
          lVar3 = *(long *)(param_4 + 0x50);
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

