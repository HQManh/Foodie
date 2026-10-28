// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DelayFramePromise$$.cctor
// address: 0x7d97894
// body: available
// range: 0x7d97894-0x7d979a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d979a4 to 0x7d8af84 Cysharp.Threading.Tasks.TaskPool$$RegisterSizeGetter (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_DelayFramePromise___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09525dcd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174078);
    FUN_03f5c2a4(&DAT_09177c40);
    FUN_03f5c2a4(&DAT_0918b8f8);
    FUN_03f5c2a4(&DAT_091f35b8);
    FUN_03f5c2a4(&DAT_09196d00);
    DAT_09525dcd = 1;
  }
  uVar1 = DAT_09174078;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  if (*(int *)(DAT_09196d00 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09196d00);
  }
  uVar3 = **(undefined8 **)(DAT_09196d00 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09177c40);
  FUN_05301438(uVar2,uVar3,DAT_091f35b8,0);
  if (*(int *)(DAT_0918b8f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Cysharp_Threading_Tasks_TaskPool__RegisterSizeGetter(uVar1,uVar2);
  return;
}

