// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$CreateCastConverter
// address: 0x7688774
// body: available
// range: 0x7688774-0x76889cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76889b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76889bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76889c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Utilities_ConvertUtils__CreateCastConverter(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09522563 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178da0);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e6988);
    FUN_03f5c2a4(&DAT_0918edd8);
    FUN_03f5c2a4(&DAT_092205c0);
    FUN_03f5c2a4(&DAT_09220590);
    DAT_09522563 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918edd8);
  System_Object___ctor(lVar1,0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
  if (plVar2 == (long *)0x0) goto LAB_076889b8;
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_076889c0:
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if ((int)plVar2[3] == 0) {
LAB_076889bc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar2[4] = param_1;
  thunk_FUN_03f5d7b8(plVar2 + 4,param_1);
  if (param_2 != 0) {
    lVar3 = System_Type__GetMethod(param_2,DAT_092205c0,plVar2,0);
    if (lVar3 == 0) {
      plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar2 == (long *)0x0) goto LAB_076889b8;
      if ((param_1 != 0) &&
         (lVar3 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_076889c0;
      if ((int)plVar2[3] == 0) goto LAB_076889bc;
      plVar2[4] = param_1;
      thunk_FUN_03f5d7b8(plVar2 + 4,param_1);
      lVar3 = System_Type__GetMethod(param_2,DAT_09220590,plVar2,0);
    }
    uVar4 = System_Reflection_MethodInfo__op_Equality(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar2 != (long *)0x0) {
      lVar5 = FUN_03f5c420(*(undefined8 *)
                            (*plVar2 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar5 + 8))(plVar2,lVar3,lVar5);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = uVar6;
        thunk_FUN_03f5d7b8();
        uVar6 = thunk_FUN_03f9944c(DAT_09178da0);
        FUN_05324070(uVar6,lVar1,DAT_091e6988,0);
        return uVar6;
      }
    }
  }
LAB_076889b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

