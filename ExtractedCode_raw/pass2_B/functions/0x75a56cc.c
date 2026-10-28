// rea decompile_all
// name: System.DateTimeParse$$GetDayOfMNN
// address: 0x75a56cc
// body: available
// range: 0x75a56cc-0x75a59af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a59ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__GetDayOfMNN(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined1 auVar8 [16];
  undefined8 local_48;
  
  if ((DAT_09521c48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091ff468);
    DAT_09521c48 = 1;
  }
  local_48 = 0;
  if (-1 < *(char *)(param_1 + 0x24)) {
    uVar3 = System_DateTimeRawInfo__GetNumber(param_2,0,0);
    uVar4 = System_DateTimeRawInfo__GetNumber(param_2,1,0);
    if (param_3 == 0) {
LAB_075a59ac:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar8 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_3,0);
    uVar7 = auVar8._8_8_;
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835a8);
      uVar7 = extraout_x1;
    }
    uVar5 = System_DateTimeParse__GetYearMonthDayOrder(auVar8._0_8_,uVar7,(long)&local_48 + 4);
    if ((uVar5 & 1) == 0) {
      uVar7 = System_Globalization_DateTimeFormatInfo__get_ShortDatePattern(param_3,0);
      System_DateTimeResult__SetFailure(param_1,3,DAT_091ff468,uVar7,0);
      return 0;
    }
    if (local_48._4_4_ != 0) {
      if ((local_48._4_4_ == 2) || (local_48._4_4_ == 1)) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_DateTimeParse__TryAdjustYear(param_1,uVar4,&local_48);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) goto LAB_075a59ac;
          uVar2 = (undefined4)local_48;
          uVar5 = (**(code **)(*plVar6 + 0x318))
                            (plVar6,local_48 & 0xffffffff,*(undefined4 *)(param_2 + 0xc),uVar3,
                             *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(*plVar6 + 800));
          if ((uVar5 & 1) != 0) {
            uVar1 = *(undefined4 *)(param_2 + 0xc);
            goto LAB_075a5968;
          }
        }
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_DateTimeParse__TryAdjustYear(param_1,uVar3,&local_48);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) goto LAB_075a59ac;
          uVar2 = (undefined4)local_48;
          uVar5 = (**(code **)(*plVar6 + 0x318))
                            (plVar6,local_48 & 0xffffffff,*(undefined4 *)(param_2 + 0xc),uVar4,
                             *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(*plVar6 + 800));
          if ((uVar5 & 1) != 0) {
            uVar1 = *(undefined4 *)(param_2 + 0xc);
            uVar3 = uVar4;
            goto LAB_075a5968;
          }
        }
      }
      goto LAB_075a5984;
    }
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_DateTimeParse__TryAdjustYear(param_1,uVar3,&local_48);
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 == (long *)0x0) goto LAB_075a59ac;
      uVar2 = (undefined4)local_48;
      uVar5 = (**(code **)(*plVar6 + 0x318))
                        (plVar6,local_48 & 0xffffffff,*(undefined4 *)(param_2 + 0xc),uVar4,
                         *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(*plVar6 + 800));
      if ((uVar5 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
        uVar3 = uVar4;
        goto LAB_075a5968;
      }
    }
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_DateTimeParse__TryAdjustYear(param_1,uVar4,&local_48);
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 == (long *)0x0) goto LAB_075a59ac;
      uVar2 = (undefined4)local_48;
      uVar5 = (**(code **)(*plVar6 + 0x318))
                        (plVar6,local_48 & 0xffffffff,*(undefined4 *)(param_2 + 0xc),uVar3,
                         *(undefined4 *)(param_1 + 0x20),*(undefined8 *)(*plVar6 + 800));
      if ((uVar5 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
LAB_075a5968:
        System_DateTimeResult__SetDate(param_1,uVar2,uVar1,uVar3,0);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x80;
        return 1;
      }
    }
  }
LAB_075a5984:
  System_DateTimeResult__SetBadDateTimeFailure(param_1,0);
  return 0;
}

