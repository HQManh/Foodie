// rea decompile_all
// name: System.Runtime.Remoting.InternalRemotingServices$$GetCachedSoapAttribute
// address: 0x747d718
// body: available
// range: 0x747d718-0x747dbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747d9b4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db7c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747db9c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747dba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747dba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747dba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747db7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Runtime_Remoting_InternalRemotingServices__GetCachedSoapAttribute(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  char local_4c [4];
  undefined8 local_48;
  
  if ((DAT_09521253 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09185938);
    FUN_03f5c2a4(&DAT_09187010);
    FUN_03f5c2a4(&DAT_091881d0);
    FUN_03f5c2a4(&DAT_09188e60);
    FUN_03f5c2a4(&DAT_09172d28);
    FUN_03f5c2a4(&DAT_0918adf0);
    FUN_03f5c2a4(&DAT_0918adf8);
    FUN_03f5c2a4(&DAT_0918ae00);
    FUN_03f5c2a4(&DAT_0918ae08);
    FUN_03f5c2a4(&DAT_0918ae18);
    DAT_09521253 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  if (*(int *)(DAT_09187010 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)**(long **)(DAT_09187010 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_48 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
  local_4c[0] = '\0';
  System_Threading_Monitor__Enter(local_48,local_4c,0);
  if (*(int *)(DAT_09187010 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)**(long **)(DAT_09187010 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x308))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x310));
  uVar4 = DAT_09172d28;
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(DAT_0918adf0 + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918adf0 + 0x130) * 8 + -8) ==
        DAT_0918adf0)) goto LAB_0747db34;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  lVar8 = DAT_09185938;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = thunk_FUN_03f99350(param_1,DAT_09185938);
  lVar2 = DAT_09185938;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1,lVar8);
  }
  plVar3 = (long *)thunk_FUN_03f99350(param_1,DAT_09185938);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1,lVar2);
  }
  lVar8 = *plVar3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar2) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0747d958;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar3,lVar2,1);
LAB_0747d958:
  lVar8 = (*(code *)*puVar6)(plVar3,uVar4,1,puVar6[1]);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar8 + 0x18) == 0) {
    lVar8 = *param_1;
    bVar1 = *(byte *)(lVar8 + 0x130);
    if ((bVar1 < *(byte *)(DAT_095354b8 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) !=
        DAT_095354b8)) {
      if ((bVar1 < *(byte *)(DAT_09184518 + 0x130)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
          DAT_09184518)) {
        if ((bVar1 < *(byte *)(DAT_091881d0 + 0x130)) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_091881d0 + 0x130) * 8 + -8) !=
            DAT_091881d0)) {
          if ((bVar1 < *(byte *)(DAT_09188e60 + 0x130)) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09188e60 + 0x130) * 8 + -8) !=
              DAT_09188e60)) goto LAB_0747db74;
          plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918ae08);
          System_Runtime_Remoting_Metadata_SoapParameterAttribute___ctor(plVar3,0);
        }
        else {
          plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918ae00);
          System_Runtime_Remoting_Metadata_SoapMethodAttribute___ctor(plVar3,0);
        }
      }
      else {
        plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918adf8);
        System_Runtime_Remoting_Metadata_SoapFieldAttribute___ctor(plVar3,0);
      }
    }
    else {
      plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918ae18);
      System_Runtime_Remoting_Metadata_SoapTypeAttribute___ctor(plVar3,0);
    }
    if (plVar3 == (long *)0x0) goto LAB_0747db74;
    lVar8 = *plVar3;
  }
  else {
    if ((int)*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3 = *(long **)(lVar8 + 0x20);
    if (plVar3 == (long *)0x0) {
LAB_0747db74:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar3;
    if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_0918adf0 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_0918adf0 + 0x130) * 8 + -8) !=
        DAT_0918adf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
  }
  (**(code **)(lVar8 + 0x1c8))(plVar3,param_1,*(undefined8 *)(lVar8 + 0x1d0));
  if (*(int *)(DAT_09187010 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar7 = (long *)**(long **)(DAT_09187010 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar7 + 0x318))(plVar7,param_1,plVar3,*(undefined8 *)(*plVar7 + 800));
LAB_0747db34:
  if (local_4c[0] != '\0') {
    System_Threading_Monitor__Exit(local_48,0);
  }
  return plVar3;
}

