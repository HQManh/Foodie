// rea decompile_all
// name: DG.Tweening.TweenParams$$Clear
// address: 0x454c51c
// body: available
// range: 0x454c51c-0x454c697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_TweenParams__Clear(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  
  if ((DAT_0951876b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    DAT_0951876b = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
  lVar3 = DAT_09183190;
  *(undefined4 *)(param_1 + 0x20) = 0xfffffc19;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = DAT_09183190;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar2 = *(undefined1 *)(lVar3 + 0x40);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x3c);
  *(undefined1 *)(param_1 + 0x34) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
  *(undefined8 *)(param_1 + 0x70) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),0);
  lVar3 = DAT_09183190;
  *(undefined1 *)(param_1 + 0x79) = 0;
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar2 = *(undefined1 *)(lVar3 + 0x50);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x78) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x4c);
  *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(lVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x58);
  return param_1;
}

