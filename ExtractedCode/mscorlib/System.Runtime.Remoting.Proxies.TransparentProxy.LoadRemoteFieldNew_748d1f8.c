// rea decompile_all
// name: System.Runtime.Remoting.Proxies.TransparentProxy$$LoadRemoteFieldNew
// address: 0x748d1f8
// body: available
// range: 0x748d1f8-0x748d4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748d454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d458 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d464 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748d4c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Proxies_TransparentProxy__LoadRemoteFieldNew
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_50;
  long local_48;
  undefined8 local_38;
  
  if ((DAT_095212d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188398);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09202930);
    DAT_095212d8 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  Mono_RuntimeClassHandle___ctor(&local_38,param_2,0);
  uVar1 = Mono_RuntimeClassHandle__GetTypeHandle(&local_38,0);
  plVar2 = (long *)System_Reflection_FieldInfo__GetFieldFromHandle(param_3,0);
  uVar3 = System_Runtime_Remoting_Proxies_TransparentProxy__InCurrentContext(param_1);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300)),
       plVar2 != (long *)0x0)) {
      lVar6 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
      if (plVar2 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
LAB_0748d45c:
          uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar1,0);
        }
        if ((int)plVar2[3] != 0) {
          plVar2[4] = lVar5;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
          goto LAB_0748d45c;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
            plVar2[5] = lVar6;
            thunk_FUN_03f5d7b8(plVar2 + 5,lVar6);
            uVar1 = FUN_03f5c394(DAT_09180318,1);
            lVar5 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            if (lVar5 != 0) {
              uVar8 = System_Type__GetMethod(lVar5,DAT_09202930,0x24,0);
              uVar3 = System_Reflection_MethodInfo__op_Equality(uVar8,0,0);
              if ((uVar3 & 1) == 0) {
                uVar9 = thunk_FUN_03f9944c(DAT_09188398);
                System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor
                          (uVar9,uVar8,plVar2,uVar1,0);
                System_Runtime_Remoting_Proxies_RealProxy__PrivateInvoke
                          (*(undefined8 *)(param_1 + 0x10),uVar9,&local_50,&local_48);
                lVar5 = local_50;
                if (local_50 == 0) {
                  if (local_48 != 0) {
                    if (*(int *)(local_48 + 0x18) != 0) {
                      return *(undefined8 *)(local_48 + 0x20);
                    }
                    goto LAB_0748d458;
                  }
                  goto LAB_0748d454;
                }
              }
              else {
                thunk_FUN_03fc39d4(&DAT_091882d0);
                lVar5 = thunk_FUN_03f9944c();
                uVar1 = thunk_FUN_03fc39d4(&DAT_0920e100);
                uVar8 = thunk_FUN_03fc39d4(&DAT_09202930);
                System_MissingMethodException___ctor(lVar5,uVar1,uVar8,0);
              }
              uVar1 = thunk_FUN_03fc39d4(&DAT_091dbb60);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(lVar5,uVar1);
            }
            goto LAB_0748d454;
          }
        }
LAB_0748d458:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
  else if ((*(long *)(param_1 + 0x10) != 0) && (plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x2f8))
                      (plVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),
                       *(undefined8 *)(*plVar2 + 0x300));
    return uVar1;
  }
LAB_0748d454:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

