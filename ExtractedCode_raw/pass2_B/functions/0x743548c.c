// rea decompile_all
// name: System.String$$IndexOf
// address: 0x743548c
// body: available
// range: 0x743548c-0x74357eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743562c to 0x74ff0d4 System.Globalization.CompareInfo$$IndexOfOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7435710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74357a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_String__IndexOf(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09521034 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521034 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar3,uVar5,0);
    goto LAB_0743578c;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x10) < param_3)) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09223268);
    puVar2 = &DAT_092049a8;
  }
  else {
    if ((-1 < param_4) && (param_3 <= *(int *)(param_1 + 0x10) - param_4)) {
      if (param_5 < 3) {
        if (param_5 == 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
          if (plVar1 == (long *)0x0) goto LAB_07435710;
          plVar1 = (long *)(**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
        }
        else {
          if (param_5 == 1) {
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
            if (plVar1 == (long *)0x0) goto LAB_07435710;
            plVar1 = (long *)(**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210))
            ;
            goto joined_r0x074356a8;
          }
          if (param_5 != 2) goto LAB_074357a4;
          if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar1 = (long *)**(long **)(DAT_091827f8 + 0xb8);
        }
        if (plVar1 == (long *)0x0) {
LAB_07435710:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar1;
        uVar5 = 0;
      }
      else {
        if (param_5 != 3) {
          if (param_5 == 4) {
            if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = **(long **)(DAT_091827f8 + 0xb8);
            if (lVar6 != 0) {
              uVar5 = 0;
LAB_07435618:
              System_Globalization_CompareInfo__IndexOfOrdinal
                        (lVar6,param_1,param_2,param_3,param_4,uVar5,0);
              return;
            }
            goto LAB_07435710;
          }
          if (param_5 == 5) {
            if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = **(long **)(DAT_091827f8 + 0xb8);
            if (lVar6 != 0) {
              uVar5 = 1;
              goto LAB_07435618;
            }
            goto LAB_07435710;
          }
LAB_074357a4:
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar3 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_09219670);
          System_ArgumentException___ctor(uVar3,uVar5,uVar4,0);
          goto LAB_0743578c;
        }
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar1 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x074356a8:
        if (plVar1 == (long *)0x0) goto LAB_07435710;
        lVar6 = *plVar1;
        uVar5 = 1;
      }
                    /* WARNING: Could not recover jumptable at 0x074356dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x218))
                (plVar1,param_1,param_2,param_3,param_4,uVar5,*(undefined8 *)(lVar6 + 0x220));
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09219b28);
    puVar2 = &DAT_091ff7b0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar4,0);
LAB_0743578c:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091da2e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

