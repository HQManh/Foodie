// rea decompile_all
// name: System.Globalization.CompareInfo$$IndexOf
// address: 0x74fedfc
// body: available
// range: 0x74fedfc-0x74ff0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fef98 to 0x74ff0d4 System.Globalization.CompareInfo$$IndexOfOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fefc8 to 0x7500a94 System.Globalization.CompareInfo$$internal_index_switch (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ff088 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_CompareInfo__IndexOf
          (undefined8 param_1,long param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_44 [2];
  
  local_44[0] = (undefined2)param_3;
  if ((DAT_09521663 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_09521663 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09222fa8);
    System_ArgumentNullException___ctor(uVar5,uVar3,0);
    goto LAB_074ff074;
  }
  if (param_4 < 0) {
LAB_074fefcc:
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09223268);
    puVar4 = &DAT_092049a8;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 < param_4) goto LAB_074fefcc;
    if ((-1 < param_5) && (param_4 <= iVar1 - param_5)) {
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        if (param_6 != 0x10000000) {
          if ((param_6 < 0x20) || (param_6 == 0x40000000)) {
            if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_095216cd == '\0') {
              FUN_03f5c2a4(&DAT_09184c68);
              DAT_095216cd = '\x01';
            }
            if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            cVar2 = **(char **)(DAT_09184c68 + 0xb8);
            uVar3 = System_String__CreateString(0,param_3,1,0);
            if (cVar2 != '\0') {
              uVar3 = System_Globalization_CompareInfo__IndexOfOrdinal
                                (uVar3,param_2,uVar3,param_4,param_5,(param_6 & 0x10000001) != 0);
              return uVar3;
            }
            uVar3 = System_Globalization_CompareInfo__internal_index_switch
                              (param_1,param_2,param_4,param_5,uVar3,param_6,1);
            return uVar3;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          uVar3 = thunk_FUN_03fc39d4(&DAT_09212ce8);
          uVar6 = thunk_FUN_03fc39d4(&DAT_092206f0);
          System_ArgumentException___ctor(uVar5,uVar3,uVar6,0);
          goto LAB_074ff074;
        }
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Char__ToString(local_44,0);
        uVar3 = System_String__IndexOf(param_2,uVar3,param_4,param_5,5,0);
      }
      return uVar3;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09219b28);
    puVar4 = &DAT_091ff7b0;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentOutOfRangeException___ctor(uVar5,uVar3,uVar6,0);
LAB_074ff074:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c5210);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar3);
}

