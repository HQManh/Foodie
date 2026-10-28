// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity$$Clone
// address: 0x747b5ac
// body: available
// range: 0x747b5ac-0x747b72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747b6e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747b728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_Claims_ClaimsIdentity__Clone(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_0952123c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_09182560);
    DAT_0952123c = 1;
  }
  lVar6 = param_1[3];
  lVar1 = thunk_FUN_03f9944c(DAT_09182560);
  System_Security_Claims_ClaimsIdentity___ctor(lVar1,0,lVar6,0,0,0,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar1 + 0x48) = param_1[9];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x50) = param_1[10];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x58) = param_1[0xb];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x28) = param_1[5];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x30) = param_1[6];
  thunk_FUN_03f5d7b8();
  plVar4 = (long *)param_1[8];
  plVar5 = plVar4;
  if (plVar4 != (long *)0x0) {
    do {
      if (plVar5 == param_1) {
        uVar2 = thunk_FUN_03fc39d4(&DAT_091fb478);
        uVar2 = System_Environment__GetResourceString(uVar2,0);
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar3 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar3,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c4bf8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar2);
      }
      plVar5 = (long *)plVar5[8];
    } while (plVar5 != (long *)0x0);
    if (**(char **)(DAT_09181358 + 0xb8) == '\0') {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    }
    System_Security_Claims_ClaimsIdentity__set_Actor(lVar1,plVar4);
  }
  return lVar1;
}

