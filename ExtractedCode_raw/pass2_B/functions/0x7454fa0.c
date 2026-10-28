// rea decompile_all
// name: System.Security.PermissionSet$$.cctor
// address: 0x7454fa0
// body: available
// range: 0x7454fa0-0x745511f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745510c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7455110 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745511c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_PermissionSet___cctor(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09521116 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189038);
    FUN_03f5c2a4(&DAT_09189040);
    FUN_03f5c2a4(&DAT_0918a7e0);
    DAT_09521116 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
  local_34 = 1;
  lVar2 = FUN_03f5c42c(DAT_09189040,&local_34);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07455114:
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
      **(long **)(DAT_09189038 + 0xb8) = (long)plVar1;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189038 + 0xb8),plVar1);
      plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
      local_38 = 0;
      lVar2 = FUN_03f5c42c(DAT_0918a7e0,&local_38);
      if (plVar1 == (long *)0x0) goto LAB_0745510c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07455114;
      if ((int)plVar1[3] != 0) {
        plVar1[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
        plVar4 = (long *)(*(long *)(DAT_09189038 + 0xb8) + 8);
        *plVar4 = (long)plVar1;
        thunk_FUN_03f5d7b8(plVar4,plVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0745510c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

