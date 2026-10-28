// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.IngreHardConfig$$GetStackAllIngreOnOrder
// address: 0x41b8468
// body: available
// range: 0x41b8468-0x41b8643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b8634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b863c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b8640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_Cook_Order_Level_SimpleBBQ_IngreHardConfig__GetStackAllIngreOnOrder(long param_1)

{
  ulong uVar1;
  undefined8 local_78;
  undefined8 *puStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  ulong local_50;
  
  if ((DAT_09516959 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091bb038);
    DAT_09516959 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0579a6a8(&local_78,*(long *)(param_1 + 0x10),DAT_091ac7f8);
    local_50 = local_68;
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar1 = FUN_071aef5c(&local_60,DAT_091a2b18), (uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_061a0668(*(long *)(param_1 + 0x28),local_50 & 0xffffffff,DAT_091bb038);
    }
    FUN_071aef58(&local_60,DAT_091a2b10);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_0579a6a8(&local_78,*(long *)(param_1 + 0x18),DAT_091ac7f8);
      local_50 = local_68;
      puStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
      while (uVar1 = FUN_071aef5c(&local_60,DAT_091a2b18), (uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_061a0668(*(long *)(param_1 + 0x28),local_50 & 0xffffffff,DAT_091bb038);
      }
      FUN_071aef58(&local_60,DAT_091a2b10);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_0579a6a8(&local_78,*(long *)(param_1 + 0x20),DAT_091ac7f8);
        local_50 = local_68;
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_78 = 0;
        puStack_70 = &local_60;
        while( true ) {
          uVar1 = FUN_071aef5c(&local_60,DAT_091a2b18);
          if ((uVar1 & 1) == 0) {
            FUN_071aef58(&local_60,DAT_091a2b10);
            return *(undefined8 *)(param_1 + 0x28);
          }
          if (*(long *)(param_1 + 0x28) == 0) break;
          FUN_061a0668(*(long *)(param_1 + 0x28),local_50 & 0xffffffff,DAT_091bb038);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

