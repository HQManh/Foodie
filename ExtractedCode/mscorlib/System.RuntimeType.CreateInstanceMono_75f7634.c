// rea decompile_all
// name: System.RuntimeType$$CreateInstanceMono
// address: 0x75f7634
// body: available
// range: 0x75f7634-0x75f78f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f77bc to 0x3f6e8a0 FUN_03f6e8a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75f77f4 to 0x74f0dc8 System.Reflection.RuntimeConstructorInfo$$InternalInvoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75f7834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f78f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType__CreateInstanceMono(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521f60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09172b08);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_091732f8);
    DAT_09521f60 = 1;
  }
  lVar1 = System_RuntimeType__GetDefaultConstructor(param_1);
  if ((param_2 & 1) == 0) {
    if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Reflection_ConstructorInfo__op_Inequality(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) goto LAB_075f7834;
      uVar2 = System_Reflection_MethodBase__get_IsPublic(lVar1,0);
      if ((uVar2 & 1) == 0) {
        lVar1 = 0;
      }
    }
  }
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Reflection_ConstructorInfo__op_Equality(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_Type__get_IsAbstract(param_1,0);
    if ((uVar2 & 1) == 0) {
      if (lVar1 != 0) {
        System_Reflection_RuntimeConstructorInfo__InternalInvoke(lVar1,0,0,param_3 & 1,0);
        return;
      }
LAB_075f7834:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
    thunk_FUN_03fc39d4(&DAT_091882d0);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fdc20);
    System_MissingMethodException___ctor(uVar6,uVar5,uVar4,0);
  }
  else {
    lVar1 = System_Type__GetRootElementType(param_1,0);
    uVar4 = DAT_091732f8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    lVar3 = System_Type__GetTypeFromHandle(uVar4,0);
    uVar4 = DAT_09172b08;
    if (lVar1 != lVar3) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = System_Type__GetTypeFromHandle(uVar4,0);
      if (lVar1 != lVar3) {
        uVar2 = System_Type__get_IsValueType(param_1,0);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_03f6e8a0(param_1);
          return;
        }
        uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
        uVar5 = thunk_FUN_03fc39d4(&DAT_09200520);
        uVar4 = System_String__Concat(uVar5,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_091882d0);
        uVar6 = thunk_FUN_03f9944c();
        System_MissingMethodException___ctor(uVar6,uVar4,0);
        goto LAB_075f78dc;
      }
    }
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fdc58);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar6 = thunk_FUN_03f9944c();
    System_NotSupportedException___ctor(uVar6,uVar4,0);
  }
LAB_075f78dc:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d8230);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar4);
}

