// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$TryGetIconRect
// address: 0x7761004
// body: available
// range: 0x7761004-0x7761287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7761280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761284 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GAME_Bridge_CookOrderBridge__TryGetIconRect(long param_1,long param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float extraout_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09522c38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091c5830);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09522c38 = 1;
  }
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  lVar2 = FUN_03f5c394(DAT_091807f8,4);
  uVar3 = FUN_03f5c394(DAT_0917fc40,2);
  uVar4 = uVar3;
  if (uVar3 == 0) {
LAB_07761280:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar4);
  }
  uVar5 = *(ulong *)(uVar3 + 0x18);
  if ((uVar5 & 0xfffffffe) != 0) {
    uVar6 = uVar5 & 0xffffffff;
    *(undefined1 *)(uVar3 + 0x21) = 1;
    if ((int)uVar5 < 1) {
      uVar4 = 0;
    }
    else {
      fVar13 = 0.0;
      uVar5 = 0;
      do {
        if (uVar6 <= uVar5) goto LAB_07761284;
        if ((param_1 == 0) ||
           (uVar6 = FUN_04a6ac70(param_1,*(undefined1 *)(uVar3 + uVar5 + 0x20),DAT_091c5830),
           uVar4 = uVar6, uVar6 == 0)) goto LAB_07761280;
        uVar1 = *(uint *)(uVar6 + 0x18);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) goto LAB_07761284;
            lVar8 = *(long *)(uVar6 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_07761280;
            uVar9 = *(undefined8 *)(lVar8 + 0xd8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
            if ((uVar4 & 1) == 0) {
              lVar8 = UnityEngine_UI_Graphic__get_rectTransform(lVar8,0);
              uVar4 = 0;
              if ((lVar8 == 0) ||
                 (uVar4 = UnityEngine_RectTransform__GetWorldCorners(lVar8,lVar2,0), lVar2 == 0))
              goto LAB_07761280;
              if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07761284;
              if (param_2 == 0) goto LAB_07761280;
              fVar11 = *(float *)(lVar2 + 0x24);
              fVar10 = (float)UnityEngine_Transform__InverseTransformPoint
                                        (*(undefined4 *)(lVar2 + 0x20),fVar11,
                                         *(undefined4 *)(lVar2 + 0x28),param_2,0);
              if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_07761284;
              fVar12 = *(float *)(lVar2 + 0x3c);
              uVar4 = UnityEngine_Transform__InverseTransformPoint
                                (*(undefined4 *)(lVar2 + 0x38),fVar12,*(undefined4 *)(lVar2 + 0x40),
                                 param_2,0);
              fVar14 = (extraout_s0 - fVar10) * (fVar12 - fVar11);
              if (fVar13 < fVar14) {
                uVar4 = DAT_09189c30;
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  uVar4 = FUN_03f5c424();
                }
                *param_3 = fVar10;
                param_3[1] = fVar11;
                param_3[2] = extraout_s0 - fVar10;
                param_3[3] = fVar12 - fVar11;
                fVar13 = fVar14;
              }
            }
            uVar1 = *(uint *)(uVar6 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar1);
        }
        uVar4 = (ulong)(0.0 < fVar13);
        if (0.0 < fVar13) {
          return uVar4;
        }
        uVar5 = uVar5 + 1;
        uVar6 = (ulong)*(uint *)(uVar3 + 0x18);
      } while ((long)uVar5 < (long)(int)*(uint *)(uVar3 + 0x18));
    }
    return uVar4;
  }
LAB_07761284:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

