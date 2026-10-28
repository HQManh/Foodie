// rea decompile_all
// name: System.Globalization.RegionInfo$$.ctor
// address: 0x754dd38
// body: available
// range: 0x754dd38-0x754df27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x754deb4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x754ded8 to 0x3f63014 FUN_03f63014 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x754dedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x754df24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_RegionInfo___ctor(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09521919 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226ae0);
    FUN_03f5c2a4(&DAT_0921dd38);
    FUN_03f5c2a4(&DAT_09205c40);
    FUN_03f5c2a4(&DAT_092045d0);
    FUN_03f5c2a4(&DAT_09213600);
    FUN_03f5c2a4(&DAT_092050b0);
    FUN_03f5c2a4(&DAT_092045e8);
    DAT_09521919 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  if (iVar1 == 0x7f) {
    *(undefined4 *)(param_1 + 0x10) = 0xf4;
    *(undefined8 *)(param_1 + 0x18) = DAT_092045d0;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x20) = DAT_0921dd38;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x28) = DAT_092045e8;
    thunk_FUN_03f5d7b8();
    uVar2 = DAT_09205c40;
    *(undefined8 *)(param_1 + 0x30) = DAT_09205c40;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar2);
    *(undefined8 *)(param_1 + 0x40) = DAT_09226ae0;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x48) = DAT_09213600;
    thunk_FUN_03f5d7b8();
    uVar2 = DAT_092050b0;
    *(undefined8 *)(param_1 + 0x58) = DAT_092050b0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar2);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar2);
    return;
  }
  if (param_2[0xf] != 0) {
    uVar2 = System_String__ToUpperInvariant(param_2[0xf],0);
    FUN_03f63014(param_1,uVar2);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09188910);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_092087c0);
  System_NotImplementedException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d7318);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

