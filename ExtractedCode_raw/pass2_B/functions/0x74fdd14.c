// rea decompile_all
// name: System.Globalization.CompareInfo$$Compare
// address: 0x74fdd14
// body: available
// range: 0x74fdd14-0x74fe23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fdf98 to 0x75ca184 System.SpanHelpers$$SequenceCompareTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fe068 to 0x750d224 FUN_0750d224 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fe0a8 to 0x74fd4a8 System.Globalization.CompareInfo$$internal_compare_switch (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fe0f0 to 0x74fd2b4 System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74fe174 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74fe238 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_CompareInfo__Compare
                (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5,uint param_6
                ,uint param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *puVar10;
  
  if ((DAT_0952165e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_0952165e = 1;
  }
  if (param_8 == 0x10000000) {
    uVar1 = param_4;
    if ((int)param_7 <= (int)param_4) {
      uVar1 = param_7;
    }
    uVar2 = System_String__Compare(param_2,param_3,param_5,param_6,uVar1,5,0);
    if (param_4 == param_7) {
      return uVar2;
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar1 = 0xffffffff;
    if ((int)param_7 < (int)param_4) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  if ((int)(param_7 | param_4) < 0) {
    puVar10 = &DAT_0921e660;
    puVar4 = &DAT_0921e668;
LAB_074fe120:
    if ((int)param_4 < 0) {
      puVar4 = puVar10;
    }
    uVar3 = thunk_FUN_03fc39d4(puVar4);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar3,uVar8,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c51d8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar3);
  }
  if ((int)(param_6 | param_3) < 0) {
    puVar10 = &DAT_092202f8;
    puVar4 = &DAT_09220300;
    param_4 = param_3;
    goto LAB_074fe120;
  }
  if (param_2 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x10);
  }
  if ((int)(iVar9 - param_4) < (int)param_3) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09223670;
  }
  else {
    if (param_5 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_5 + 0x10);
    }
    if ((int)param_6 <= (int)(iVar9 - param_7)) {
      if ((param_8 >> 0x1e & 1) == 0) {
        if ((param_8 & 0x9fffffe0) == 0) {
LAB_074fde50:
          if (param_2 == 0) {
            uVar2 = (ulong)-(uint)(param_5 != 0);
          }
          else {
            if (param_5 != 0) {
              if (DAT_09520e02 == '\0') {
                FUN_03f5c2a4(&DAT_091b97b8);
                DAT_09520e02 = '\x01';
              }
              if ((*(uint *)(param_2 + 0x10) < param_3) ||
                 (*(uint *)(param_2 + 0x10) - param_3 < param_4)) {
                System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
              }
              lVar5 = System_String__GetRawStringData(param_2,0);
              if (DAT_09520e02 == '\0') {
                FUN_03f5c2a4(&DAT_091b97b8);
                DAT_09520e02 = '\x01';
              }
              lVar5 = lVar5 + (ulong)param_3 * 2;
              if ((*(uint *)(param_5 + 0x10) < param_6) ||
                 (*(uint *)(param_5 + 0x10) - param_6 < param_7)) {
                System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
              }
              lVar6 = System_String__GetRawStringData(param_5,0);
              lVar6 = lVar6 + (ulong)param_6 * 2;
              if (param_8 != 0x40000000) {
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
                  uVar2 = System_Globalization_CompareInfo__internal_compare_switch
                                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                    );
                  return uVar2;
                }
                if ((param_8 & 1) != 0) {
                  if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                                    (lVar5,param_4,lVar6,param_7);
                  return uVar2;
                }
                uVar2 = FUN_0750d224(lVar5,param_4,lVar6,param_7,0);
                return uVar2;
              }
              if (DAT_095216ce == '\0') {
                FUN_03f5c2a4(&DAT_091d3030);
                FUN_03f5c2a4(&DAT_091b9810);
                DAT_095216ce = '\x01';
              }
              uVar3 = FUN_04c072b4(lVar5,param_4,DAT_091d3030);
              uVar7 = FUN_04c072b4(lVar6,param_7,DAT_091d3030);
              uVar2 = System_SpanHelpers__SequenceCompareTo(uVar3,param_4,uVar7,param_7,0);
              return uVar2;
            }
            uVar2 = 1;
          }
          return uVar2;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        puVar4 = &DAT_09212ce8;
      }
      else {
        if (param_8 == 0x40000000) goto LAB_074fde50;
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        puVar4 = &DAT_091fed40;
      }
      uVar7 = thunk_FUN_03fc39d4(puVar4);
      uVar8 = thunk_FUN_03fc39d4(&DAT_092206f0);
      System_ArgumentException___ctor(uVar3,uVar7,uVar8,0);
      goto LAB_074fe224;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09223678;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar4);
  uVar8 = thunk_FUN_03fc39d4(&DAT_09209708);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar7,uVar8,0);
LAB_074fe224:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091c51d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar7);
}

