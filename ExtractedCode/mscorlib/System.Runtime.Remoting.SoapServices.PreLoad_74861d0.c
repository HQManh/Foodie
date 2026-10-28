// rea decompile_all
// name: System.Runtime.Remoting.SoapServices$$PreLoad
// address: 0x74861d0
// body: available
// range: 0x74861d0-0x7486613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74865dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865e4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74865fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7486604 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7486608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748660c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7486610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07486600) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_SoapServices__PreLoad(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  char local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_095212c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_09187010);
    FUN_03f5c2a4(&DAT_0918adf8);
    FUN_03f5c2a4(&DAT_0918ae10);
    FUN_03f5c2a4(&DAT_09194980);
    DAT_095212c7 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_7c[0] = '\0';
  if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = *(long **)(*(long *)(DAT_0918ae10 + 0xb8) + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x308))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x310))
    ;
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(DAT_09194980 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09194980 + 0x130) * 8 + -8) ==
          DAT_09194980)) {
        return;
      }
    }
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Runtime_Remoting_SoapServices__GetXmlTypeForInteropType
                      (param_1,&uStack_68,&local_70);
    uVar5 = uStack_68;
    uVar8 = local_70;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_SoapServices__RegisterInteropXmlType(uVar5,uVar8,param_1);
    }
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Runtime_Remoting_SoapServices__GetXmlElementForInteropType
                      (param_1,&uStack_68,&local_70);
    uVar5 = uStack_68;
    uVar8 = local_70;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_SoapServices__RegisterInteropXmlElement(uVar5,uVar8,param_1);
    }
    if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = *(long **)(*(long *)(DAT_0918ae10 + 0xb8) + 0x20);
    if (plVar1 != (long *)0x0) {
      local_78 = (**(code **)(*plVar1 + 0x3b8))(plVar1,*(undefined8 *)(*plVar1 + 0x3c0));
      local_7c[0] = '\0';
      System_Threading_Monitor__Enter(local_78,local_7c,0);
      lVar3 = thunk_FUN_03f9944c(DAT_09194980);
      System_Object___ctor(lVar3,0);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = (**(code **)(*param_1 + 0x708))(param_1,0x34,*(undefined8 *)(*param_1 + 0x710));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar2 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar8 = *(undefined8 *)(lVar4 + 0x20 + uVar2 * 8);
          if (*(int *)(DAT_09187010 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar1 = (long *)System_Runtime_Remoting_InternalRemotingServices__GetCachedSoapAttribute
                                     (uVar8);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*plVar1 != DAT_0918adf8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar1);
          }
          if ((char)plVar1[6] != '\0') {
            lVar9 = plVar1[5];
            uVar5 = (**(code **)(DAT_0918adf8 + 0x1b8))
                              (plVar1,*(undefined8 *)(DAT_0918adf8 + 0x1c0));
            if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Runtime_Remoting_SoapServices__GetNameKey(lVar9,uVar5);
            uVar7 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
            if ((uVar7 & 1) == 0) {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar1 = *(long **)(lVar3 + 0x18);
              if (plVar1 == (long *)0x0) {
                uVar6 = thunk_FUN_03f9944c(DAT_09185048);
                System_Collections_Hashtable___ctor(uVar6,0);
                *(undefined8 *)(lVar3 + 0x18) = uVar6;
                thunk_FUN_03f5d7b8(lVar3 + 0x18,uVar6);
                plVar1 = *(long **)(lVar3 + 0x18);
                if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              (**(code **)(*plVar1 + 0x318))(plVar1,uVar5,uVar8,*(undefined8 *)(*plVar1 + 800));
            }
            else {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar1 = *(long **)(lVar3 + 0x10);
              if (plVar1 == (long *)0x0) {
                uVar6 = thunk_FUN_03f9944c(DAT_09185048);
                System_Collections_Hashtable___ctor(uVar6,0);
                *(undefined8 *)(lVar3 + 0x10) = uVar6;
                thunk_FUN_03f5d7b8(lVar3 + 0x10,uVar6);
                plVar1 = *(long **)(lVar3 + 0x10);
                if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              (**(code **)(*plVar1 + 0x318))(plVar1,uVar5,uVar8,*(undefined8 *)(*plVar1 + 800));
            }
          }
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (*(int *)(DAT_0918ae10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar1 = *(long **)(*(long *)(DAT_0918ae10 + 0xb8) + 0x20);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x318))(plVar1,param_1,lVar3,*(undefined8 *)(*plVar1 + 800));
        if (local_7c[0] != '\0') {
          System_Threading_Monitor__Exit(local_78,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0,param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

