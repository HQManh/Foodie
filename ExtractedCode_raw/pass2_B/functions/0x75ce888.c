// rea decompile_all
// name: System.Type$$IsEnumDefined
// address: 0x75ce888
// body: available
// range: 0x75ce888-0x75cebeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75cea58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ceb1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75cebe8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Type__IsEnumDefined(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_09521e01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0530);
    DAT_09521e01 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar9,uVar8,0);
LAB_075ceb08:
    uVar8 = thunk_FUN_03fc39d4(&DAT_091dc150);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar8);
  }
  uVar5 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
  if ((uVar5 & 1) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092112c0);
    uVar11 = thunk_FUN_03fc39d4(&DAT_0921b048);
    System_ArgumentException___ctor(uVar9,uVar8,uVar11,0);
    goto LAB_075ceb08;
  }
  plVar6 = (long *)System_Object__GetType(param_2,0);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
    if ((uVar5 & 1) != 0) {
      uVar5 = (**(code **)(*plVar6 + 0x8e8))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x8f0));
      if ((uVar5 & 1) == 0) {
        FUN_039b1d98(plVar6);
        uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        uVar9 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        puVar10 = &DAT_09209510;
        goto LAB_075ceb9c;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x8f8))(plVar6,*(undefined8 *)(*plVar6 + 0x900));
    }
    lVar1 = DAT_09535468;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)System_Type__GetTypeFromHandle(lVar1 + 0x20);
    if (plVar6 == plVar7) {
      uVar8 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      uVar4 = FUN_04ee582c(uVar8,param_2,DAT_091c0530);
LAB_075cea38:
      return ~uVar4 >> 0x1f;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__IsIntegerType(plVar6);
    if ((uVar5 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar9 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_092123c8);
      System_InvalidOperationException___ctor(uVar9,uVar8,0);
      goto LAB_075ceb08;
    }
    plVar7 = (long *)(**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
    if (plVar7 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar7 + 0x888))(plVar7,*(undefined8 *)(*plVar7 + 0x890));
      if (plVar6 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar6 + 0x888))(plVar6,*(undefined8 *)(*plVar6 + 0x890));
        if (iVar2 != iVar3) {
          FUN_039b1d98(plVar6);
          uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_039b1d98(plVar7);
          uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          puVar10 = &DAT_09201668;
LAB_075ceb9c:
          uVar11 = thunk_FUN_03fc39d4(puVar10);
          uVar8 = SR__Format(uVar11,uVar8,uVar9,0);
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar9 = thunk_FUN_03f9944c();
          System_ArgumentException___ctor(uVar9,uVar8,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091dc150);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,uVar8);
        }
        local_38 = 0;
        local_48 = 0;
        System_Type__GetEnumData(param_1,&local_38,&local_48);
        uVar8 = local_48;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__BinarySearch(uVar8,param_2);
        goto LAB_075cea38;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

