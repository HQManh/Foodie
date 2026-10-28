// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonArrayContract$$CreateTemporaryCollection
// address: 0x76ad67c
// body: available
// range: 0x76ad67c-0x76ad8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ad8a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad8ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad8b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad8bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonArrayContract__CreateTemporaryCollection(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0952265e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09172288);
    FUN_03f5c2a4(&DAT_091d7110);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952265e = 1;
  }
  plVar6 = (long *)(param_1 + 0xe8);
  lVar5 = *plVar6;
  if (lVar5 != 0) goto LAB_076ad858;
  if (*(char *)(param_1 + 200) == '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__op_Equality(uVar7,0,0);
    if ((uVar1 & 1) != 0) goto LAB_076ad720;
    lVar5 = *(long *)(param_1 + 0xc0);
  }
  else {
LAB_076ad720:
    lVar5 = DAT_095353e8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
  }
  uVar7 = DAT_09172288;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)System_Type__GetTypeFromHandle(uVar7,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180748,1);
  if (plVar3 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar5);
    if (plVar2 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar2 + 0x948))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x950));
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187480);
      }
      plVar2 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar2 != (long *)0x0) {
        lVar5 = FUN_03f5c420(*(undefined8 *)
                              (*plVar2 + (ulong)*(ushort *)(DAT_091d7110 + 0x50) * 0x10 + 0x140));
        lVar5 = (**(code **)(lVar5 + 8))(plVar2,uVar7,lVar5);
        *plVar6 = lVar5;
        thunk_FUN_03f5d7b8(plVar6,lVar5);
        lVar5 = *plVar6;
        if (lVar5 != 0) {
LAB_076ad858:
          lVar5 = (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          uVar7 = DAT_09185f80;
          if (lVar5 != 0) {
            lVar4 = thunk_FUN_03f99350(lVar5,DAT_09185f80);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar5,uVar7);
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

