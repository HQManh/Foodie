// rea decompile_all
// name: Newtonsoft.Json.Utilities.BoxedPrimitives$$.cctor
// address: 0x7686d44
// body: available
// range: 0x7686d44-0x768726b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7687268 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_BoxedPrimitives___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522556 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f98);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09522556 = 1;
  }
  local_94[0] = 1;
  uVar2 = FUN_03f5c42c(DAT_09535400,local_94);
  **(undefined8 **)(DAT_09181f98 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09181f98 + 0xb8),uVar2);
  local_98[0] = 0;
  uVar2 = FUN_03f5c42c(DAT_09535400,local_98);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_9c = 0xffffffff;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_9c);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_a0 = 0;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_a0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x18);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_a4 = 1;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_a4);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_a8 = 2;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_a8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_ac = 3;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_ac);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_b0 = 4;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_b0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x38);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_b4 = 5;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_b4);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x40);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_b8 = 6;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_b8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x48);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_bc = 7;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_bc);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x50);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_c0 = 8;
  uVar2 = FUN_03f5c42c(DAT_09535420,&local_c0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x58);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_c8 = 0xffffffffffffffff;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_c8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x60);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_d0 = 0;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_d0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x68);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_d8 = 1;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_d8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x70);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_e0 = 2;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_e0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x78);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_e8 = 3;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_e8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x80);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_f0 = 4;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_f0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x88);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_f8 = 5;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_f8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x90);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_100 = 6;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_100);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0x98);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_108 = 7;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_108);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xa0);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_110 = 8;
  uVar2 = FUN_03f5c42c(DAT_09535440,&local_110);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xa8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_88 = (*(undefined8 **)(DAT_091837d8 + 0xb8))[1];
  local_90 = **(undefined8 **)(DAT_091837d8 + 0xb8);
  uStack_80 = local_90;
  uStack_78 = uStack_88;
  uVar2 = FUN_03f5c42c(DAT_091837d8,&local_90);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xb0);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_118 = 0x7ff8000000000000;
  uVar2 = FUN_03f5c42c(DAT_09535458,&local_118);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xb8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_120 = 0x7ff0000000000000;
  uVar2 = FUN_03f5c42c(DAT_09535458,&local_120);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xc0);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_128 = 0xfff0000000000000;
  uVar2 = FUN_03f5c42c(DAT_09535458,&local_128);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 200);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_130 = 0;
  uVar2 = FUN_03f5c42c(DAT_09535458,&local_130);
  puVar3 = (undefined8 *)(*(long *)(DAT_09181f98 + 0xb8) + 0xd0);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

