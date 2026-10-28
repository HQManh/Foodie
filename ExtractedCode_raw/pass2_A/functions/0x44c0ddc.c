// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$<PlayRescue>b__188_1
// address: 0x44c0ddc
// body: available
// range: 0x44c0ddc-0x44c101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c1010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c1018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c101c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__<PlayRescue>b__188_1(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_0951825d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d620);
    FUN_03f5c2a4(&DAT_0919d648);
    FUN_03f5c2a4(&DAT_091a5f60);
    FUN_03f5c2a4(&DAT_091a5f78);
    FUN_03f5c2a4(&DAT_091a5f68);
    FUN_03f5c2a4(&DAT_091a5f80);
    FUN_03f5c2a4(&DAT_091a5f70);
    FUN_03f5c2a4(&DAT_091a5f88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be938);
    FUN_03f5c2a4(&DAT_091be930);
    DAT_0951825d = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if ((*(long *)(param_1 + 0x308) != 0) &&
     (lVar1 = FUN_06ef0310(*(long *)(param_1 + 0x308),DAT_0919d648), lVar1 != 0)) {
    FUN_0652ce7c(&local_a0,lVar1,DAT_091be938);
    local_60 = local_90;
    puStack_68 = puStack_98;
    local_70 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_70;
    while (uVar2 = FUN_0725662c(&local_70,DAT_091a5f80), lVar1 = local_60, (uVar2 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                          (*(undefined8 *)(lVar1 + 0xe0),0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar1 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookOrder_Cooking_Implement_CookingCustomerHandle__ReleaseAngry(*(long *)(lVar1 + 0xe0),0)
          ;
        }
      }
    }
    FUN_07256628(&local_70,DAT_091a5f78);
    if ((*(long *)(param_1 + 0x350) != 0) &&
       (lVar1 = FUN_06ef0310(*(long *)(param_1 + 0x350),DAT_0919d620), lVar1 != 0)) {
      FUN_0652ce7c(&local_88,lVar1,DAT_091be930);
      local_a0 = 0;
      puStack_98 = &local_88;
      while( true ) {
        do {
          uVar2 = FUN_0725662c(&local_88,DAT_091a5f68);
          lVar1 = local_78;
          if ((uVar2 & 1) == 0) {
            FUN_07256628(&local_88,DAT_091a5f60);
            return;
          }
          uVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(local_78,0);
        } while ((uVar2 & 1) == 0);
        if (lVar1 == 0) break;
        CookOrder_Cooking_Implement_CookingCustomerHandle__ReleaseAngry(lVar1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

