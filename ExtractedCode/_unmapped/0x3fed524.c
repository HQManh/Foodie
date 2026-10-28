// rea decompile_all
// name: std::__ndk1::ios_base::swap
// address: 0x3fed524
// body: available
// range: 0x3fed524-0x3fed63f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ios_base::swap(std::__ndk1::ios_base&) */

void __thiscall std::__ndk1::ios_base::swap(ios_base *this,ios_base *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  locale alStack_28 [8];
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar2 = *(undefined4 *)(this + 0x24);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  locale::locale(alStack_28,(locale *)(this + 0x30));
  locale::operator=((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  locale::operator=((locale *)(param_1 + 0x30),alStack_28);
  locale::~locale(alStack_28);
  uVar4 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(this + 0x40);
  uVar1 = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(this + 0x50);
  uVar1 = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(this + 0x68);
  uVar1 = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  return;
}

