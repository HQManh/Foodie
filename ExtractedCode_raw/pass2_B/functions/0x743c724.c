// rea decompile_all
// name: System.Text.StringBuilder$$.ctor
// address: 0x743c724
// body: available
// range: 0x743c724-0x743c8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743c7e8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x743c874 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743c8f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder___ctor(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09521066 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521066 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_3 < param_2) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar1 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_092188d0);
    puVar2 = &DAT_091fe5e8;
  }
  else {
    if (0 < param_3) {
      if (-1 < param_2) {
        if (param_2 == 0) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          param_2 = System_Math__Min(0x10,param_3,0);
        }
        uVar1 = DAT_0917fcc8;
        *(int *)(param_1 + 0x28) = param_3;
        uVar1 = FUN_03f5c394(uVar1,param_2);
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar1);
        return;
      }
      uVar1 = thunk_FUN_03fc39d4(&DAT_091f7f28);
      uVar3 = thunk_FUN_03fc39d4(&DAT_092188d0);
      uVar1 = SR__Format(uVar1,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_092188d0);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar1,0);
      uVar1 = thunk_FUN_03fc39d4(&DAT_091da3d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar1);
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar1 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921f2d0);
    puVar2 = &DAT_09207908;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentOutOfRangeException___ctor(uVar1,uVar3,uVar4,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091da3d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar3);
}

