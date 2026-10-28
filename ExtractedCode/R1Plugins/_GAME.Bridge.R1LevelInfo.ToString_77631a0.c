// rea decompile_all
// name: _GAME.Bridge.R1LevelInfo$$ToString
// address: 0x77631a0
// body: available
// range: 0x77631a0-0x77633a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7763394 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77633a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77633a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1LevelInfo__ToString(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_09522c44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09226480);
    DAT_09522c44 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,5);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if ((lVar4 != 0) &&
     (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_07763398:
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar4);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    lVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
    if ((lVar4 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_07763398;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar4);
      local_28 = *(undefined4 *)(param_1 + 0x24);
      lVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_07763398;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar4;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar4);
        local_34[0] = *(undefined1 *)(param_1 + 0x21);
        lVar4 = FUN_03f5c42c(DAT_09535400,local_34);
        if ((lVar4 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_07763398;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar4;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar4);
          local_38[0] = *(undefined1 *)(param_1 + 0x20);
          lVar4 = FUN_03f5c42c(DAT_09535400,local_38);
          if ((lVar4 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_07763398;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar4;
            thunk_FUN_03f5d7b8(plVar1 + 8,lVar4);
            System_String__Format(DAT_09226480,plVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

