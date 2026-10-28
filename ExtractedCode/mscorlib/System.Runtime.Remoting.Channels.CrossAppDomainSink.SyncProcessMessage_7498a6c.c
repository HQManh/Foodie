// rea decompile_all
// name: System.Runtime.Remoting.Channels.CrossAppDomainSink$$SyncProcessMessage
// address: 0x7498a6c
// body: available
// range: 0x7498a6c-0x7498d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7498ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cb0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cb8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cc0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498cf8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498d04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7498d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07498c4c) */
/* WARNING: Removing unreachable block (ram,0x07498cb4) */

undefined8
System_Runtime_Remoting_Channels_CrossAppDomainSink__SyncProcessMessage
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_0952133e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182f70);
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_09188238);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918f828);
    DAT_0952133e = 1;
  }
  lVar2 = System_Runtime_Remoting_Messaging_CADMethodCallMessage__Create(param_2);
  if (lVar2 == 0) {
    plVar4 = (long *)System_Runtime_Remoting_Channels_CADSerializer__SerializeMessage(param_2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
  }
  else {
    lVar6 = 0;
  }
  uVar3 = System_Threading_Thread__get_CurrentContext(0);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(DAT_09182f70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = *(undefined8 *)(*(long *)(DAT_09182f70 + 0xb8) + 8);
  plVar4 = (long *)FUN_03f5c394(DAT_09180318,2);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar6 == 0) ||
     (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0)) {
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[4] = lVar6;
    thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[5] = lVar2;
    thunk_FUN_03f5d7b8(plVar4 + 5,lVar2);
    plVar4 = (long *)System_AppDomain__InvokeInDomainByID(uVar1,uVar7,0,plVar4,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_0918f828 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    plVar4 = (long *)thunk_FUN_03f99594();
    lVar2 = *plVar4;
    lVar6 = plVar4[1];
    thunk_FUN_03f6ae30(uVar3,0);
    if (lVar2 == 0) {
      uVar3 = thunk_FUN_03f9944c(DAT_09188238);
      uVar7 = thunk_FUN_03f99350(param_2,DAT_091860a0);
      System_Runtime_Remoting_Messaging_MethodResponse___ctor(uVar3,uVar7,lVar6);
      return uVar3;
    }
    uVar3 = thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(uVar3,lVar2,0);
    thunk_FUN_03f99350(param_2,DAT_091860a0);
    System_Runtime_Remoting_Channels_CADSerializer__DeserializeMessage();
  }
  uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,0);
}

