// rea decompile_all
// name: System.Globalization.CompareInfo$$Compare
// address: 0x74fd5a4
// body: available
// range: 0x74fd5a4-0x74fd90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fd768 to 0x74fd2b4 System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd824 to 0x75ca184 System.SpanHelpers$$SequenceCompareTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd850 to 0x74fd910 System.Globalization.CompareInfo$$CompareString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fd90c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_CompareInfo__Compare
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((DAT_0952165b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_0952165b = 1;
  }
  if (param_5 != 0x10000000) {
    if ((param_5 >> 0x1e & 1) != 0) {
      if (param_5 == 0x40000000) {
        if (DAT_09515cf2 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09515cf2 = '\x01';
        }
        if (param_4 == 0) {
          uVar2 = 0;
          uVar6 = 0;
        }
        else {
          uVar2 = System_String__GetRawStringData(param_4,0);
          uVar6 = *(undefined4 *)(param_4 + 0x10);
        }
LAB_074fd7a8:
        if (DAT_095216ce == '\0') {
          FUN_03f5c2a4(&DAT_091d3030);
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_095216ce = '\x01';
        }
        uVar3 = FUN_04c072b4(param_2,param_3,DAT_091d3030);
        uVar2 = FUN_04c072b4(uVar2,uVar6,DAT_091d3030);
        uVar2 = System_SpanHelpers__SequenceCompareTo(uVar3,param_3 & 0xffffffff,uVar2,uVar6,0);
        return uVar2;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar2 = thunk_FUN_03f9944c();
      puVar4 = &DAT_091fed40;
LAB_074fd8d0:
      uVar3 = thunk_FUN_03fc39d4(puVar4);
      uVar5 = thunk_FUN_03fc39d4(&DAT_092206f0);
      System_ArgumentException___ctor(uVar2,uVar3,uVar5,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c51c8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if ((param_5 & 0x9fffffe0) != 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar2 = thunk_FUN_03f9944c();
      puVar4 = &DAT_09212ce8;
      goto LAB_074fd8d0;
    }
    if (param_4 == 0) {
      return 1;
    }
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
    if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
      uVar2 = System_Globalization_CompareInfo__CompareString
                        (param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
    if ((param_5 & 1) == 0) {
      if (DAT_09515cf2 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09515cf2 = '\x01';
      }
      uVar2 = System_String__GetRawStringData(param_4,0);
      uVar6 = *(undefined4 *)(param_4 + 0x10);
      goto LAB_074fd7a8;
    }
    if (DAT_09515cf2 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09515cf2 = '\x01';
    }
    uVar2 = System_String__GetRawStringData(param_4,0);
    param_4 = (ulong)*(uint *)(param_4 + 0x10);
    iVar1 = *(int *)(DAT_091827f8 + 0xe4);
    goto joined_r0x074fd888;
  }
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (param_4 == 0) goto LAB_074fd730;
LAB_074fd61c:
    uVar2 = System_String__GetRawStringData(param_4,0);
    param_4 = (ulong)*(uint *)(param_4 + 0x10);
  }
  else {
    if (param_4 != 0) goto LAB_074fd61c;
LAB_074fd730:
    uVar2 = 0;
  }
  iVar1 = *(int *)(DAT_091827f8 + 0xe4);
joined_r0x074fd888:
  if (iVar1 == 0) {
    FUN_03f5c424(DAT_091827f8);
  }
  uVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase(param_2,param_3,uVar2,param_4);
  return uVar2;
}

