// rea decompile_all
// name: MessagePack.Internal.ResolverUtilities$$ActivateFormatter
// address: 0x73d7388
// body: available
// range: 0x73d7388-0x73d764f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d74b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d750c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d75ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d764c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ResolverUtilities__ActivateFormatter(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09520cee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09186088);
    DAT_09520cee = 1;
  }
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = System_Type__GetConstructor
                      (param_1,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar1 = DAT_091c0270;
    if (lVar2 == 0) {
      plVar3 = (long *)MessagePack_Internal_ResolverUtilities__FetchSingletonField(param_1);
      if (plVar3 == (long *)0x0) {
        FUN_039b1d98(param_1);
        uVar9 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
        uVar5 = thunk_FUN_03fc39d4(&DAT_0920eac8);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091f6468);
        uVar9 = System_String__Concat(uVar5,uVar9,uVar6,0);
        thunk_FUN_03fc39d4(&DAT_09188180);
        uVar5 = thunk_FUN_03f9944c();
        MessagePack_MessagePackSerializationException___ctor(uVar5,uVar9,0);
      }
      else {
        lVar1 = (**(code **)(*plVar3 + 0x2f8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x300));
        uVar9 = DAT_09186088;
        if (lVar1 != 0) {
          lVar2 = thunk_FUN_03f99350(lVar1,DAT_09186088);
          if (lVar2 != 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar1,uVar9);
        }
        plVar4 = (long *)(**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        if (plVar4 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        }
        FUN_039b1d98(plVar3);
        uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar6 = thunk_FUN_03fc39d4(&DAT_091f8f68);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091f6980);
        uVar9 = System_String__Concat(uVar9,uVar6,uVar5,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar5 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar5,uVar9,0);
      }
      uVar9 = thunk_FUN_03fc39d4(&DAT_091d7a78);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar9);
    }
    lVar8 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar8 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar8 = *(long *)(lVar1 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = System_Reflection_ConstructorInfo__Invoke(lVar2,**(undefined8 **)(lVar1 + 0xb8),0);
    uVar9 = DAT_09186088;
  }
  else {
    lVar1 = System_Activator__CreateInstance(param_1,param_2,0);
    uVar9 = DAT_09186088;
  }
  DAT_09186088 = uVar9;
  if ((lVar1 != 0) && (lVar2 = thunk_FUN_03f99350(lVar1,uVar9), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar1,uVar9);
  }
  return;
}

