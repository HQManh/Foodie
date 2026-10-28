// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver.<>c__DisplayClass45_1$$<SetExtensionDataDelegates>b__0
// address: 0x76ab554
// body: available
// range: 0x76ab554-0x76ab75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ab6ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ab6b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ab6bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ab758 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass45_1__<SetExtensionDataDelegates>b__0
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_0952264a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952264a = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar6 == 0)) goto LAB_076ab6ac;
  lVar6 = (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x28));
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar6 = *(long *)(param_1 + 0x28);
      FUN_039b1d98(lVar6);
      plVar1 = *(long **)(lVar6 + 0x18);
      FUN_039b1d98(plVar1);
      uVar4 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar5 = thunk_FUN_03fc39d4(&DAT_091fe3d0);
      uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar4);
      thunk_FUN_03fc39d4(&DAT_09187420);
      uVar4 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonSerializationException___ctor(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091e8d58);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_076ab6ac;
    lVar6 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_076ab6ac;
    (**(code **)(lVar7 + 0x18))
              (*(undefined8 *)(lVar7 + 0x40),param_2,lVar6,*(undefined8 *)(lVar7 + 0x28));
  }
  lVar7 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,2);
  if (plVar1 == (long *)0x0) {
LAB_076ab6ac:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((param_3 != 0) &&
     (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_076ab6b4:
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = param_3;
    thunk_FUN_03f5d7b8(plVar1 + 4,param_3);
    if ((param_4 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_4,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_076ab6b4;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = param_4;
      thunk_FUN_03f5d7b8(plVar1 + 5,param_4);
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076ab6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),lVar6,plVar1,*(undefined8 *)(lVar7 + 0x28));
        return;
      }
      goto LAB_076ab6ac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

