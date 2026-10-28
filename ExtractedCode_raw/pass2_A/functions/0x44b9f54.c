// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$OnExecutionEvent
// address: 0x44b9f54
// body: available
// range: 0x44b9f54-0x44ba1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ba1ac to 0x44ba1c8 CookOrder.Cooking.Implement.CookingGameplayPresentation$$ScheduleDishDeliveries (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ba1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ba1c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__OnExecutionEvent
               (long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_24;
  
  if ((DAT_09518239 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd70);
    FUN_03f5c2a4(&DAT_091c9c60);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091e7038);
    FUN_03f5c2a4(&DAT_0918f090);
    FUN_03f5c2a4(&DAT_0921a028);
    DAT_09518239 = 1;
  }
  local_24 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f090);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass182_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    uVar6 = param_2[4];
    uVar5 = param_2[7];
    uVar2 = param_2[6];
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    *(undefined8 *)(lVar1 + 0x38) = param_2[5];
    *(undefined8 *)(lVar1 + 0x30) = uVar6;
    *(undefined8 *)(lVar1 + 0x48) = uVar5;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined8 *)(lVar1 + 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    *(undefined8 *)(lVar1 + 0x28) = uVar10;
    *(undefined8 *)(lVar1 + 0x20) = uVar9;
    thunk_FUN_03f5d7b8(lVar1 + 0x38,0);
    if (*(int *)(lVar1 + 0x10) != 5) {
      return;
    }
    if ((((*(long *)(param_1 + 0x2d8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar4 != 0)) &&
        (lVar4 = *(long *)(lVar4 + 0x178), lVar4 != 0)) &&
       (lVar4 = CookingGraph_Execution_CookingExecution__ReadSnapshot(lVar4,0), lVar4 != 0)) {
      uVar5 = *(undefined8 *)(lVar4 + 0x38);
      uVar2 = thunk_FUN_03f9944c(DAT_09178628);
      FUN_05322d94(uVar2,lVar1,DAT_091e7038,0);
      lVar1 = FUN_04ae5fd0(uVar5,uVar2,DAT_091c9c60);
      if (((*(long *)(param_1 + 0x2d8) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar4 != 0)) &&
         ((lVar4 = *(long *)(lVar4 + 0x180), lVar4 != 0 &&
          (lVar4 = *(long *)(lVar4 + 0x40), lVar4 != 0)))) {
        if (*(int *)(lVar4 + 0x5c) == 1) {
          if (((lVar1 != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
             (*(long *)(param_1 + 0x60) != 0)) {
            local_24 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x34);
            uVar5 = *(undefined8 *)(lVar1 + 0x18);
            uVar2 = System_Int32__ToString(&local_24,0);
            uVar2 = System_String__Concat(DAT_0921a028,uVar2,0);
            uVar3 = System_String__op_Equality(uVar5,uVar2,0);
            if ((uVar3 & 1) != 0) {
              lVar4 = *(long *)(param_1 + 0x60);
              if (lVar4 == 0) goto LAB_044ba1c0;
              if (*(int *)(lVar1 + 0x20) == *(int *)(lVar4 + 0x38)) {
                if (*(long *)(param_1 + 0x368) == 0) goto LAB_044ba1c0;
                uVar3 = FUN_053d750c(*(long *)(param_1 + 0x368),*(undefined4 *)(lVar4 + 0x34),
                                     DAT_091a82c0);
                if ((uVar3 & 1) == 0) {
                  CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentAutoDishAtShelf
                            (param_1,lVar1);
                }
              }
            }
          }
        }
        else if (lVar1 != 0) {
          lVar4 = FUN_03f5c394(DAT_0917fd70,1);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(long *)(lVar4 + 0x20) = lVar1;
            thunk_FUN_03f5d7b8((long *)(lVar4 + 0x20),lVar1);
            CookOrder_Cooking_Implement_CookingGameplayPresentation__ScheduleDishDeliveries
                      (0,param_1,lVar4);
            return;
          }
          goto LAB_044ba1c0;
        }
        return;
      }
    }
  }
LAB_044ba1c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

