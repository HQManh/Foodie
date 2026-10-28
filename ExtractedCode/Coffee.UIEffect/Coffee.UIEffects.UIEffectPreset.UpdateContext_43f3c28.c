// rea decompile_all
// name: Coffee.UIEffects.UIEffectPreset$$UpdateContext
// address: 0x43f3c28
// body: available
// range: 0x43f3c28-0x43f3e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f3e80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectPreset__UpdateContext(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 0x18) = uVar5;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x20) = uVar3;
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_2 + 0x30) = uVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    uVar1 = *(undefined1 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 0x38) = uVar7;
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = uVar4;
    *(undefined1 *)(param_2 + 0x48) = uVar1;
    *(undefined4 *)(param_2 + 0x44) = uVar5;
    *(undefined8 *)(param_2 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    uVar1 = *(undefined1 *)(param_1 + 0x7c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined1 *)(param_2 + 0x74) = uVar1;
    *(undefined8 *)(param_2 + 0x78) = uVar3;
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_2 + 0x94) = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)(param_2 + 0x8c) = uVar3;
    uVar2 = *(undefined2 *)(param_1 + 0xa4);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined2 *)(param_2 + 0x9c) = uVar2;
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0xa8);
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xa8));
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0xb8);
    uVar3 = *(undefined8 *)(param_1 + 0xbc);
    *(undefined8 *)(param_2 + 0xbc) = *(undefined8 *)(param_1 + 0xc4);
    *(undefined8 *)(param_2 + 0xb4) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0xcc);
    *(undefined8 *)(param_2 + 0xcc) = *(undefined8 *)(param_1 + 0xd8);
    uVar5 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined8 *)(param_2 + 0xc4) = uVar3;
    *(undefined4 *)(param_2 + 0xd4) = uVar5;
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_1 + 0xe4);
    uVar5 = *(undefined4 *)(param_1 + 0xec);
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(param_1 + 0xf0);
    uVar6 = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_2 + 0xe0) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar6;
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_2 + 0xfc) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_2 + 0xf4) = uVar3;
    uVar5 = *(undefined4 *)(param_1 + 0x17c);
    uVar6 = *(undefined4 *)(param_1 + 0x19c);
    uVar8 = *(undefined4 *)(param_1 + 0x180);
    *(undefined1 *)(param_2 + 0x104) = *(undefined1 *)(param_1 + 0x110);
    uVar4 = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 0x108) = uVar5;
    *(undefined4 *)(param_2 + 0x10c) = uVar6;
    *(undefined4 *)(param_2 + 0x110) = uVar8;
    *(undefined4 *)(param_2 + 0x114) = uVar4;
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_2 + 0x118) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    uVar5 = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(param_1 + 0x198);
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    *(undefined8 *)(param_2 + 300) = uVar3;
    uVar6 = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_2 + 0x134) = uVar5;
    *(undefined4 *)(param_2 + 0x138) = uVar4;
    uVar5 = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_2 + 0x13c) = uVar6;
    *(undefined4 *)(param_2 + 0x140) = uVar5;
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_2 + 0x14c) = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_2 + 0x144) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_2 + 0x15c) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_2 + 0x154) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_2 + 0x16c) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_2 + 0x164) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_2 + 0x174) = uVar3;
    *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_1 + 0x160);
    thunk_FUN_03f5d7b8(param_2 + 0x188);
    uVar5 = *(undefined4 *)(param_1 + 0x174);
    uVar1 = *(undefined1 *)(param_1 + 0x178);
    *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_1 + 0x168);
    uVar4 = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_2 + 0x19c) = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined1 *)(param_2 + 0x1a0) = uVar1;
    *(undefined4 *)(param_2 + 0x198) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar5;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    uVar3 = *(undefined8 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_2 + 0x1bc) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined8 *)(param_2 + 0x1b4) = uVar3;
    *(undefined8 *)(param_2 + 0x1ac) = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_1 + 0x1d0);
    thunk_FUN_03f5d7b8(param_2 + 0x1c8);
    *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_1 + 0x1f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

