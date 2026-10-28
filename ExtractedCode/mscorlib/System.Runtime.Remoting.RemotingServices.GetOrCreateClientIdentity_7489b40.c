// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$GetOrCreateClientIdentity
// address: 0x7489b40
// body: available
// range: 0x7489b40-0x7489fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7489f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489f94 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489fac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7489fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07489f90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Runtime_Remoting_RemotingServices__GetOrCreateClientIdentity
                 (long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  char local_5c [4];
  undefined8 local_58;
  long local_48;
  
  if ((DAT_095212a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825d0);
    FUN_03f5c2a4(&DAT_09182f70);
    FUN_03f5c2a4(&DAT_09185768);
    FUN_03f5c2a4(&DAT_09187de0);
    FUN_03f5c2a4(&DAT_09189ed0);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095212a0 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  local_5c[0] = '\0';
  if (param_1 == (long *)0x0) {
LAB_07489f8c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (plVar2 == (long *)0x0) goto LAB_07489f8c;
    lVar1 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185768) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07489c58;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185768,0);
LAB_07489c58:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  uVar5 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189ed8);
  }
  plVar2 = (long *)System_Runtime_Remoting_RemotingServices__GetClientChannelSinkChain
                             (uVar5,uVar4,&local_48);
  if (local_48 == 0) {
    local_48 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_5c[0] = '\0';
  local_58 = **(undefined8 **)(DAT_09189ed8 + 0xb8);
  System_Threading_Monitor__Enter(local_58,local_5c,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Runtime_Remoting_RemotingServices__GetNormalizedUri(uVar4);
  plVar6 = (long *)**(long **)(DAT_09189ed8 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x310));
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(DAT_091825d0 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) ==
        DAT_091825d0)) {
      lVar1 = System_Runtime_Remoting_ClientIdentity__get_ClientProxy(plVar6);
      *param_3 = lVar1;
      thunk_FUN_03f5d7b8(param_3);
      if (*param_3 != 0) goto LAB_07489ef8;
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_Remoting_RemotingServices__DisposeIdentity(plVar6);
    }
  }
  lVar1 = local_48;
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_091825d0);
  System_Runtime_Remoting_ClientIdentity___ctor(plVar6,lVar1,param_1);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6[3] = (long)plVar2;
  thunk_FUN_03f5d7b8(plVar6 + 3,plVar2);
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar7 = (long *)**(long **)(DAT_09189ed8 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar7 + 0x318))(plVar7,uVar4,plVar6,*(undefined8 *)(*plVar7 + 800));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_Type__op_Inequality(param_2,0,0);
  if ((uVar8 & 1) == 0) goto LAB_07489ef8;
  plVar7 = (long *)thunk_FUN_03f9944c(DAT_09189ed0);
  System_Runtime_Remoting_Proxies_RemotingProxy___ctor(plVar7,param_2,plVar6);
  if (plVar2 == (long *)0x0) {
LAB_07489e90:
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09182f70 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09182f70 + 0x130) * 8 + -8) !=
        DAT_09182f70)) goto LAB_07489e90;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(int *)(plVar7 + 5) = (int)plVar2[2];
  }
  lVar1 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
  *param_3 = lVar1;
  thunk_FUN_03f5d7b8(param_3);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
        DAT_09187de0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3,DAT_09187de0);
    }
  }
  System_Runtime_Remoting_ClientIdentity__set_ClientProxy(plVar6);
LAB_07489ef8:
  if (local_5c[0] != '\0') {
    System_Threading_Monitor__Exit(local_58,0);
  }
  return plVar6;
}

