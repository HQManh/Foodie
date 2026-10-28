// rea decompile_all
// name: System.DateTimeParse$$ExpandPredefinedFormat
// address: 0x75a9578
// body: available
// range: 0x75a9578-0x75a994f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a9810 to 0x75a0064 System.DateTimeFormat$$GetRealFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a9900 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a9948 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a994c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeParse__ExpandPredefinedFormat
               (ushort *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  if ((DAT_09521c6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09171998);
    FUN_03f5c2a4(&DAT_09184eb0);
    DAT_09521c6c = 1;
  }
  if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *param_1;
  if (uVar1 < 0x53) {
    if (uVar1 != 0x4f) {
      if (uVar1 != 0x52) goto LAB_075a97d8;
LAB_075a9694:
      if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
      *param_4 = lVar7;
      thunk_FUN_03f5d7b8(param_4,lVar7);
      if (*(int *)(DAT_09183570 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
      *param_3 = lVar7;
      thunk_FUN_03f5d7b8(param_3,lVar7);
      if ((*(uint *)(param_5 + 0x24) >> 0xb & 1) == 0) goto LAB_075a97d8;
      uVar6 = *(uint *)(param_5 + 0x24) | 0x2000;
LAB_075a9700:
      *(uint *)(param_5 + 0x24) = uVar6;
      goto LAB_075a97d8;
    }
LAB_075a9718:
    if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
    *param_4 = lVar7;
    thunk_FUN_03f5d7b8(param_4,lVar7);
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
    *param_3 = lVar7;
    param_4 = param_3;
  }
  else {
    if (uVar1 < 0x72) {
      if (uVar1 == 0x55) {
        if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
        *param_4 = lVar7;
        thunk_FUN_03f5d7b8(param_4,lVar7);
        lVar7 = *param_3;
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x300;
        if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x78), lVar7 != 0)) {
          uVar2 = System_Object__GetType(lVar7,0);
          uVar3 = DAT_09171998;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          uVar4 = System_Type__op_Inequality(uVar2,uVar3,0);
          if ((uVar4 & 1) == 0) goto LAB_075a97d8;
          if (*param_3 != 0) {
            plVar5 = (long *)System_Globalization_DateTimeFormatInfo__Clone(*param_3,0);
            if (plVar5 == (long *)0x0) {
              *param_3 = 0;
            }
            else if ((*plVar5 != DAT_09183570) || (*param_3 = (long)plVar5, *plVar5 != DAT_09183570)
                    ) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar5);
            }
            thunk_FUN_03f5d7b8(param_3,plVar5);
            lVar7 = *param_3;
            if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
            if (lVar7 != 0) {
              System_Globalization_DateTimeFormatInfo__set_Calendar(lVar7,uVar3,0);
              goto LAB_075a97d8;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (uVar1 != 0x6f) goto LAB_075a97d8;
      goto LAB_075a9718;
    }
    if (uVar1 == 0x72) goto LAB_075a9694;
    if (uVar1 != 0x73) {
      if (uVar1 != 0x75) goto LAB_075a97d8;
      if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
      *param_4 = lVar7;
      thunk_FUN_03f5d7b8(param_4,lVar7);
      if (*(int *)(DAT_09183570 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
      *param_3 = lVar7;
      thunk_FUN_03f5d7b8(param_3,lVar7);
      if ((*(uint *)(param_5 + 0x24) >> 0xb & 1) == 0) goto LAB_075a97d8;
      uVar6 = *(uint *)(param_5 + 0x24) | 0x4000;
      goto LAB_075a9700;
    }
    if (*(int *)(DAT_09183570 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
    *param_3 = lVar7;
    thunk_FUN_03f5d7b8(param_3,lVar7);
    if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
    *param_4 = lVar7;
  }
  thunk_FUN_03f5d7b8(param_4,lVar7);
LAB_075a97d8:
  lVar7 = *param_3;
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTimeFormat__GetRealFormat(param_1,param_2,lVar7);
  return;
}

