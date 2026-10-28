// rea decompile_all
// name: System.Array$$Reverse
// address: 0x75dbf20
// body: available
// range: 0x75dbf20-0x75dc163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dbfdc to 0x4940030 FUN_04940030 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75dc0e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dc160 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__Reverse(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09521ea3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c06d8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521ea3 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar6,uVar5,0);
  }
  else {
    iVar2 = FUN_03f6b404(param_1,0);
    if ((param_3 < 0) || (iVar2 - param_2 != 0 && param_2 <= iVar2)) {
      puVar1 = &DAT_0921e638;
      if (param_2 < iVar2) {
        puVar1 = &DAT_0921d350;
      }
      uVar5 = thunk_FUN_03fc39d4(puVar1);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar6,uVar5,uVar7,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091c0848);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar5);
    }
    iVar3 = System_Array__get_Length(param_1);
    if ((iVar2 - param_2) + iVar3 < param_3) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
      System_ArgumentException___ctor(uVar6,uVar5,0);
    }
    else {
      iVar2 = FUN_03f6b444(param_1);
      if (iVar2 == 1) {
        lVar4 = thunk_FUN_03f99350(param_1,DAT_09180318);
        if (lVar4 != 0) {
          FUN_04940030(lVar4,param_2,param_3,DAT_091c06d8);
          return;
        }
        iVar2 = param_3 + param_2 + -1;
        if (param_2 < iVar2) {
          do {
            uVar5 = System_Array__GetValue(param_1,param_2);
            uVar6 = System_Array__GetValue(param_1,iVar2);
            System_Array__SetValue(param_1,uVar6,param_2);
            System_Array__SetValue(param_1,uVar5,iVar2);
            param_2 = param_2 + 1;
            iVar2 = iVar2 + -1;
          } while (param_2 < iVar2);
        }
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09189ad8);
      uVar6 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09209d50);
      System_RankException___ctor(uVar6,uVar5);
    }
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c0848);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

