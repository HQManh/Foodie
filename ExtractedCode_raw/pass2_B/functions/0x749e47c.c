// rea decompile_all
// name: System.Runtime.Remoting.Messaging.AsyncResult$$Invoke
// address: 0x749e47c
// body: available
// range: 0x749e47c-0x749e47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Messaging_AsyncResult__Invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lStack_28 = param_1;
  if (lVar3 == 0) {
    uVar1 = FUN_03fbcb64(*(undefined8 *)(param_1 + 0x20),param_1 + 0x10,0);
    return uVar1;
  }
  *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x40) = 0;
  uVar1 = FUN_03fbe05c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),*(long *)(lVar3 + 0x10),
                       *(long *)(lVar3 + 0x10) + 0x40,lVar3 + 0x38);
  FUN_03f5ef9c(lVar3 + 0x30,uVar1);
  il2cpp_monitor_enter(param_1);
  *(undefined1 *)(param_1 + 0x39) = 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    il2cpp_monitor_exit(param_1);
  }
  else {
    lVar2 = FUN_03f9d7b0();
    il2cpp_monitor_exit(param_1);
    if (lVar2 != 0) {
      FUN_03f85c58(*(undefined8 *)(lVar2 + 8));
    }
  }
  lStack_38 = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    FUN_03fbcba4(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),&lStack_28,&lStack_38);
    if (lStack_38 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(lStack_38,0);
    }
  }
  return uVar1;
}

