// rea decompile_all
// name: System.Threading.Tasks.Task$$RemoveContinuation
// address: 0x762ef38
// body: available
// range: 0x762ef38-0x762f12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762f128 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0762f124) */

void System_Threading_Tasks_Task__RemoveContinuation(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_68;
  char *pcStack_60;
  long **local_58;
  char local_4c [4];
  long *local_48;
  long local_40;
  long lStack_38;
  
  if ((DAT_09522204 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b45a8);
    FUN_03f5c2a4(&DAT_0917d9c8);
    FUN_03f5c2a4(&DAT_091b45e8);
    FUN_03f5c2a4(&DAT_091b4618);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09522204 = 1;
  }
  plVar3 = (long *)(param_1 + 0x40);
  plVar5 = (long *)*plVar3;
  local_48 = (long *)0x0;
  local_4c[0] = '\0';
  thunk_FUN_03f6a5cc();
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (plVar5 == *(long **)(*(long *)(DAT_0918b8c8 + 0xb8) + 8)) {
    return;
  }
  if ((plVar5 == (long *)0x0) || (*plVar5 != DAT_0917d9c8)) {
    thunk_FUN_03f6a5cc();
    uVar2 = thunk_FUN_03f9944c(DAT_0917d9c8);
    FUN_05a1bf0c(uVar2,DAT_091b45a8);
    local_40 = 0;
    local_68 = uVar2;
    lStack_38 = param_2;
    FUN_03f9560c(plVar3,&local_68,&lStack_38,&local_40);
    if (local_40 == param_2) {
      return;
    }
    plVar5 = (long *)*plVar3;
    thunk_FUN_03f6a5cc();
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (*plVar5 != DAT_0917d9c8) {
      return;
    }
  }
  pcStack_60 = local_4c;
  local_68 = 0;
  local_58 = &local_48;
  local_4c[0] = '\0';
  local_48 = plVar5;
  System_Threading_Monitor__Enter(plVar5,local_4c);
  lVar4 = *plVar3;
  thunk_FUN_03f6a5cc();
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((lVar4 != *(long *)(*(long *)(DAT_0918b8c8 + 0xb8) + 8)) &&
     (iVar1 = FUN_05a1c868(plVar5,param_2,DAT_091b45e8), iVar1 != -1)) {
    FUN_05a1c5f4(plVar5,iVar1,0,DAT_091b4618);
  }
  if (local_4c[0] != '\0') {
    FUN_03f6a050(*local_58);
  }
  return;
}

