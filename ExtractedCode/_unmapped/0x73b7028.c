// rea decompile_all
// name: FUN_073b7028
// address: 0x73b7028
// body: available
// range: 0x73b7028-0x73b72bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_073b7028(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = (ulong)(param_2 << 1) + 0x9ae16a3b2f903fdd;
  lVar2 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x18,0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x10,0);
  lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + lVar2 * -0x4b6d499041670d8d,0x2b,0);
  lVar7 = MessagePack_Internal_FarmHash__Rotate64(lVar4 * -0x651e95c4d06fc023,0x1e,0);
  lVar3 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + -0x651e95c4d06fbfb1,0x12,0);
  uVar9 = lVar4 * -0x651e95c4d06fc023 + lVar2 * -0x4b6d499041670d8d + lVar3;
  uVar8 = (uVar9 ^ lVar6 + lVar5 * -0x651e95c4d06fbfb1 + lVar7) * -0x651e95c4d06fc023;
  uVar11 = (uVar9 ^ uVar8 >> 0x2f ^ uVar8) * -0x651e95c4d06fc023;
  lVar2 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x20,0);
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x28,0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x38,0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x30,0);
  lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + lVar2 * -0x4b6d499041670d8d,0x2b,0);
  lVar7 = MessagePack_Internal_FarmHash__Rotate64(lVar4 * lVar1,0x1e,0);
  lVar3 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + -0x651e95c4d06fbfb1,0x12,0);
  param_1 = param_1 + (ulong)param_2;
  uVar9 = lVar4 * lVar1 + lVar2 * -0x4b6d499041670d8d + lVar3;
  uVar8 = (uVar9 ^ lVar6 + lVar5 * -0x651e95c4d06fbfb1 + lVar7) * lVar1;
  uVar10 = (uVar9 ^ uVar8 >> 0x2f ^ uVar8) * lVar1;
  lVar2 = MessagePack_Internal_FarmHash__Fetch64(param_1 + -0x20,0);
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + -0x18,0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + -8,0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + -0x10,0);
  lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + lVar2 * -0x4b6d499041670d8d,0x2b,0);
  lVar7 = MessagePack_Internal_FarmHash__Rotate64(lVar4 * lVar1,0x1e,0);
  lVar3 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + -0x651e95c4d06fbfb1,0x12,0);
  uVar9 = lVar4 * lVar1 + lVar2 * -0x4b6d499041670d8d + lVar3 + (uVar10 ^ uVar10 >> 0x2f);
  uVar8 = (uVar9 ^ lVar6 + (uVar11 ^ uVar11 >> 0x2f) + lVar5 * -0x651e95c4d06fbfb1 + lVar7) * lVar1;
  uVar9 = (uVar9 ^ uVar8 >> 0x2f ^ uVar8) * lVar1;
  return ((uVar10 >> 0x15) + (uVar11 >> 0x11) + (uVar9 ^ uVar9 >> 0x2f) * 9) * lVar1;
}

