// rea decompile_all
// name: System.DateTimeFormat$$ExpandPredefinedFormat
// address: 0x75a038c
// body: available
// range: 0x75a038c-0x75a0747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a0588 to 0x75a0064 System.DateTimeFormat$$GetRealFormat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a0624 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a06fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a0700 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a0744 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeFormat__ExpandPredefinedFormat
               (ushort *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
               undefined8 *param_5)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09521c24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09171998);
    FUN_03f5c2a4(&DAT_09184eb0);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521c24 = 1;
  }
  if ((int)param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *param_1;
  if (uVar1 < 0x53) {
    if (uVar1 != 0x4f) {
      if (uVar1 != 0x52) goto LAB_075a0554;
      goto LAB_075a045c;
    }
  }
  else if (uVar1 < 0x72) {
    if (uVar1 == 0x55) {
      uVar6 = *param_5;
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = **(undefined8 **)(DAT_09183568 + 0xb8);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar3 = System_TimeSpan__op_Inequality(uVar6,uVar7,0);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09204ca0);
        System_FormatException___ctor(uVar6,uVar7);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091c79e0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      if (*param_4 != 0) {
        plVar4 = (long *)System_Globalization_DateTimeFormatInfo__Clone(*param_4,0);
        if (plVar4 == (long *)0x0) {
          *param_4 = 0;
        }
        else if ((*plVar4 != DAT_09183570) || (*param_4 = (long)plVar4, *plVar4 != DAT_09183570)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        thunk_FUN_03f5d7b8(param_4,plVar4);
        if ((*param_4 != 0) && (lVar5 = *(long *)(*param_4 + 0x78), lVar5 != 0)) {
          uVar7 = System_Object__GetType(lVar5,0);
          uVar6 = DAT_09171998;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
          uVar3 = System_Type__op_Inequality(uVar7,uVar6,0);
          if ((uVar3 & 1) != 0) {
            lVar5 = *param_4;
            if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
            if (lVar5 == 0) goto LAB_075a0700;
            System_Globalization_DateTimeFormatInfo__set_Calendar(lVar5,uVar6,0);
          }
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_DateTime__ToUniversalTime(param_3);
          *param_3 = uVar6;
          goto LAB_075a0554;
        }
      }
LAB_075a0700:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (uVar1 != 0x6f) goto LAB_075a0554;
  }
  else {
    if (uVar1 != 0x72) {
      if (uVar1 == 0x73) goto LAB_075a0524;
      if (uVar1 != 0x75) goto LAB_075a0554;
    }
LAB_075a045c:
    uVar6 = *param_5;
    if (*(int *)(DAT_09183568 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = **(undefined8 **)(DAT_09183568 + 0xb8);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar3 = System_TimeSpan__op_Inequality(uVar6,uVar7,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_DateTime__get_Kind(param_3);
      if ((iVar2 == 2) && (*(int *)(DAT_09183568 + 0xe4) == 0)) {
        FUN_03f5c424();
      }
    }
    else {
      uVar7 = *param_3;
      uVar6 = *param_5;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_DateTime__op_Subtraction(uVar7,uVar6);
      *param_3 = uVar6;
    }
  }
LAB_075a0524:
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
  *param_4 = lVar5;
  thunk_FUN_03f5d7b8(param_4,lVar5);
LAB_075a0554:
  lVar5 = *param_4;
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTimeFormat__GetRealFormat(param_1,param_2,lVar5);
  return;
}

