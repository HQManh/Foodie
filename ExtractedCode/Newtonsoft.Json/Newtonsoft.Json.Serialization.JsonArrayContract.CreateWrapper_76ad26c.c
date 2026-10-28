// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonArrayContract$$CreateWrapper
// address: 0x76ad26c
// body: available
// range: 0x76ad26c-0x76ad67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ad65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad660 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad66c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ad678 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonArrayContract__CreateWrapper(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_0952265d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091711e0);
    FUN_03f5c2a4(&DAT_09171b40);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_091869b8);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09172288);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952265d = 1;
  }
  uVar4 = DAT_091711e0;
  plVar8 = (long *)(param_1 + 0xe0);
  lVar9 = *plVar8;
  if (lVar9 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)System_Type__GetTypeFromHandle(uVar4,0);
    plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar2 == (long *)0x0) goto LAB_076ad65c;
    lVar9 = *(long *)(param_1 + 0xc0);
    if ((lVar9 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_076ad664;
    if ((int)plVar2[3] == 0) goto LAB_076ad660;
    plVar2[4] = lVar9;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar9);
    if (plVar1 == (long *)0x0) goto LAB_076ad65c;
    lVar9 = (**(code **)(*plVar1 + 0x948))(plVar1,plVar2,*(undefined8 *)(*plVar1 + 0x950));
    plVar1 = (long *)(param_1 + 0xd8);
    *plVar1 = lVar9;
    thunk_FUN_03f5d7b8(plVar1,lVar9);
    uVar10 = *(undefined8 *)(param_1 + 0xd0);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09172288,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__InheritsGenericDefinition(uVar10,uVar4,0);
    if ((uVar5 & 1) == 0) {
      plVar2 = *(long **)(param_1 + 0xd0);
      if (plVar2 == (long *)0x0) goto LAB_076ad65c;
      uVar10 = (**(code **)(*plVar2 + 0x468))(plVar2,*(undefined8 *)(*plVar2 + 0x470));
      uVar4 = DAT_09171bc0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
      uVar5 = System_Type__op_Equality(uVar10,uVar4,0);
      if ((uVar5 & 1) != 0) goto LAB_076ad474;
      lVar9 = *(long *)(param_1 + 0xd0);
    }
    else {
LAB_076ad474:
      uVar4 = DAT_09171b40;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar2 = (long *)System_Type__GetTypeFromHandle(uVar4,0);
      plVar6 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar6 == (long *)0x0) goto LAB_076ad65c;
      lVar9 = *(long *)(param_1 + 0xc0);
      if ((lVar9 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
      goto LAB_076ad664;
      if ((int)plVar6[3] == 0) goto LAB_076ad660;
      plVar6[4] = lVar9;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar9);
      if (plVar2 == (long *)0x0) goto LAB_076ad65c;
      lVar9 = (**(code **)(*plVar2 + 0x948))(plVar2,plVar6,*(undefined8 *)(*plVar2 + 0x950));
    }
    lVar3 = *plVar1;
    plVar1 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar1 == (long *)0x0) goto LAB_076ad65c;
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar1 + 0x40)), lVar7 == 0))
    goto LAB_076ad664;
    if ((int)plVar1[3] == 0) goto LAB_076ad660;
    plVar1[4] = lVar9;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar9);
    if (lVar3 == 0) goto LAB_076ad65c;
    uVar4 = System_Type__GetConstructor(lVar3,plVar1,0);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187480);
    }
    plVar1 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar1 == (long *)0x0) goto LAB_076ad65c;
    lVar9 = (**(code **)(*plVar1 + 0x188))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 400));
    *plVar8 = lVar9;
    thunk_FUN_03f5d7b8(plVar8,lVar9);
    lVar9 = *plVar8;
  }
  plVar8 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar8 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
LAB_076ad664:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_076ad660:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar8[4] = param_2;
    thunk_FUN_03f5d7b8(plVar8 + 4,param_2);
    if (lVar9 != 0) {
      lVar9 = (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),plVar8,*(undefined8 *)(lVar9 + 0x28));
      uVar4 = DAT_091869b8;
      if (lVar9 != 0) {
        lVar3 = thunk_FUN_03f99350(lVar9,DAT_091869b8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar9,uVar4);
        }
      }
      return;
    }
  }
LAB_076ad65c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

