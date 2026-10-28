// rea decompile_all
// name: System.String$$LastIndexOf
// address: 0x7435b6c
// body: available
// range: 0x7435b6c-0x7435f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7435d60 to 0x74ff968 System.Globalization.CompareInfo$$LastIndexOfOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7435ed0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7435ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__LastIndexOf(long param_1,long param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  
  uVar8 = (ulong)param_3;
  if ((DAT_09521036 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521036 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar4,uVar6,0);
    goto LAB_07435ebc;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 == 0) && (param_3 + 1 < 2)) {
    return (ulong)-(uint)(*(int *)(param_2 + 0x10) != 0);
  }
  if (((int)param_3 < 0) || ((int)uVar1 < (int)param_3)) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09223268);
    puVar3 = &DAT_092049a8;
  }
  else {
    if (uVar1 == param_3) {
      iVar9 = param_4 + -1;
      uVar8 = (ulong)(param_3 - 1);
      if (param_4 < 1) goto LAB_07435bec;
LAB_07435bf0:
      if (-1 < ((int)uVar8 - iVar9) + 1) {
        if (*(int *)(param_2 + 0x10) == 0) {
          return uVar8;
        }
        if (param_5 < 3) {
          if (param_5 == 0) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar2 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
            if (plVar2 == (long *)0x0) goto LAB_07435ed4;
            plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210))
            ;
          }
          else {
            if (param_5 == 1) {
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              plVar2 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
              if (plVar2 == (long *)0x0) goto LAB_07435ed4;
              plVar2 = (long *)(**(code **)(*plVar2 + 0x208))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x210));
              goto joined_r0x07435ddc;
            }
            if (param_5 != 2) goto LAB_07435ed8;
            if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar2 = (long *)**(long **)(DAT_091827f8 + 0xb8);
          }
          if (plVar2 == (long *)0x0) {
LAB_07435ed4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar2;
          uVar6 = 0;
        }
        else {
          if (param_5 != 3) {
            if (param_5 == 4) {
              if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = **(long **)(DAT_091827f8 + 0xb8);
              if (lVar7 != 0) {
                uVar6 = 0;
LAB_07435d4c:
                uVar8 = System_Globalization_CompareInfo__LastIndexOfOrdinal
                                  (lVar7,param_1,param_2,uVar8,iVar9,uVar6,0);
                return uVar8;
              }
              goto LAB_07435ed4;
            }
            if (param_5 == 5) {
              if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = **(long **)(DAT_091827f8 + 0xb8);
              if (lVar7 != 0) {
                uVar6 = 1;
                goto LAB_07435d4c;
              }
              goto LAB_07435ed4;
            }
LAB_07435ed8:
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar4 = thunk_FUN_03f9944c();
            uVar6 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_09219670);
            System_ArgumentException___ctor(uVar4,uVar6,uVar5,0);
            goto LAB_07435ebc;
          }
          if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar2 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x07435ddc:
          if (plVar2 == (long *)0x0) goto LAB_07435ed4;
          lVar7 = *plVar2;
          uVar6 = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x07435e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(lVar7 + 0x228))
                          (plVar2,param_1,param_2,uVar8,iVar9,uVar6,*(undefined8 *)(lVar7 + 0x230));
        return uVar8;
      }
    }
    else {
LAB_07435bec:
      iVar9 = param_4;
      if (-1 < param_4) goto LAB_07435bf0;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09219b28);
    puVar3 = &DAT_091ff7b0;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar6,uVar5,0);
LAB_07435ebc:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091da330);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar6);
}

