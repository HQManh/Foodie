// rea decompile_all
// name: System.RuntimeType$$IsEnumDefined
// address: 0x75f48cc
// body: available
// range: 0x75f48cc-0x75f4daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f49e0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f4b3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f4b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f4dac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_RuntimeType__IsEnumDefined(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  if ((DAT_09521f50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0070);
    FUN_03f5c2a4(&DAT_091c0530);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f50 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d82d8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  plVar2 = (long *)System_Object__GetType(param_2,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar2;
  if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
      DAT_0918a400)) {
LAB_075f49dc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  uVar3 = (**(code **)(lVar8 + 0x5d8))(plVar2,*(undefined8 *)(lVar8 + 0x5e0));
  if ((uVar3 & 1) == 0) {
LAB_075f49e8:
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (plVar2 == *(long **)(*(long *)(DAT_0918a400 + 0xb8) + 0x18)) {
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Enum__InternalGetNames(param_1);
      uVar1 = FUN_04ee582c(uVar5,param_2,DAT_091c0530);
LAB_075f4ae0:
      return ~uVar1 >> 0x1f;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__IsIntegerType(plVar2,0);
    if ((uVar3 & 1) == 0) {
      lVar8 = thunk_FUN_03fc39d4(&DAT_09182818);
      if (**(char **)(lVar8 + 0xb8) == '\0') {
        uVar5 = thunk_FUN_03fc39d4(&DAT_092123c8);
        uVar5 = System_Environment__GetResourceString(uVar5,0);
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar6 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar6,uVar5,0);
        goto LAB_075f4d98;
      }
      uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar5,2);
      FUN_039b1d98(plVar2);
      uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      FUN_039b1d98(uVar5);
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,0,uVar6);
      uVar6 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
      FUN_039b0da0(uVar5,uVar6);
      FUN_039af17c(uVar5,1,uVar6);
      puVar7 = &DAT_09201668;
      goto LAB_075f4d64;
    }
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)FUN_03f72cac(param_1);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (plVar4 == plVar2) {
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Enum__InternalGetValues(param_1);
      uVar6 = System_Enum__ToUInt64(param_2);
      uVar1 = FUN_04df1d50(uVar5,uVar6,DAT_091c0070);
      goto LAB_075f4ae0;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar5 = FUN_03f5c394(uVar5,2);
    FUN_039b1d98(plVar2);
    uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    FUN_039b1d98(uVar5);
    FUN_039b0da0(uVar5,uVar6);
    FUN_039af17c(uVar5,0,uVar6);
    FUN_039b1d98(plVar4);
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_039b0da0(uVar5,uVar6);
    FUN_039af17c(uVar5,1,uVar6);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09201668);
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x8e8))(plVar2,param_1,*(undefined8 *)(*plVar2 + 0x8f0));
    if ((uVar3 & 1) != 0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x8f8))(plVar2,*(undefined8 *)(*plVar2 + 0x900));
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) goto LAB_075f49dc;
      }
      goto LAB_075f49e8;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar5 = FUN_03f5c394(uVar5,2);
    FUN_039b1d98(plVar2);
    uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    FUN_039b1d98(uVar5);
    FUN_039b0da0(uVar5,uVar6);
    FUN_039af17c(uVar5,0,uVar6);
    uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    FUN_039b0da0(uVar5,uVar6);
    FUN_039af17c(uVar5,1,uVar6);
    puVar7 = &DAT_09209510;
LAB_075f4d64:
    uVar6 = thunk_FUN_03fc39d4(puVar7);
  }
  uVar5 = System_Environment__GetResourceString(uVar6,uVar5,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar6 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar6,uVar5,0);
LAB_075f4d98:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d82d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

