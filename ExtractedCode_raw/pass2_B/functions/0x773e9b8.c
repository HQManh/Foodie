// rea decompile_all
// name: _GAME.Utils.Helper$$ToHex
// address: 0x773e9b8
// body: available
// range: 0x773e9b8-0x773ec0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x773ebfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773ec08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773ec0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_Helper__ToHex(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 uVar2;
  
  if ((DAT_09522ad6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091f7080);
    FUN_03f5c2a4(&DAT_091f7088);
    DAT_09522ad6 = 1;
  }
  local_48[0] = (undefined1)param_1;
  uVar1 = (undefined1)((ulong)param_1 >> 8);
  uVar2 = (undefined1)((ulong)param_1 >> 0x10);
  if ((param_2 & 1) == 0) {
    local_34[0] = local_48[0];
    uVar8 = FUN_03f5c42c(DAT_095353f0,local_34);
    local_38[0] = uVar1;
    uVar6 = FUN_03f5c42c(DAT_095353f0,local_38);
    local_44[0] = uVar2;
    uVar7 = FUN_03f5c42c(DAT_095353f0,local_44);
    System_String__Format(DAT_091f7080,uVar8,uVar6,uVar7,0);
    return;
  }
  plVar3 = (long *)FUN_03f5c394(DAT_09180318,4);
  lVar4 = FUN_03f5c42c(DAT_095353f0,local_48);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0773ec00:
    uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    local_4c[0] = uVar1;
    lVar4 = FUN_03f5c42c(DAT_095353f0,local_4c);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0773ec00;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
      local_50[0] = uVar2;
      lVar4 = FUN_03f5c42c(DAT_095353f0,local_50);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_0773ec00;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
        local_54[0] = (undefined1)((ulong)param_1 >> 0x18);
        lVar4 = FUN_03f5c42c(DAT_095353f0,local_54);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0773ec00;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
          System_String__Format(DAT_091f7088,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

