// rea decompile_all
// name: UniRx.Examples.Enemy$$.ctor
// address: 0x41951b0
// body: available
// range: 0x41951b0-0x4195397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4195394 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Enemy___ctor(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095167d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178c20);
    FUN_03f5c2a4(&DAT_091d5258);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091d6ee8);
    FUN_03f5c2a4(&DAT_09189b98);
    FUN_03f5c2a4(&DAT_091b9130);
    FUN_03f5c2a4(&DAT_0917e448);
    FUN_03f5c2a4(&DAT_091e9730);
    FUN_03f5c2a4(&DAT_09190518);
    DAT_095167d1 = 1;
  }
  System_Object___ctor(param_1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_0917e448);
  FUN_05e4bd8c(uVar1,(long)param_2,DAT_091b9130);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  *puVar3 = uVar1;
  thunk_FUN_03f5d7b8(puVar3,uVar1);
  uVar1 = *puVar3;
  if (*(int *)(DAT_09190518 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09190518 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09190518 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_09190518 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_09178c20);
    FUN_05317590(lVar4,uVar5,DAT_091e9730,0);
    plVar2 = (long *)(*(long *)(DAT_09190518 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c43a18(uVar1,lVar4,DAT_091d5258);
  if (*(int *)(DAT_09189b98 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189b98);
  }
  uVar1 = FUN_04d10e98(uVar1,DAT_091d6ee8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar1);
  return;
}

