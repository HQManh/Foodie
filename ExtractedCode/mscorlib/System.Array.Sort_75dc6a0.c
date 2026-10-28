// rea decompile_all
// name: System.Array$$Sort
// address: 0x75dc6a0
// body: available
// range: 0x75dc6a0-0x75dc8d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dc788 to 0x75dcac4 System.Array$$SortImpl (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75dc88c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dc8d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__Sort(long param_1,long param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921e028);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    goto LAB_075dc8c0;
  }
  iVar1 = FUN_03f6b444();
  if (iVar1 == 1) {
    if (param_2 == 0) {
      iVar1 = FUN_03f6b404(param_1,0);
joined_r0x075dc724:
      if (((int)param_4 < 0) || (param_3 < iVar1)) {
        puVar3 = &DAT_0921e638;
        if (-1 < (int)param_4) {
          puVar3 = &DAT_0921d350;
        }
        uVar4 = thunk_FUN_03fc39d4(puVar3);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
        System_ArgumentOutOfRangeException___ctor(uVar5,uVar4,uVar6,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c0898);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar4);
      }
      iVar2 = System_Array__get_Length(param_1);
      if (((int)param_4 <= iVar2 - (param_3 - iVar1)) &&
         ((param_2 == 0 ||
          (iVar2 = System_Array__get_Length(param_2), param_3 - iVar1 <= (int)(iVar2 - param_4)))))
      {
        if (param_4 < 2) {
          return;
        }
        System_Array__SortImpl(param_1,param_2,param_3,param_4,param_5);
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      puVar3 = &DAT_09209710;
    }
    else {
      iVar1 = FUN_03f6b444(param_2);
      if (iVar1 != 1) goto LAB_075dc7a0;
      iVar1 = FUN_03f6b404(param_1,0);
      iVar2 = FUN_03f6b404(param_2,0);
      if (iVar1 == iVar2) goto joined_r0x075dc724;
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      puVar3 = (undefined8 *)&DAT_0920f118;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar3);
    System_ArgumentException___ctor(uVar4,uVar5,0);
  }
  else {
LAB_075dc7a0:
    thunk_FUN_03fc39d4(&DAT_09189ad8);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09209d50);
    System_RankException___ctor(uVar4,uVar5);
  }
LAB_075dc8c0:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c0898);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

