// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonDictionaryContract$$CreateWrapper
// address: 0x76ae93c
// body: available
// range: 0x76ae93c-0x76aec03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aebe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aebe8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aebf4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aec00 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateWrapper(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09522676 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091715b0);
    FUN_03f5c2a4(&DAT_091869c0);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09522676 = 1;
  }
  uVar5 = DAT_091715b0;
  plVar6 = (long *)(param_1 + 0xf0);
  lVar7 = *plVar6;
  if (lVar7 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)System_Type__GetTypeFromHandle(uVar5,0);
    plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
    if (plVar2 == (long *)0x0) goto LAB_076aebe4;
    lVar7 = *(long *)(param_1 + 200);
    if ((lVar7 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_076aebec;
    if ((int)plVar2[3] == 0) goto LAB_076aebe8;
    plVar2[4] = lVar7;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar7);
    lVar7 = *(long *)(param_1 + 0xd0);
    if ((lVar7 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_076aebec;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_076aebe8;
    plVar2[5] = lVar7;
    thunk_FUN_03f5d7b8(plVar2 + 5,lVar7);
    if (plVar1 == (long *)0x0) goto LAB_076aebe4;
    lVar7 = (**(code **)(*plVar1 + 0x948))(plVar1,plVar2,*(undefined8 *)(*plVar1 + 0x950));
    plVar1 = (long *)(param_1 + 0xe8);
    *plVar1 = lVar7;
    thunk_FUN_03f5d7b8(plVar1,lVar7);
    lVar7 = *plVar1;
    plVar1 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar1 == (long *)0x0) goto LAB_076aebe4;
    lVar3 = *(long *)(param_1 + 0xe0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_076aebec;
    if ((int)plVar1[3] == 0) goto LAB_076aebe8;
    plVar1[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar3);
    if (lVar7 == 0) goto LAB_076aebe4;
    uVar5 = System_Type__GetConstructor(lVar7,plVar1,0);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187480);
    }
    plVar1 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar1 == (long *)0x0) goto LAB_076aebe4;
    lVar7 = (**(code **)(*plVar1 + 0x188))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 400));
    *plVar6 = lVar7;
    thunk_FUN_03f5d7b8(plVar6,lVar7);
    lVar7 = *plVar6;
  }
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar6 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
LAB_076aebec:
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar6[3] == 0) {
LAB_076aebe8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar6[4] = param_2;
    thunk_FUN_03f5d7b8(plVar6 + 4,param_2);
    if (lVar7 != 0) {
      lVar7 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),plVar6,*(undefined8 *)(lVar7 + 0x28));
      uVar5 = DAT_091869c0;
      if (lVar7 != 0) {
        lVar3 = thunk_FUN_03f99350(lVar7,DAT_091869c0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar7,uVar5);
        }
      }
      return;
    }
  }
LAB_076aebe4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

