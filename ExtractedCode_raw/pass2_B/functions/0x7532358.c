// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$CheckTicksRange
// address: 0x7532358
// body: available
// range: 0x7532358-0x753253b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7532430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7532538 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_GregorianCalendarHelper__CheckTicksRange(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0952186c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_0952186c = 1;
  }
  plVar1 = *(long **)(param_1 + 0x18);
  local_38 = 0;
  if (plVar1 != (long *)0x0) {
    local_38 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    lVar2 = System_DateTime__get_Ticks(&local_38,0);
    if (lVar2 <= param_2) {
      plVar1 = *(long **)(param_1 + 0x18);
      if (plVar1 == (long *)0x0) goto LAB_07532430;
      local_38 = (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      lVar2 = System_DateTime__get_Ticks(&local_38,0);
      if (param_2 <= lVar2) {
        return;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920d698);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    plVar1 = *(long **)(param_1 + 0x18);
    FUN_039b1d98(plVar1);
    local_40 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    uVar5 = thunk_FUN_03fc39d4(&DAT_09183548);
    uVar5 = FUN_03f5c42c(uVar5,&local_40);
    plVar1 = *(long **)(param_1 + 0x18);
    FUN_039b1d98(plVar1);
    local_48 = (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
    uVar6 = thunk_FUN_03fc39d4(&DAT_09183548);
    uVar6 = FUN_03f5c42c(uVar6,&local_48);
    uVar3 = System_String__Format(uVar3,uVar4,uVar5,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09223ea0);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ce2a0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
LAB_07532430:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

