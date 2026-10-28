// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveVerticalLayoutGroup$$UpdateSizes
// address: 0x4221024
// body: available
// range: 0x4221024-0x422146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4221468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422146c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AdaptiveVerticalLayoutGroup__UpdateSizes
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  if ((DAT_09516d28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f28);
    FUN_03f5c2a4(&DAT_091a4f30);
    FUN_03f5c2a4(&DAT_091a4f38);
    FUN_03f5c2a4(&DAT_091b2010);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19c8);
    FUN_03f5c2a4(&DAT_091b2018);
    FUN_03f5c2a4(&DAT_091b2020);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d28 = 1;
  }
  lVar7 = *(long *)(param_5 + 0x78);
  local_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (lVar7 != 0) {
    lVar5 = *(long *)(param_5 + 0x80);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 != 0) {
      lVar7 = *(long *)(param_5 + 0x58);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        iVar8 = *(int *)(lVar7 + 0x18);
        if (iVar8 == 0) {
          return;
        }
        lVar7 = UnityEngine_UI_LayoutGroup__get_rectTransform(param_5,0);
        if (lVar7 != 0) {
          UnityEngine_RectTransform__get_rect(lVar7,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_5 + 0x20) != 0) {
            iVar2 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_5 + 0x20),0);
            if (*(long *)(param_5 + 0x20) != 0) {
              param_3 = param_3 - (float)iVar2;
              iVar2 = UnityEngine_RectOffset__get_vertical(*(long *)(param_5 + 0x20),0);
              if ((param_3 <= 0.0) ||
                 (fVar13 = (param_4 - (float)iVar2) -
                           *(float *)(param_5 + 0x60) * (float)(iVar8 + -1), fVar13 <= 0.0)) {
                if (0 < iVar8) {
                  fVar13 = *(float *)(param_5 + 0x6c);
                  if (fVar13 <= 0.0) {
                    fVar13 = 0.0;
                  }
                  do {
                    lVar7 = DAT_091b19b8;
                    lVar5 = *(long *)(param_5 + 0x78);
                    if (lVar5 == 0) goto LAB_04221468;
                    lVar6 = *(long *)(lVar5 + 0x10);
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar6 == 0) goto LAB_04221468;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar1 * 8;
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(float *)(lVar6 + 0x20) = fVar13;
                      *(float *)(lVar6 + 0x24) = fVar13;
                    }
                    else {
                      FUN_058ac614(fVar13,fVar13,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
              }
              else {
                fVar9 = *(float *)(param_5 + 0x70);
                fVar11 = param_3;
                if (fVar9 <= param_3) {
                  fVar11 = fVar9;
                }
                if (fVar9 <= 0.0) {
                  fVar11 = param_3;
                }
                if (iVar8 < 1) {
                  fVar9 = 0.0;
                }
                else {
                  fVar9 = 0.0;
                  iVar2 = 0;
                  do {
                    if (*(long *)(param_5 + 0x58) == 0) goto LAB_04221468;
                    uVar3 = FUN_057e0998(*(long *)(param_5 + 0x58),iVar2,DAT_091af778);
                    AnhPD_FoodOrder_AdaptiveVerticalLayoutGroup__ReadChild
                              (uVar3,(long)&local_68 + 4,&local_68);
                    lVar7 = DAT_091b2010;
                    lVar5 = *(long *)(param_5 + 0x80);
                    if (lVar5 == 0) goto LAB_04221468;
                    fVar10 = (float)local_68;
                    lVar6 = *(long *)(lVar5 + 0x10);
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar6 == 0) goto LAB_04221468;
                    fVar12 = fVar11 / local_68._4_4_;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(float *)(lVar6 + 0x20) = local_68._4_4_;
                      *(float *)(lVar6 + 0x24) = (float)local_68;
                      *(float *)(lVar6 + 0x28) = fVar12;
                    }
                    else {
                      FUN_058ce558(local_68._4_4_,(float)local_68,fVar12,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    iVar2 = iVar2 + 1;
                    if (fVar9 <= fVar12 / fVar10) {
                      fVar9 = fVar12 / fVar10;
                    }
                  } while (iVar8 != iVar2);
                }
                fVar10 = *(float *)(param_5 + 0x6c);
                fVar11 = fVar9;
                if (fVar10 <= fVar9) {
                  fVar11 = fVar10;
                }
                if (fVar10 <= 0.0) {
                  fVar11 = fVar9;
                }
                fVar10 = (float)AnhPD_FoodOrder_AdaptiveVerticalLayoutGroup__TotalHeight
                                          (fVar11,param_5);
                fVar9 = fVar11;
                if (fVar13 < fVar10) {
                  fVar9 = 0.0;
                  iVar8 = 0x18;
                  do {
                    fVar10 = (fVar11 + fVar9) * 0.5;
                    fVar12 = (float)AnhPD_FoodOrder_AdaptiveVerticalLayoutGroup__TotalHeight
                                              (fVar10,param_5);
                    if (fVar12 <= fVar13) {
                      fVar9 = fVar10;
                      fVar10 = fVar11;
                    }
                    fVar11 = fVar10;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
                if (*(long *)(param_5 + 0x80) == 0) goto LAB_04221468;
                FUN_058cf1f4(&local_90,*(long *)(param_5 + 0x80),DAT_091b2020);
                while (uVar4 = FUN_0721dee4(&local_90,DAT_091a4f30), lVar7 = DAT_091b19b8,
                      (uVar4 & 1) != 0) {
                  lVar5 = *(long *)(param_5 + 0x78);
                  fVar13 = fVar9 * local_80._4_4_;
                  if ((float)uStack_78 <= fVar9 * local_80._4_4_) {
                    fVar13 = (float)uStack_78;
                  }
                  if (lVar5 == 0) {
LAB_0422146c:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar6 = *(long *)(lVar5 + 0x10);
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar6 == 0) goto LAB_0422146c;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar1 * 8;
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(float *)(lVar6 + 0x20) = (float)local_80 * fVar13;
                    *(float *)(lVar6 + 0x24) = fVar13;
                  }
                  else {
                    FUN_058ac614(lVar5,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                }
                FUN_0721dee0(&local_90,DAT_091a4f28);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_04221468:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

