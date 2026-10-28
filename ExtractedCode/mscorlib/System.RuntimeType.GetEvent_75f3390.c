// rea decompile_all
// name: System.RuntimeType$$GetEvent
// address: 0x75f3390
// body: available
// range: 0x75f3390-0x75f3557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f34cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f34d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f3520 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f3554 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__GetEvent(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 local_48;
  undefined1 local_44 [4];
  long local_38;
  
  local_38 = param_2;
  if ((DAT_09521f47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f47 = 1;
  }
  local_44[0] = 0;
  local_48 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar5,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8270);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__FilterHelper(param_3,&local_38,local_44,&local_48);
  lVar3 = System_RuntimeType__GetEvents_internal(param_1,local_38);
  if (lVar3 == 0) {
LAB_075f34cc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if ((int)uVar1 < 1) {
    lVar8 = 0;
  }
  else {
    uVar9 = 0;
    lVar8 = 0;
    do {
      if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_075f34cc;
      uVar1 = System_Reflection_RuntimeEventInfo__GetBindingFlags(lVar7,0);
      uVar2 = System_Reflection_RuntimeEventInfo__GetBindingFlags(lVar7,0);
      if (((uVar1 & (param_3 ^ 2)) == uVar2) &&
         (uVar4 = System_Reflection_EventInfo__op_Inequality(lVar8,0,0), lVar8 = lVar7,
         (uVar4 & 1) != 0)) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fb838);
        uVar5 = System_Environment__GetResourceString(uVar5,0);
        thunk_FUN_03fc39d4(&DAT_09181088);
        uVar6 = thunk_FUN_03f9944c();
        System_Reflection_AmbiguousMatchException___ctor(uVar6,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091d8270);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar5);
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  return lVar8;
}

