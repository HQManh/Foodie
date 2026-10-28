// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$AdjustLatestPendingLog
// address: 0x732fde0
// body: available
// range: 0x732fde0-0x732ff57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732ff4c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ff50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732ff54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0732ff48) */

void IngameDebugConsole_DebugLogManager__AdjustLatestPendingLog
               (long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 *local_68;
  char local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09520660 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1c48);
    FUN_03f5c2a4(&DAT_091a1c50);
    FUN_03f5c2a4(&DAT_091a1c58);
    DAT_09520660 = 1;
  }
  local_58 = *(undefined8 *)(param_1 + 0x260);
  pcStack_70 = local_5c;
  local_78 = 0;
  local_68 = &local_58;
  local_5c[0] = '\0';
  System_Threading_Monitor__Enter(local_58,local_5c,0);
  lVar2 = *(long *)(param_1 + 0x250);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x1c);
    if (iVar1 != 0) {
      if ((param_2 & 1) != 0) {
        *(int *)(param_1 + 0x268) = iVar1;
      }
      if ((param_3 & 1) != 0) {
        FUN_070dda08(&local_50,lVar2,iVar1 + -1,DAT_091a1c50);
        lVar2 = *(long *)(param_1 + 0x250);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(lVar2 + 0x1c);
        uVar3 = **(undefined8 **)(DAT_09535468 + 0xb8);
        uStack_88 = 0;
        local_80 = 0;
        local_90 = local_50;
        thunk_FUN_03f5d7b8(&local_90);
        uStack_88 = uVar3;
        thunk_FUN_03f5d7b8(&uStack_88,uVar3);
        local_80 = CONCAT44(local_80._4_4_,(undefined4)local_40);
        uStack_48 = uStack_88;
        local_50 = local_90;
        local_40 = local_80;
        FUN_070dda58(lVar2,iVar1 + -1,&local_50,DAT_091a1c58);
      }
    }
    if (local_5c[0] != '\0') {
      System_Threading_Monitor__Exit(*local_68,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

