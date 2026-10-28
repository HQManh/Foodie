// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonDictionaryContract$$CreateTemporaryDictionary
// address: 0x76aec04
// body: available
// range: 0x76aec04-0x76aee7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aee60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aee64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aee70 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76aee7c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonDictionaryContract__CreateTemporaryDictionary(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09522677 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091715b8);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7110);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09522677 = 1;
  }
  uVar3 = DAT_091715b8;
  plVar5 = (long *)(param_1 + 0xf8);
  lVar4 = *plVar5;
  if (lVar4 != 0) goto LAB_076aee1c;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Type__GetTypeFromHandle(uVar3,0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
  lVar4 = DAT_095353e8;
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
  }
  if (plVar2 == (long *)0x0) goto LAB_076aee60;
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
  goto LAB_076aee74;
  if ((int)plVar2[3] == 0) goto LAB_076aee64;
  plVar2[4] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 4,lVar6);
  lVar4 = DAT_095353e8;
  lVar6 = *(long *)(param_1 + 0xd0);
  if (lVar6 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
    if (lVar6 != 0) goto LAB_076aed54;
  }
  else {
LAB_076aed54:
    lVar4 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar4 == 0) {
LAB_076aee74:
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
  }
  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) {
LAB_076aee64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar2[5] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 5,lVar6);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x948))(plVar1,plVar2,*(undefined8 *)(*plVar1 + 0x950));
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187480);
    }
    plVar1 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar1 != (long *)0x0) {
      lVar4 = FUN_03f5c420(*(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(DAT_091d7110 + 0x50) * 0x10 + 0x140));
      lVar4 = (**(code **)(lVar4 + 8))(plVar1,uVar3,lVar4);
      *plVar5 = lVar4;
      thunk_FUN_03f5d7b8(plVar5,lVar4);
      lVar4 = *plVar5;
      if (lVar4 != 0) {
LAB_076aee1c:
        lVar4 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        uVar3 = DAT_09185a20;
        if (lVar4 != 0) {
          lVar6 = thunk_FUN_03f99350(lVar4,DAT_09185a20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar4,uVar3);
          }
        }
        return;
      }
    }
  }
LAB_076aee60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

