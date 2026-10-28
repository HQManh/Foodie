// rea decompile_all
// name: System.Globalization.CompareInfo$$Compare
// address: 0x74fd014
// body: available
// range: 0x74fd014-0x74fd2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fd094 to 0x742cf80 System.String$$Compare (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd1b4 to 0x74fd2b4 System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd1e4 to 0x742d898 System.String$$CompareOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd2b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_CompareInfo__Compare
                (undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if ((DAT_0952165a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_0952165a = 1;
  }
  if (param_4 == 0x10000000) {
    uVar3 = System_String__Compare(param_2,param_3,5,0);
    return uVar3;
  }
  if ((param_4 >> 0x1e & 1) == 0) {
    if ((param_4 & 0x9fffffe0) == 0) {
      if (param_2 == 0) {
        uVar3 = (ulong)-(uint)(param_3 != 0);
      }
      else if (param_3 == 0) {
        uVar3 = 1;
      }
      else {
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
        if (**(char **)(DAT_09184c68 + 0xb8) != '\0') {
          if ((param_4 & 1) != 0) {
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
            }
            uVar4 = System_String__GetRawStringData(param_2,0);
            uVar1 = *(undefined4 *)(param_2 + 0x10);
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
            }
            uVar5 = System_String__GetRawStringData(param_3,0);
            uVar2 = *(undefined4 *)(param_3 + 0x10);
            if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091827f8);
            }
            uVar3 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                              (uVar4,uVar1,uVar5,uVar2);
            return uVar3;
          }
          goto LAB_074fd1c4;
        }
        uVar3 = System_Globalization_CompareInfo__internal_compare_switch
                          (param_1,param_2,0,*(undefined4 *)(param_2 + 0x10),param_3,0,
                           *(undefined4 *)(param_3 + 0x10),param_4);
      }
      return uVar3;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09212ce8;
  }
  else {
    if (param_4 == 0x40000000) {
LAB_074fd1c4:
      uVar3 = System_String__CompareOrdinal(param_2,param_3,0);
      return uVar3;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    puVar6 = &DAT_091fed40;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar6);
  uVar7 = thunk_FUN_03fc39d4(&DAT_092206f0);
  System_ArgumentException___ctor(uVar4,uVar5,uVar7,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c51d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

