// rea decompile_all
// name: System.Threading.CancellationTokenSource.Linked1CancellationTokenSource$$.ctor
// address: 0x761dc30
// body: available
// range: 0x761dc30-0x761dd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761dd30 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_CancellationTokenSource_Linked1CancellationTokenSource___ctor
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_0952210f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918eb20);
    DAT_0952210f = 1;
  }
  if (*(int *)(DAT_09182368 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  thunk_FUN_03f6a5cc();
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  System_Object___ctor(param_1,0);
  thunk_FUN_03f6a5cc();
  lVar1 = DAT_0918eb20;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar1 = DAT_0918eb20;
  }
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182348);
  }
  System_Threading_CancellationToken__InternalRegisterWithoutEC(&local_40,&local_28,uVar2,param_1);
  *(undefined8 *)(param_1 + 0x48) = uStack_38;
  *(undefined8 *)(param_1 + 0x40) = local_40;
  *(undefined8 *)(param_1 + 0x50) = local_30;
  thunk_FUN_03f5d7b8(param_1 + 0x40,0);
  return;
}

