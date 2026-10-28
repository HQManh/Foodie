// rea decompile_all
// name: FUN_073b72bc
// address: 0x73b72bc
// body: available
// range: 0x73b72bc-0x73b7853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_073b72bc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
  lVar1 = param_1 + (int)(param_2 - 1U & 0xffffffc0);
  uVar10 = (ulong)(param_2 - 1U & 0x3f);
  lVar16 = 0;
  lVar18 = 0;
  lVar17 = 0;
  uVar19 = 0;
  lVar14 = 0x226bb95b4e64b6d4;
  lVar3 = lVar3 + 0x1529cba0ca458ff;
  lVar2 = lVar1 + uVar10;
  uVar15 = 0x134a747f856d0526;
  do {
    lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
    lVar4 = MessagePack_Internal_FarmHash__Rotate64(lVar16 + lVar3 + lVar14 + lVar4,0x25,0);
    lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x30,0);
    lVar14 = MessagePack_Internal_FarmHash__Rotate64(lVar14 + lVar18 + lVar3,0x2a,0);
    lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x28,0);
    lVar3 = MessagePack_Internal_FarmHash__Rotate64(lVar17 + uVar15,0x21,0);
    if (DAT_09520c12 == '\0') {
      FUN_03f5c2a4(&DAT_091cc168);
      DAT_09520c12 = '\x01';
    }
    uVar15 = lVar4 * -0x4b6d499041670d8d ^ uVar19;
    lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
    lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
    lVar7 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x10,0);
    lVar8 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x18,0);
    lVar4 = lVar4 + lVar18 * -0x4b6d499041670d8d;
    lVar18 = MessagePack_Internal_FarmHash__Rotate64(uVar15 + lVar17 + lVar4 + lVar8,0x15,0);
    lVar17 = lVar4 + lVar6 + lVar7;
    lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar17,0x2c,0);
    lVar7 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x10,0);
    if (DAT_09520c12 == '\0') {
      FUN_03f5c2a4(&DAT_091cc168);
      DAT_09520c12 = '\x01';
    }
    lVar14 = lVar5 + lVar16 + lVar14 * -0x4b6d499041670d8d;
    lVar16 = lVar17 + lVar8;
    lVar3 = lVar3 * -0x4b6d499041670d8d;
    lVar18 = lVar18 + lVar4 + lVar6;
    lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x20,0);
    lVar17 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x28,0);
    lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x30,0);
    lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x38,0);
    lVar4 = lVar3 + uVar19 + lVar4;
    lVar7 = MessagePack_Internal_FarmHash__Rotate64(lVar7 + lVar14 + lVar4 + lVar6,0x15,0);
    lVar17 = lVar4 + lVar17 + lVar5;
    lVar5 = MessagePack_Internal_FarmHash__Rotate64(lVar17,0x2c,0);
    lVar17 = lVar17 + lVar6;
    uVar19 = lVar7 + lVar4 + lVar5;
    param_1 = param_1 + 0x40;
  } while (param_1 != lVar1);
  lVar17 = lVar17 + uVar10;
  lVar16 = lVar17 + lVar16;
  lVar1 = (uVar15 & 0xff) * 2 + -0x4b6d499041670d8d;
  lVar17 = lVar16 + lVar17;
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x37,0);
  lVar3 = MessagePack_Internal_FarmHash__Rotate64(lVar14 + lVar3 + lVar4 + lVar16,0x25,0);
  lVar4 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0xf,0);
  lVar14 = MessagePack_Internal_FarmHash__Rotate64(lVar18 + lVar14 + lVar4,0x2a,0);
  uVar10 = lVar3 * lVar1 ^ uVar19 * 9;
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x17,0);
  lVar4 = MessagePack_Internal_FarmHash__Rotate64(lVar17 + uVar15,0x21,0);
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c12 = '\x01';
  }
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x3f,0);
  lVar6 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x37,0);
  lVar7 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x2f,0);
  lVar8 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x27,0);
  lVar5 = lVar5 + lVar18 * lVar1;
  lVar17 = MessagePack_Internal_FarmHash__Rotate64(uVar10 + lVar17 + lVar5 + lVar8,0x15,0);
  lVar18 = lVar5 + lVar6 + lVar7;
  lVar6 = MessagePack_Internal_FarmHash__Rotate64(lVar18,0x2c,0);
  lVar7 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x2f,0);
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c12 = '\x01';
  }
  uVar11 = lVar3 + lVar16 * 9 + lVar14 * lVar1;
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x1f,0);
  lVar16 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0x17,0);
  lVar14 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -0xf,0);
  lVar9 = MessagePack_Internal_FarmHash__Fetch64(lVar2 + -7,0);
  lVar3 = uVar19 + lVar4 * lVar1 + lVar3;
  lVar7 = MessagePack_Internal_FarmHash__Rotate64(lVar7 + uVar11 + lVar3 + lVar9,0x15,0);
  lVar2 = lVar3 + lVar16 + lVar14;
  lVar16 = MessagePack_Internal_FarmHash__Rotate64(lVar2,0x2c,0);
  uVar19 = lVar2 + lVar9;
  uVar15 = lVar7 + lVar3 + lVar16;
  uVar12 = (uVar19 ^ lVar18 + lVar8) * lVar1;
  uVar13 = (uVar15 ^ lVar17 + lVar5 + lVar6) * lVar1;
  uVar19 = (uVar19 ^ uVar12 >> 0x2f ^ uVar12) * lVar1;
  uVar15 = (uVar15 ^ uVar13 >> 0x2f ^ uVar13) * lVar1;
  uVar15 = ((uVar15 ^ uVar15 >> 0x2f) + lVar4) * lVar1;
  uVar19 = (uVar15 ^ uVar10 + (uVar11 ^ uVar11 >> 0x2f) * -0x3c5a37a36834ced9 +
                     (uVar19 ^ uVar19 >> 0x2f) * lVar1) * lVar1;
  uVar19 = (uVar15 ^ uVar19 >> 0x2f ^ uVar19) * lVar1;
  return (uVar19 ^ uVar19 >> 0x2f) * lVar1;
}

