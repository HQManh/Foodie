// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingFlightPresentation.Motion$$Advance
// address: 0x44d6cd8
// body: available
// range: 0x44d6cd8-0x44d70d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d6e64 to 0x44d6990 CookOrder.Cooking.Implement.CookingFlightPresentation.Motion$$Cancel (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d70d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingFlightPresentation_Motion__Advance
               (float param_1,long param_2)

{
  char cVar1;
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
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_095182fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbea8);
    DAT_095182fb = 1;
  }
  if (*(char *)(param_2 + 0xa4) != '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x88);
      param_1 = *(float *)(param_2 + 0xa0) + param_1;
      *(float *)(param_2 + 0xa0) = param_1;
      if (lVar3 != 0) {
        fVar10 = 0.001;
        if (0.001 <= *(float *)(lVar3 + 0x10)) {
          fVar10 = *(float *)(lVar3 + 0x10);
        }
        fVar11 = 0.0;
        param_1 = param_1 / fVar10;
        fVar10 = 1.0;
        if (param_1 <= 1.0) {
          fVar10 = param_1;
        }
        fVar9 = 0.0;
        if (0.0 <= param_1) {
          fVar9 = fVar10;
        }
        fVar5 = fVar9;
        if (*(long *)(lVar3 + 0x28) != 0) {
          fVar11 = 0.0;
          fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(fVar9,*(long *)(lVar3 + 0x28),0);
          lVar3 = *(long *)(param_2 + 0x88);
          if (lVar3 == 0) goto LAB_044d70d0;
        }
        fVar6 = fVar9;
        if (*(long *)(lVar3 + 0x30) != 0) {
          fVar6 = (float)UnityEngine_AnimationCurve__Evaluate(fVar9,*(long *)(lVar3 + 0x30),0);
          lVar3 = *(long *)(param_2 + 0x88);
          if (lVar3 == 0) goto LAB_044d70d0;
        }
        if (*(long *)(lVar3 + 0x38) == 0) {
          fVar7 = sinf(fVar9 * 3.1415927);
        }
        else {
          fVar7 = (float)UnityEngine_AnimationCurve__Evaluate(fVar9,*(long *)(lVar3 + 0x38),0);
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar3 = *(long *)(param_2 + 0x10);
          fVar13 = *(float *)(param_2 + 0x30);
          uVar4 = *(undefined8 *)(param_2 + 0x28);
          fVar8 = (float)UnityEngine_Transform__get_position(*(long *)(param_2 + 0x18),0);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          if (lVar3 != 0) {
            fVar7 = fVar7 * *(float *)(param_2 + 0x84);
            fVar14 = (float)uVar4;
            fVar15 = (float)((ulong)uVar4 >> 0x20);
            uVar4 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
            fVar10 = fVar15 + (fVar10 - fVar15) * fVar5 + (float)((ulong)uVar4 >> 0x20) * fVar7;
            UnityEngine_Transform__set_position
                      (CONCAT44(fVar10,fVar14 + (fVar8 - fVar14) * fVar5 + (float)uVar4 * fVar7),
                       fVar10,fVar13 + fVar5 * (fVar11 - fVar13) +
                              *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * fVar7,lVar3,0);
            if (*(long *)(param_2 + 0x10) != 0) {
              fVar10 = (float)*(undefined8 *)(param_2 + 0x40);
              fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
              fVar11 = fVar11 + ((float)((ulong)*(undefined8 *)(param_2 + 0x4c) >> 0x20) - fVar11) *
                                fVar6;
              UnityEngine_Transform__set_localScale
                        (CONCAT44(fVar11,fVar10 + ((float)*(undefined8 *)(param_2 + 0x4c) - fVar10)
                                                  * fVar6),fVar11,
                         *(float *)(param_2 + 0x48) +
                         fVar6 * (*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x48)),
                         *(long *)(param_2 + 0x10),0);
              if (fVar9 < 1.0) {
                return;
              }
              if (*(long *)(param_2 + 0x18) != 0) {
                lVar3 = *(long *)(param_2 + 0x10);
                UnityEngine_Transform__get_position(*(long *)(param_2 + 0x18),0);
                if (lVar3 != 0) {
                  UnityEngine_Transform__set_position(lVar3,0);
                  uVar4 = *(undefined8 *)(param_2 + 0x78);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
                  if ((uVar2 & 1) != 0) {
                    if (*(long *)(param_2 + 0x78) == 0) goto LAB_044d70d0;
                    UnityEngine_Rendering_SortingGroup__set_sortingOrder
                              (*(long *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80),0);
                  }
                  cVar1 = DAT_09517ea7;
                  fVar10 = *(float *)(param_2 + 0x54);
                  uVar4 = *(undefined8 *)(param_2 + 0x4c);
                  uVar12 = *(undefined8 *)(param_2 + 0x58);
                  fVar11 = *(float *)(param_2 + 0x60);
                  *(undefined1 *)(param_2 + 0xa4) = 1;
                  if (cVar1 == '\0') {
                    FUN_03f5c2a4(&DAT_09187e80);
                    DAT_09517ea7 = '\x01';
                  }
                  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  fVar9 = (float)uVar4 - (float)uVar12;
                  fVar5 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
                  fVar10 = fVar10 - fVar11;
                  if (1e-05 < SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar5 * fVar5)) {
                    if (*(long *)(param_2 + 0x88) == 0) goto LAB_044d70d0;
                    uVar4 = DG_Tweening_ShortcutExtensions__DOScale
                                      (*(undefined4 *)(param_2 + 0x58),
                                       *(undefined4 *)(param_2 + 0x5c),
                                       *(undefined4 *)(param_2 + 0x60),
                                       *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x44),
                                       *(undefined8 *)(param_2 + 0x10),0);
                    if (*(long *)(param_2 + 0x88) == 0) goto LAB_044d70d0;
                    FUN_04d95dc4(uVar4,*(undefined8 *)(*(long *)(param_2 + 0x88) + 0x48),
                                 DAT_091dbea8);
                  }
                  lVar3 = *(long *)(param_2 + 0x98);
                  if (lVar3 != 0) {
                    (**(code **)(lVar3 + 0x18))
                              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                    lVar3 = *(long *)(param_2 + 0x90);
                    if (lVar3 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x044d70cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar3 + 0x18))
                              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_044d70d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  CookOrder_Cooking_Implement_CookingFlightPresentation_Motion__Cancel(param_2);
  return;
}

