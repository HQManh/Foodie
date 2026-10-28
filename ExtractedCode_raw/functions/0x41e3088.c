// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$CollapseRanks
// address: 0x41e3088
// body: available
// range: 0x41e3088-0x41e34d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e34cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e34d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AutoCompleteOrderFx__CollapseRanks
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  int local_64;
  
  if ((DAT_09516aee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_09175b10);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091add00);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091ac6d0);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e5c58);
    FUN_03f5c2a4(&DAT_0918e690);
    DAT_09516aee = 1;
  }
  local_64 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918e690);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass103_0___ctor(lVar3,0);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar12 = (ulong)uVar1;
    lVar4 = AnhPD_FoodOrder_LevelInfo__SequenceOf(*(long *)(param_1 + 0x10),param_3,0);
    if ((lVar4 != 0) || (lVar4 = **(long **)(DAT_09535468 + 0xb8), lVar4 != 0)) {
      uVar5 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(lVar4 + 0x10));
      lVar6 = FUN_03f5c394(DAT_091801b8,uVar12);
      if (lVar3 != 0) {
        plVar14 = (long *)(lVar3 + 0x10);
        *plVar14 = lVar6;
        thunk_FUN_03f5d7b8(plVar14,lVar6);
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            plVar7 = (long *)FUN_057e0998(param_2,uVar15 & 0xffffffff,DAT_091ac6d0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar8 = UnityEngine_Object__op_Implicit(plVar7,0);
            iVar10 = (int)uVar15;
            if ((uVar8 & 1) == 0) {
              lVar6 = *plVar14;
              if (lVar6 == 0) goto LAB_041e34cc;
LAB_041e32a4:
              if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_041e34d0;
              iVar10 = uVar1 + iVar10 + *(int *)(lVar4 + 0x10);
            }
            else {
              if (plVar7 == (long *)0x0) goto LAB_041e34cc;
              uVar8 = AnhPD_FoodOrder_AutoCompleteOrderFx__IsDishBase(param_1,plVar7[0xf],param_4);
              if ((uVar8 & 1) == 0) {
                lVar6 = *(long *)(param_1 + 0x10);
                uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                if (lVar6 == 0) goto LAB_041e34cc;
                uVar9 = AnhPD_FoodOrder_LevelInfo__SequenceOf(lVar6,uVar9,0);
                if (*(int *)(DAT_09181918 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09181918);
                }
                uVar8 = AnhPD_FoodOrder_AutoCompleteOrderFx__TryClaimSequence
                                  (lVar4,uVar5,uVar9,&local_64);
                lVar6 = *plVar14;
                if ((uVar8 & 1) == 0) {
                  if (lVar6 != 0) goto LAB_041e32a4;
                  goto LAB_041e34cc;
                }
                if (lVar6 == 0) goto LAB_041e34cc;
                if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_041e34d0;
                iVar10 = local_64 + uVar1;
              }
              else {
                lVar6 = *plVar14;
                if (lVar6 == 0) goto LAB_041e34cc;
                if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_041e34d0;
              }
            }
            lVar11 = uVar15 * 4;
            uVar15 = uVar15 + 1;
            *(int *)(lVar6 + lVar11 + 0x20) = iVar10;
          } while (uVar12 != uVar15);
        }
        lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796990(lVar4,uVar12,DAT_091adc80);
        if (0 < (int)uVar1) {
          if (lVar4 == 0) goto LAB_041e34cc;
          uVar13 = 0;
          lVar6 = DAT_091adc88;
          do {
            lVar11 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_041e34cc;
            uVar2 = *(uint *)(lVar4 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
              *(uint *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar13;
            }
            else {
              FUN_057971a8(lVar4,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              lVar6 = DAT_091adc88;
            }
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
        uVar5 = thunk_FUN_03f9944c(DAT_09175b10);
        FUN_06d43e34(uVar5,lVar3,DAT_091e5c58,0);
        if (lVar4 != 0) {
          FUN_05798cac(lVar4,uVar5,DAT_091add00);
          lVar3 = FUN_03f5c394(DAT_091801b8,uVar1);
          if (0 < (int)uVar1) {
            uVar13 = 0;
            do {
              uVar2 = FUN_05796eb0(lVar4,uVar13,DAT_091add20);
              if (lVar3 == 0) goto LAB_041e34cc;
              if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_041e34d0:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(uint *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = uVar13;
              uVar13 = uVar13 + 1;
            } while (uVar1 != uVar13);
          }
          return lVar3;
        }
      }
    }
  }
LAB_041e34cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

