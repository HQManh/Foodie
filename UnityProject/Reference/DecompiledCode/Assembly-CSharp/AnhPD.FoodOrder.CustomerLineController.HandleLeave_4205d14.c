// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineController$$HandleLeave
// address: 0x4205d14
// body: available
// range: 0x4205d14-0x4205f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4205f74 to 0x4218d4c AnhPD.FoodOrder.CustomerLoader$$OnLeave (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4205f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineController__HandleLeave(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09516c0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091830c0);
    FUN_03f5c2a4(&DAT_091e8290);
    FUN_03f5c2a4(&DAT_091e8298);
    FUN_03f5c2a4(&DAT_091e82a0);
    FUN_03f5c2a4(&DAT_0918f8d8);
    DAT_09516c0d = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f8d8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    AnhPD_FoodOrder_CustomerLineController__CancelPendingReveal(param_1);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) = 5;
      if (lVar3 != 0) {
        AnhPD_FoodOrder_CustomerLineView__SetWeather(lVar3,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          AnhPD_FoodOrder_CustomerLineView__StopShake();
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != 0) {
            AnhPD_FoodOrder_CustomerLineView__HideOrder(lVar3);
            lVar3 = *(long *)(lVar3 + 0x168);
            if (lVar3 != 0) {
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = thunk_FUN_03f9944c(DAT_091830c0);
            System_Object___ctor(lVar3,0);
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0x60);
              thunk_FUN_03f5d7b8();
              if ((*(long *)(param_1 + 0x18) != 0) &&
                 (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar6 != 0)) {
                *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar6 + 0x78);
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10));
                lVar6 = *(long *)(param_1 + 0x18);
                *(undefined1 *)(lVar3 + 0x18) = 1;
                if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
                  lVar7 = *(long *)(param_1 + 0x10);
                  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(lVar6 + 0x84);
                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
                    uVar1 = AnhPD_FoodOrder_OrderModel__get_Count();
                    *(undefined4 *)(lVar3 + 0x30) = uVar1;
                    *(long *)(lVar2 + 0x18) = lVar3;
                    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar3);
                    if ((*(long *)(param_1 + 0x18) != 0) &&
                       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar3 != 0)) {
                      AnhPD_FoodOrder_FTimer__StopWaiting(lVar3,0);
                      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
                      System_Action___ctor(uVar4,lVar2,DAT_091e8290,0);
                      *(undefined8 *)(param_1 + 0x58) = uVar4;
                      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar4);
                      if (*(long *)(param_1 + 0x18) != 0) {
                        lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
                        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
                        System_Action___ctor(uVar4,lVar2,DAT_091e8298,0);
                        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
                        System_Action___ctor(uVar5,lVar2,DAT_091e82a0,0);
                        if (lVar3 != 0) {
                          AnhPD_FoodOrder_CustomerLoader__OnLeave(lVar3,uVar4,uVar5,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

