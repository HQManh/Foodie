// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RemotingProxy$$Invoke
// address: 0x748ecec
// body: available
// range: 0x748ecec-0x748f2af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748f2ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Proxies_RemotingProxy__Invoke(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 local_34;
  
  if ((DAT_095212e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185ee0);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_09188238);
    FUN_03f5c2a4(&DAT_09188398);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189ed0);
    FUN_03f5c2a4(&DAT_0918a260);
    DAT_095212e2 = 1;
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_2,DAT_091860a0);
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_0748ee00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091860a8,3);
LAB_0748ee00:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (*(int *)(DAT_09189ed0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed0);
    }
    uVar8 = System_Reflection_MethodBase__op_Equality
                      (uVar4,*(undefined8 *)(*(long *)(DAT_09189ed0 + 0xb8) + 8),0);
    if ((uVar8 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x38);
      if (plVar5 != (long *)0x0) {
        local_34 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
LAB_0748ef0c:
        uVar6 = thunk_FUN_03f9944c(DAT_09188238);
        System_Runtime_Remoting_Messaging_MethodResponse___ctor(uVar6,uVar4,0,0,plVar2,0);
        return uVar6;
      }
      goto LAB_0748f2ac;
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_0748eec4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091860a8,3);
LAB_0748eec4:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (*(int *)(DAT_09189ed0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ed0);
    }
    uVar8 = System_Reflection_MethodBase__op_Equality
                      (uVar4,**(undefined8 **)(DAT_09189ed0 + 0xb8),0);
    if ((uVar8 & 1) != 0) {
      uVar4 = System_Runtime_Remoting_Proxies_RealProxy__GetProxiedType(param_1);
      goto LAB_0748ef0c;
    }
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_2,DAT_09185ee0);
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185ee0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0748efb0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185ee0,2);
LAB_0748efb0:
    lVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar7 == 0) {
      lVar7 = *plVar2;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185ee0) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_0748f014;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185ee0,3);
LAB_0748f014:
      (*(code *)*puVar3)(plVar2,uVar4,puVar3[1]);
    }
    lVar7 = *plVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185ee0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0748f078;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185ee0,1);
LAB_0748f078:
    (*(code *)*puVar3)(plVar2,uVar4,puVar3[1]);
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_0748f2ac;
  System_Runtime_Remoting_Identity__NotifyClientDynamicSinks
            (*(long *)(param_1 + 0x38),1,param_2,1,0);
  lVar7 = System_Threading_Thread__get_CurrentContext(0);
  if (lVar7 == 0) goto LAB_0748f2ac;
  uVar8 = System_Runtime_Remoting_Contexts_Context__get_HasExitSinks(lVar7,0);
  if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0x58) != '\0')) {
    plVar2 = *(long **)(param_1 + 0x50);
    if (param_2 == (long *)0x0) goto LAB_0748f17c;
LAB_0748f0cc:
    if (((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09188398 + 0x130)) ||
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09188398 + 0x130) * 8 + -8) !=
         DAT_09188398)) ||
       (iVar1 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_CallType(param_2,0),
       iVar1 == 0)) goto LAB_0748f17c;
    if (plVar2 == (long *)0x0) goto LAB_0748f2ac;
    lVar7 = *plVar2;
    plVar5 = (long *)param_2[9];
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09186090) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0748f22c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186090,1);
LAB_0748f22c:
    uVar4 = (*(code *)*puVar3)(plVar2,param_2,plVar5,puVar3[1]);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x280));
    }
    uVar4 = FUN_03f5c394(DAT_09180318,0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918a260);
    System_Runtime_Remoting_Messaging_ReturnMessage___ctor(uVar6,0,uVar4,0,0,param_2,0);
  }
  else {
    lVar7 = System_Threading_Thread__get_CurrentContext(0);
    if (lVar7 == 0) goto LAB_0748f2ac;
    plVar2 = (long *)System_Runtime_Remoting_Contexts_Context__GetClientContextSinkChain(lVar7,0);
    if (param_2 != (long *)0x0) goto LAB_0748f0cc;
LAB_0748f17c:
    if (plVar2 == (long *)0x0) goto LAB_0748f2ac;
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09186090) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0748f1d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186090,0);
LAB_0748f1d4:
    uVar6 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Runtime_Remoting_Identity__NotifyClientDynamicSinks
              (*(long *)(param_1 + 0x38),0,param_2,1,0);
    return uVar6;
  }
LAB_0748f2ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

