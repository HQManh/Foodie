// rea decompile_all
// name: Lean.Touch.LeanDragTrail$$.ctor
// address: 0x7347fe8
// body: available
// range: 0x7347fe8-0x7348113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragTrail___ctor(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_095206ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876e0);
    FUN_03f5c2a4(&DAT_091b3208);
    FUN_03f5c2a4(&DAT_0917d558);
    DAT_095206ed = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_091876e0);
  Lean_Touch_LeanFingerFilter___ctor(uVar1,0,1,0,0,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  Lean_Touch_LeanScreenDepth___ctor(&local_50,0,0xfffffffb);
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = local_50;
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  thunk_FUN_03f5d7b8(param_1 + 0x30,0);
  uVar1 = DAT_0917d558;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(long *)(param_1 + 0x5c) = auVar2._8_8_;
  *(long *)(param_1 + 0x54) = auVar2._0_8_;
  *(long *)(param_1 + 0x6c) = auVar2._8_8_;
  *(long *)(param_1 + 100) = auVar2._0_8_;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b3208);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

