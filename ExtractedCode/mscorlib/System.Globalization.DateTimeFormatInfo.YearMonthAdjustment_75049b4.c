// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$YearMonthAdjustment
// address: 0x75049b4
// body: available
// range: 0x75049b4-0x7504ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7504ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_DateTimeFormatInfo__YearMonthAdjustment
          (long param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x144);
  if (uVar1 == 0xffffffff) {
    uVar1 = System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(param_1);
  }
  if ((uVar1 >> 3 & 1) == 0) {
LAB_07504acc:
    uVar4 = 1;
  }
  else {
    iVar6 = *param_2;
    if (iVar6 < 1000) {
      iVar6 = iVar6 + 5000;
      *param_2 = iVar6;
    }
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 == (long *)0x0) {
LAB_07504ae4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x2a0));
    if (iVar2 <= iVar6) {
      plVar5 = *(long **)(param_1 + 0x78);
      if (plVar5 == (long *)0x0) goto LAB_07504ae4;
      iVar6 = *param_2;
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x2a0));
      if (iVar6 <= iVar2) {
        if ((param_4 & 1) != 0) {
          plVar5 = *(long **)(param_1 + 0x78);
          if (plVar5 == (long *)0x0) goto LAB_07504ae4;
          uVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*param_2,*(undefined8 *)(*plVar5 + 0x2b0));
          if ((uVar3 & 1) == 0) {
            iVar6 = *param_3;
            if (iVar6 < 8) {
              if (iVar6 == 7) goto LAB_07504a80;
            }
            else {
              *param_3 = iVar6 + -1;
            }
          }
        }
        goto LAB_07504acc;
      }
    }
LAB_07504a80:
    uVar4 = 0;
  }
  return uVar4;
}

