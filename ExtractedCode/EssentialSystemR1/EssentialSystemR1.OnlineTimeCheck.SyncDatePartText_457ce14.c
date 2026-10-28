// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$SyncDatePartText
// address: 0x457ce14
// body: available
// range: 0x457ce14-0x457d033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457d02c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457d030 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_24;
  
  if ((DAT_09518927 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091ffb88);
    FUN_03f5c2a4(&DAT_091ffb90);
    DAT_09518927 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  local_24 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_24 = System_DateTime__get_Year(param_1 + 0x58,0);
  uVar1 = System_Int32__ToString(&local_24,DAT_091ffb90,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x20),uVar1);
      lVar2 = *(long *)(param_1 + 0x70);
      local_24 = System_DateTime__get_Month(param_1 + 0x58,0);
      uVar1 = System_Int32__ToString(&local_24,DAT_091ffb88,0);
      if (lVar2 == 0) goto LAB_0457d02c;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x28),uVar1);
        lVar2 = *(long *)(param_1 + 0x70);
        local_24 = System_DateTime__get_Day(param_1 + 0x58,0);
        uVar1 = System_Int32__ToString(&local_24,DAT_091ffb88,0);
        if (lVar2 == 0) goto LAB_0457d02c;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar1;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x30),uVar1);
          lVar2 = *(long *)(param_1 + 0x70);
          local_24 = System_DateTime__get_Hour(param_1 + 0x58,0);
          uVar1 = System_Int32__ToString(&local_24,DAT_091ffb88,0);
          if (lVar2 == 0) goto LAB_0457d02c;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = uVar1;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x38),uVar1);
            lVar2 = *(long *)(param_1 + 0x70);
            local_24 = System_DateTime__get_Minute(param_1 + 0x58,0);
            uVar1 = System_Int32__ToString(&local_24,DAT_091ffb88,0);
            if (lVar2 == 0) goto LAB_0457d02c;
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = uVar1;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x40),uVar1);
              lVar2 = *(long *)(param_1 + 0x70);
              local_24 = System_DateTime__get_Second(param_1 + 0x58,0);
              uVar1 = System_Int32__ToString(&local_24,DAT_091ffb88,0);
              if (lVar2 == 0) goto LAB_0457d02c;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar1;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48),uVar1);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0457d02c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

