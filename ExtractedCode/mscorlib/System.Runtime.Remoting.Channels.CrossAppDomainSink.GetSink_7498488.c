// rea decompile_all
// name: System.Runtime.Remoting.Channels.CrossAppDomainSink$$GetSink
// address: 0x7498488
// body: available
// range: 0x7498488-0x74986af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74985f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74986a0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74986a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74986a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74986ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0749869c) */

long * System_Runtime_Remoting_Channels_CrossAppDomainSink__GetSink(undefined4 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_54;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 *local_40;
  char local_34 [4];
  undefined8 local_28;
  
  if ((DAT_0952133d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182f70);
    DAT_0952133d = 1;
  }
  local_28 = 0;
  local_34[0] = '\0';
  if (*(int *)(DAT_09182f70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)**(long **)(DAT_09182f70 + 0xb8);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = (**(code **)(*plVar1 + 0x3b8))(plVar1,*(undefined8 *)(*plVar1 + 0x3c0));
  pcStack_48 = local_34;
  local_34[0] = '\0';
  local_50 = 0;
  local_40 = &local_28;
  System_Threading_Monitor__Enter(local_28,local_34,0);
  if (*(int *)(DAT_09182f70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)**(undefined8 **)(DAT_09182f70 + 0xb8);
  local_54 = param_1;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_54);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2,uVar2);
  }
  uVar3 = (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x2f0));
  if ((uVar3 & 1) == 0) {
    plVar1 = (long *)thunk_FUN_03f9944c();
    System_Object___ctor(plVar1,0);
    lVar4 = DAT_09182f70;
    *(undefined4 *)(plVar1 + 2) = param_1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = DAT_09182f70;
    }
    plVar5 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    local_54 = param_1;
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_54);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2,uVar2);
    }
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar2,plVar1,*(undefined8 *)(*plVar5 + 800));
  }
  else {
    if (*(int *)(DAT_09182f70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)**(undefined8 **)(DAT_09182f70 + 0xb8);
    local_54 = param_1;
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_54);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2,uVar2);
    }
    plVar1 = (long *)(**(code **)(*plVar1 + 0x308))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x310));
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09182f70 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09182f70 + 0x130) * 8 + -8) !=
          DAT_09182f70)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
    }
  }
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(*local_40,0);
  }
  return plVar1;
}

