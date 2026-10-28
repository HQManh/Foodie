// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineLayout$$Relayout
// address: 0x4207f34
// body: available
// range: 0x4207f34-0x42083d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42083c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42083c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42083cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42083d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42083d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineLayout__Relayout(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  
  if ((DAT_09516c1f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acab0);
    FUN_03f5c2a4(&DAT_091acab8);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_091acad8);
    FUN_03f5c2a4(&DAT_091acae0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516c1f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  if (lVar7 != 0) {
    iVar12 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar12,0);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_057e185c(&local_c8,*(long *)(param_1 + 0x18),DAT_091acac8);
      local_a0 = local_b8;
      puStack_a8 = puStack_c0;
      local_b0 = local_c8;
      local_c8 = 0;
      puStack_c0 = &local_b0;
LAB_04208078:
      uVar3 = FUN_071bd28c(&local_b0,DAT_091a2c68);
      lVar7 = local_a0;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
        if ((uVar3 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = UnityEngine_Component__get_gameObject(lVar7,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          lVar4 = DAT_091acab0;
          if ((uVar3 & 1) != 0) {
            if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((*(int *)(*(long *)(lVar7 + 0x38) + 0x10) != 0) && (*(char *)(lVar7 + 0x42) == '\0')
               ) {
              lVar5 = *(long *)(param_1 + 0x60);
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar2 = *(uint *)(lVar5 + 0x18);
                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                    plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar9 = lVar7;
                    thunk_FUN_03f5d7b8(plVar9,lVar7);
                  }
                  else {
                    FUN_057e0c68(lVar5,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_04208078;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
        }
        goto LAB_04208078;
      }
      FUN_071bd288(&local_b0,DAT_091a2c60);
      if (*(long *)(param_1 + 0x60) != 0) {
        iVar12 = *(int *)(*(long *)(param_1 + 0x60) + 0x18);
        if (iVar12 != 0) {
          uVar2 = AnhPD_FoodOrder_CustomerLineLayout__BufferHasBoss(param_1);
          iVar11 = *(int *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x68) = 0;
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          iVar11 = iVar11 - ((uVar2 ^ 0xffffffff) & 1);
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          fVar13 = (float)AnhPD_FoodOrder_CustomerLineLayout__SumActiveCells(param_1,0);
          if ((float)iVar11 + 0.001 < fVar13) {
            *(undefined1 *)(param_1 + 0x68) = 1;
            fVar13 = (float)AnhPD_FoodOrder_CustomerLineLayout__SumActiveCells(param_1,1);
          }
          fVar13 = (float)iVar11 - fVar13;
          fVar21 = 0.0;
          if (0.0 <= fVar13) {
            fVar21 = fVar13;
          }
          iVar11 = iVar12 + -1;
          if (0 < iVar12) {
            uVar3 = (ulong)(uint)(float)(iVar12 + 1);
            fVar21 = (*(float *)(param_1 + 0x24) * fVar21) / (float)(iVar12 + 1);
            fVar13 = (float)AnhPD_FoodOrder_CustomerLineLayout__OrderCursorStart
                                      (fVar21,param_1,uVar2 & 1);
            iVar12 = 0;
            do {
              if (*(long *)(param_1 + 0x60) == 0) goto LAB_042083c4;
              iVar1 = iVar11;
              if (*(char *)(param_1 + 0x58) != '\0') {
                iVar1 = iVar12;
              }
              lVar7 = FUN_057e0998(*(long *)(param_1 + 0x60),iVar1,DAT_091acae0);
              fVar14 = (float)AnhPD_FoodOrder_CustomerLineLayout__LineCells
                                        (param_1,lVar7,*(undefined1 *)(param_1 + 0x68));
              fVar20 = *(float *)(param_1 + 0x24);
              uVar10 = *(undefined8 *)(param_1 + 0x70);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar7,uVar10,0);
              uVar2 = (uint)uVar3;
              if ((uVar6 & 1) == 0) {
                fVar15 = (float)AnhPD_FoodOrder_CustomerLineLayout__PetCells
                                          (param_1,lVar7,*(undefined1 *)(param_1 + 0x68));
                fVar19 = *(float *)(param_1 + 0x24);
                uVar16 = AnhPD_FoodOrder_CustomerLineLayout__PetCells
                                   (param_1,lVar7,*(undefined1 *)(param_1 + 0x68));
                if (lVar7 == 0) goto LAB_042083c4;
                fVar22 = *(float *)(param_1 + 0x24);
                uVar10 = UnityEngine_Component__get_transform(lVar7,0);
                DG_Tweening_ShortcutExtensions__DOKill(uVar10,0,0);
                lVar4 = UnityEngine_Component__get_transform(lVar7,0);
                if (lVar4 == 0) goto LAB_042083c4;
                UnityEngine_Transform__get_localPosition(lVar4,0);
                uVar17 = *(undefined4 *)(param_1 + 0x4c);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar18 = (float)NEON_fminnm(uVar16,0x3f800000);
                fVar15 = fVar13 + fVar15 * fVar19 + fVar22 * fVar18 * -0.5;
                uVar3 = UnityEngine_Object__op_Equality(lVar7,param_2,0);
                lVar7 = UnityEngine_Component__get_transform(lVar7,0);
                if ((uVar3 & 1) == 0) {
                  uVar3 = (ulong)uVar2;
                  uVar10 = DG_Tweening_ShortcutExtensions__DOLocalMove
                                     (fVar15,uVar3,uVar17,*(undefined4 *)(param_1 + 0x34),lVar7,0,0)
                  ;
                  FUN_04d95e8c(uVar10,1,DAT_091dbeb0);
                }
                else {
                  if (lVar7 == 0) goto LAB_042083c4;
                  uVar3 = (ulong)uVar2;
                  UnityEngine_Transform__set_localPosition(fVar15,uVar3,uVar17,lVar7,0);
                }
              }
              iVar11 = iVar11 + -1;
              iVar12 = iVar12 + 1;
              fVar13 = fVar13 + fVar21 + fVar14 * fVar20;
            } while (iVar11 != -1);
          }
        }
        return;
      }
    }
  }
LAB_042083c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

