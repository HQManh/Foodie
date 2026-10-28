// rea decompile_all
// name: UniRx.Examples.Sample11_Logger$$ApplicationInitialize
// address: 0x41947f4
// body: available
// range: 0x41947f4-0x4194a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4194a08 to 0x4c4b594 FUN_04c4b594 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample11_Logger__ApplicationInitialize(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095167c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174818);
    FUN_03f5c2a4(&DAT_09178cc8);
    FUN_03f5c2a4(&DAT_091d53b0);
    FUN_03f5c2a4(&DAT_09188b80);
    FUN_03f5c2a4(&DAT_091d5310);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091ef730);
    FUN_03f5c2a4(&DAT_091ef738);
    FUN_03f5c2a4(&DAT_09194108);
    DAT_095167c8 = 1;
  }
  if (*(int *)(DAT_09188b80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UniRx_Diagnostics_LogEntryExtensions__LogToUnityDebug
            (*(undefined8 *)(*(long *)(DAT_09188b80 + 0xb8) + 8));
  uVar3 = *(undefined8 *)(*(long *)(DAT_09188b80 + 0xb8) + 8);
  if (*(int *)(DAT_09194108 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09194108 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194108 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09194108 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09178cc8);
    FUN_05318728(lVar4,uVar5,DAT_091ef730,0);
    plVar1 = (long *)(*(long *)(DAT_09194108 + 0xb8) + 8);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = FUN_04c48efc(uVar3,lVar4,DAT_091d5310);
  if (*(int *)(DAT_09194108 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194108);
  }
  puVar2 = *(undefined8 **)(DAT_09194108 + 0xb8);
  lVar4 = puVar2[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09194108 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194108);
      puVar2 = *(undefined8 **)(DAT_09194108 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09174818);
    FUN_070a7f1c(lVar4,uVar5,DAT_091ef738,0);
    plVar1 = (long *)(*(long *)(DAT_09194108 + 0xb8) + 0x10);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  FUN_04c4b594(uVar3,lVar4,DAT_091d53b0);
  return;
}

