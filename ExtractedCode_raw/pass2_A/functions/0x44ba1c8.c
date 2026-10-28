// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ScheduleDishDeliveries
// address: 0x44ba1c8
// body: available
// range: 0x44ba1c8-0x44ba5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ba5a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ba5a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ScheduleDishDeliveries
               (float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_0951823a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c65b0);
    FUN_03f5c2a4(&DAT_091c9c60);
    FUN_03f5c2a4(&DAT_091cad58);
    FUN_03f5c2a4(&DAT_091cb428);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a86d8);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091e7040);
    FUN_03f5c2a4(&DAT_0918f098);
    FUN_03f5c2a4(&DAT_091e7048);
    FUN_03f5c2a4(&DAT_0918f0a0);
    DAT_0951823a = 1;
  }
  lVar1 = FUN_04b049e4(param_3,DAT_091cad58);
  fVar10 = 0.0;
  if ((*(char *)(param_2 + 0x30) != '\0') && (*(long *)(param_2 + 0x60) != 0)) {
    lVar2 = thunk_FUN_03f9944c(DAT_0918f098);
    CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass183_0___ctor(lVar2,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09178628);
    FUN_05322d94(uVar3,param_2,DAT_091c65b0,0);
    lVar4 = FUN_04ae5fd0(lVar1,uVar3,DAT_091c9c60);
    if (lVar2 == 0) goto LAB_044ba5a4;
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6,lVar4);
    if (*plVar6 != 0) {
      CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginDishDelivery(param_2);
      fVar10 = (float)DG_Tweening_TweenExtensions__Duration(*(undefined8 *)(param_2 + 0x38),1,0);
      lVar4 = *(long *)(param_2 + 0x2e8);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) || (*(long *)(lVar4 + 0x58) == 0))
      goto LAB_044ba5a4;
      fVar11 = (fVar10 - *(float *)(*(long *)(lVar4 + 0x28) + 100)) -
               *(float *)(*(long *)(lVar4 + 0x58) + 0x14);
      fVar10 = 0.0;
      if (0.0 <= fVar11) {
        fVar10 = fVar11;
      }
      uVar3 = thunk_FUN_03f9944c(DAT_09178628);
      FUN_05322d94(uVar3,lVar2,DAT_091e7040,0);
      uVar3 = FUN_04b0cafc(lVar1,uVar3,DAT_091cb428);
      lVar1 = FUN_04b049e4(uVar3,DAT_091cad58);
    }
  }
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      iVar9 = 0;
      uVar8 = 0;
      do {
        lVar2 = thunk_FUN_03f9944c(DAT_0918f0a0);
        CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass183_1___ctor
                  (lVar2,0);
        if (lVar2 == 0) goto LAB_044ba5a4;
        *(long *)(lVar2 + 0x20) = param_2;
        thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),param_2);
        if (*(uint *)(lVar1 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6 = (long *)(lVar2 + 0x10);
        *plVar6 = *(long *)(lVar1 + 0x20 + uVar8 * 8);
        thunk_FUN_03f5d7b8(plVar6);
        lVar4 = *plVar6;
        if (lVar4 == 0) goto LAB_044ba5a4;
        uStack_98 = *(undefined8 *)(lVar4 + 0x18);
        local_a0 = *(undefined8 *)(lVar4 + 0x10);
        local_90 = *(undefined8 *)(lVar4 + 0x20);
        uVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_a0);
        puVar7 = (undefined8 *)(lVar2 + 0x18);
        *puVar7 = uVar3;
        thunk_FUN_03f5d7b8(puVar7,uVar3);
        if (*(long *)(param_2 + 0x338) == 0) goto LAB_044ba5a4;
        uVar5 = FUN_053ebc3c(*(long *)(param_2 + 0x338),*puVar7,DAT_091a86c8);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_2 + 0x370) == 0) goto LAB_044ba5a4;
          uVar5 = FUN_053ec72c(*(long *)(param_2 + 0x370),*puVar7,DAT_091a86b8);
          if ((uVar5 & 1) != 0) {
            fVar11 = (float)iVar9;
            iVar9 = iVar9 + 1;
            fVar11 = fVar10 + fVar11 * param_1;
            if (fVar11 <= 0.0) {
              if (*(long *)(param_2 + 0x370) == 0) goto LAB_044ba5a4;
              FUN_053ebe0c(*(long *)(param_2 + 0x370),*puVar7,DAT_091a86d8);
              CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginDishDelivery
                        (param_2,*plVar6);
            }
            else {
              uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar3,lVar2,DAT_091e7048,0);
              uVar3 = DG_Tweening_DOVirtual__DelayedCall(fVar11,uVar3,1,0);
              FUN_04d9642c(uVar3,param_2,DAT_091dbfe0);
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar1 + 0x18));
    }
    return;
  }
LAB_044ba5a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

