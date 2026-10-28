// rea decompile_all
// name: System.Security.SecurityElement$$AddAttribute
// address: 0x74538fc
// body: available
// range: 0x74538fc-0x7453a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7453a3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453a98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_SecurityElement__AddAttribute(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((DAT_0952111b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09194390);
    DAT_0952111b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar4 = &DAT_0921fa28;
  }
  else {
    if (param_3 != 0) {
      lVar1 = System_Security_SecurityElement__GetAttribute(param_1,param_2);
      if (lVar1 != 0) {
        uVar2 = thunk_FUN_03fc39d4(&DAT_09200e40);
        uVar2 = System_String__Concat(uVar2,param_2,0);
        uVar2 = Locale__GetText(uVar2,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar3,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091d8908);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar2);
      }
      puVar4 = (undefined8 *)(param_1 + 0x20);
      plVar5 = (long *)*puVar4;
      if (plVar5 == (long *)0x0) {
        uVar2 = thunk_FUN_03f9944c(DAT_09181588);
        System_Collections_ArrayList___ctor(uVar2,0);
        *puVar4 = uVar2;
        thunk_FUN_03f5d7b8(puVar4,uVar2);
        plVar5 = (long *)*puVar4;
      }
      uVar2 = thunk_FUN_03f9944c(DAT_09194390);
      System_Security_SecurityElement_SecurityAttribute___ctor(uVar2,param_2,param_3);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074539d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x308))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x310));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09225370;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d8908);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

