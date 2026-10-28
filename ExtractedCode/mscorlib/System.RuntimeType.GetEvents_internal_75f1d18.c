// rea decompile_all
// name: System.RuntimeType$$GetEvents_internal
// address: 0x75f1d18
// body: available
// range: 0x75f1d18-0x75f1ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f1eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f1eb8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f1ec0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f1ec8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f1ed0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075f1ecc) */
/* WARNING: Removing unreachable block (ram,0x075f1ec4) */

long System_RuntimeType__GetEvents_internal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09521f6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180490);
    FUN_03f5c2a4(&DAT_0918a398);
    DAT_09521f6b = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  System_RuntimeTypeHandle___ctor(&local_38,param_5,0);
  Mono_SafeStringMarshal___ctor(&uStack_48,param_2,0);
  uVar2 = Mono_SafeStringMarshal__get_Value(&uStack_48,0);
  uVar2 = FUN_03f6c914(param_1,uVar2,param_4);
  Mono_SafeGPtrArrayHandle___ctor(&local_50,uVar2,0);
  uVar1 = Mono_SafeGPtrArrayHandle__get_Length(&local_50,0);
  lVar3 = FUN_03f5c394(DAT_09180490,(ulong)uVar1);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      uVar2 = Mono_RuntimeGPtrArrayHandle__Lookup(&local_50,uVar5 & 0xffffffff,0);
      plVar4 = (long *)System_Reflection_EventInfo__GetEventFromHandle(uVar2,local_38,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_0918a398)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(long **)(lVar3 + uVar5 * 8 + 0x20) = plVar4;
      thunk_FUN_03f5d7b8(lVar3 + lVar6,plVar4);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar1 != uVar5);
  }
  Mono_SafeGPtrArrayHandle__Dispose(&local_50,0);
  Mono_SafeStringMarshal__Dispose(&uStack_48,0);
  return lVar3;
}

