// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$DisposeSession
// address: 0x44bc444
// body: available
// range: 0x44bc444-0x44bc94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bc940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bc944 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bc948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__DisposeSession(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09518246 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d648);
    FUN_03f5c2a4(&DAT_091a0040);
    FUN_03f5c2a4(&DAT_091cad20);
    FUN_03f5c2a4(&DAT_091a68d0);
    FUN_03f5c2a4(&DAT_091a4208);
    FUN_03f5c2a4(&DAT_091a5f78);
    FUN_03f5c2a4(&DAT_091a68d8);
    FUN_03f5c2a4(&DAT_091a5f80);
    FUN_03f5c2a4(&DAT_091a4210);
    FUN_03f5c2a4(&DAT_091a4218);
    FUN_03f5c2a4(&DAT_091a68e0);
    FUN_03f5c2a4(&DAT_091a5f88);
    FUN_03f5c2a4(&DAT_091a7e28);
    FUN_03f5c2a4(&DAT_091afd60);
    FUN_03f5c2a4(&DAT_091afd68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be938);
    FUN_03f5c2a4(&DAT_091bea30);
    DAT_09518246 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  *(undefined1 *)(param_1 + 0x3c0) = 1;
  CookOrder_Cooking_Implement_CookingGameplayPresentation__DisposePlateMoves(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x3d0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x3d0) == 0) goto LAB_044bc940;
    AnhPD_FoodOrder_UIPopupAlert__HideAlert(*(long *)(param_1 + 0x3d0),2,0,0);
  }
  lVar3 = FUN_04b049e4(*(undefined8 *)(param_1 + 0x3b8),DAT_091cad20);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(param_1 + 0x3b8) == 0) goto LAB_044bc940;
        lVar6 = *(long *)(lVar3 + 0x20 + uVar2 * 8);
        uVar4 = FUN_053ebe0c(*(long *)(param_1 + 0x3b8),lVar6,DAT_091a7e28);
        if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        }
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar3 = *(long *)(param_1 + 0x2d0);
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x2d0,0);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    if (*(long *)(param_1 + 0x2f8) != 0) {
      CookOrder_Cooking_Implement_CookingFlightPresentation__Dispose(*(long *)(param_1 + 0x2f8),0);
    }
    DG_Tweening_ShortcutExtensions__DOKill(param_1,0,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_057e185c(&local_d8,*(long *)(param_1 + 0x20),DAT_091afd68);
      local_70 = local_c8;
      puStack_78 = puStack_d0;
      local_80 = local_d8;
      local_d8 = 0;
      puStack_d0 = &local_80;
      while (uVar2 = FUN_071bd28c(&local_80,DAT_091a4210), (uVar2 & 1) != 0) {
        DG_Tweening_TweenExtensions__Kill(local_70,0,0);
      }
      FUN_071bd288(&local_80,DAT_091a4208);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
        if ((*(long *)(param_1 + 0x308) != 0) &&
           (lVar3 = FUN_06ef0310(*(long *)(param_1 + 0x308),DAT_0919d648), lVar3 != 0)) {
          FUN_0652ce7c(&local_d8,lVar3,DAT_091be938);
          local_90 = local_c8;
          puStack_98 = puStack_d0;
          local_a0 = local_d8;
          local_d8 = 0;
          puStack_d0 = &local_a0;
          while (uVar2 = FUN_0725662c(&local_a0,DAT_091a5f80), lVar3 = local_90, (uVar2 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
            if ((uVar2 & 1) != 0) {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = UnityEngine_Component__get_transform(lVar3,0);
              DG_Tweening_ShortcutExtensions__DOKill(uVar5,0,0);
            }
          }
          FUN_07256628(&local_a0,DAT_091a5f78);
          if ((*(long *)(param_1 + 0x328) != 0) &&
             (lVar3 = FUN_06fd8278(*(long *)(param_1 + 0x328),DAT_091a0040), lVar3 != 0)) {
            FUN_06544014(&local_d8,lVar3,DAT_091bea30);
            local_b0 = local_c8;
            puStack_b8 = puStack_d0;
            local_c0 = local_d8;
            local_d8 = 0;
            puStack_d0 = &local_c0;
            while (uVar2 = FUN_072759a8(&local_c0,DAT_091a68d8), lVar3 = local_b0, (uVar2 & 1) != 0)
            {
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
              if ((uVar2 & 1) != 0) {
                DG_Tweening_ShortcutExtensions__DOKill(lVar3,0,0);
              }
            }
            FUN_072759a4(&local_c0,DAT_091a68d0);
            uVar5 = *(undefined8 *)(param_1 + 0x1e0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar2 & 1) == 0) {
LAB_044bc8f8:
              if ((*(long *)(param_1 + 0x2d8) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x30), lVar3 != 0)) {
                CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorAll
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar3,0);
              }
              return;
            }
            if (*(long *)(param_1 + 0x1e0) != 0) {
              uVar5 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x1e0),0);
              DG_Tweening_ShortcutExtensions__DOKill(uVar5,0,0);
              if ((*(long *)(param_1 + 0x1e0) != 0) &&
                 (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x1e0),0),
                 lVar3 != 0)) {
                UnityEngine_Transform__set_position
                          (*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),
                           *(undefined4 *)(param_1 + 0x2c8),lVar3,0);
                goto LAB_044bc8f8;
              }
            }
          }
        }
      }
    }
  }
LAB_044bc940:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

