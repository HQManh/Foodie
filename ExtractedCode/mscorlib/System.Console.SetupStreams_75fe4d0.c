// rea decompile_all
// name: System.Console$$SetupStreams
// address: 0x75fe4d0
// body: available
// range: 0x75fe4d0-0x75fe8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fe8b4 to 0x75efd6c System.GC$$SuppressFinalize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fe8b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Console__SetupStreams(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((DAT_09521fa1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091821f8);
    FUN_03f5c2a4(&DAT_09182200);
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_09182a20);
    FUN_03f5c2a4(&DAT_09184a48);
    FUN_03f5c2a4(&DAT_0918bb90);
    FUN_03f5c2a4(&DAT_0918bbf0);
    FUN_03f5c2a4(&DAT_0918c5f8);
    FUN_03f5c2a4(&DAT_0918c600);
    DAT_09521fa1 = 1;
  }
  iVar1 = FUN_03f72cfc();
  if (3 < iVar1) {
    if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_ConsoleDriver__get_IsConsole();
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Console__OpenStandardInput(0);
      uVar4 = thunk_FUN_03f9944c(DAT_091821f8);
      System_IO_CStreamReader___ctor(uVar4,uVar3,param_1,0);
      puVar5 = (undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x10);
      *puVar5 = uVar4;
      thunk_FUN_03f5d7b8(puVar5,uVar4);
      uVar3 = System_Console__OpenStandardOutput(0);
      plVar6 = (long *)thunk_FUN_03f9944c(DAT_09182200);
      System_IO_CStreamWriter___ctor(plVar6,uVar3,param_2,1,0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x308))(plVar6,1,*(undefined8 *)(*plVar6 + 0x310));
        if (*(int *)(DAT_0918bbf0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_IO_TextWriter__Synchronized(plVar6,0);
        **(undefined8 **)(DAT_09182a20 + 0xb8) = uVar3;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182a20 + 0xb8),uVar3);
        uVar3 = System_Console__OpenStandardError(0);
        plVar6 = (long *)thunk_FUN_03f9944c(DAT_09182200);
        System_IO_CStreamWriter___ctor(plVar6,uVar3,param_2,1,0);
        if (plVar6 == (long *)0x0) goto LAB_075fe8b8;
        goto LAB_075fe7fc;
      }
      goto LAB_075fe8b8;
    }
  }
  if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Console__OpenStandardInput(0);
  uVar4 = thunk_FUN_03f9944c(DAT_0918c5f8);
  System_IO_UnexceptionalStreamReader___ctor(uVar4,uVar3,param_1,0);
  if (*(int *)(DAT_0918bb90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_IO_TextReader__Synchronized(uVar4,0);
  puVar5 = (undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x10);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  uVar3 = System_Console__OpenStandardOutput(0);
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918c600);
  System_IO_UnexceptionalStreamWriter___ctor(plVar6,uVar3,param_2,0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x308))(plVar6,1,*(undefined8 *)(*plVar6 + 0x310));
    if (*(int *)(DAT_0918bbf0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_IO_TextWriter__Synchronized(plVar6,0);
    **(undefined8 **)(DAT_09182a20 + 0xb8) = uVar3;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182a20 + 0xb8),uVar3);
    uVar3 = System_Console__OpenStandardError(0);
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918c600);
    System_IO_UnexceptionalStreamWriter___ctor(plVar6,uVar3,param_2,0);
    if (plVar6 != (long *)0x0) {
LAB_075fe7fc:
      (**(code **)(*plVar6 + 0x308))(plVar6,1,*(undefined8 *)(*plVar6 + 0x310));
      uVar3 = System_IO_TextWriter__Synchronized(plVar6,0);
      puVar5 = (undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 8);
      *puVar5 = uVar3;
      thunk_FUN_03f5d7b8(puVar5,uVar3);
      if (*(int *)(DAT_09182a20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = **(undefined8 **)(DAT_09182a20 + 0xb8);
      if (*(int *)(DAT_09184a48 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184a48);
      }
      System_GC__SuppressFinalize(uVar3,0);
      System_GC__SuppressFinalize(*(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 8),0);
      System_GC__SuppressFinalize(*(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x10),0);
      return;
    }
  }
LAB_075fe8b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

