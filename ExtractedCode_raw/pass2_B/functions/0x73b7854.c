// rea decompile_all
// name: FUN_073b7854
// address: 0x73b7854
// body: available
// range: 0x73b7854-0x73b7dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_073b7854(long param_1,int param_2)

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
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long local_70;
  long local_68;
  
  uVar16 = (ulong)(param_2 - 1U & 0x3f);
  lVar15 = param_1 + (int)(param_2 - 1U & 0xffffffc0);
  lVar14 = lVar15 + uVar16;
  lVar22 = 0;
  lVar20 = 0;
  lVar21 = 0x1529cba0ca458ff;
  lVar18 = -0x7cb371d23f5eb18f;
  lVar23 = 0x51;
  lVar19 = 0x71;
  local_68 = 0;
  local_70 = 0x7cb371d23f5eb1e0;
  do {
    lVar1 = MessagePack_Internal_FarmHash__Fetch64(param_1,0);
    lVar2 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 8,0);
    lVar3 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x10,0);
    lVar4 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x18,0);
    lVar5 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x20,0);
    lVar6 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x28,0);
    lVar7 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x30,0);
    lVar8 = MessagePack_Internal_FarmHash__Fetch64(param_1 + 0x38,0);
    lVar13 = lVar4 + local_70;
    lVar9 = MessagePack_Internal_FarmHash__Rotate64(lVar1 + lVar21 + lVar2,0x1a,0);
    local_70 = MessagePack_Internal_FarmHash__Rotate64(lVar3 + lVar19,0x1d,0);
    lVar10 = MessagePack_Internal_FarmHash__Rotate64(lVar5 + lVar23,0x21,0);
    lVar22 = MessagePack_Internal_FarmHash__Rotate64(lVar2 + lVar22 + lVar6,0x1e,0);
    lVar21 = MessagePack_Internal_FarmHash__Rotate64(lVar13 * -0x651e95c4d06fbfb1,0x20,0);
    lVar2 = lVar9 * 9 + lVar2;
    lVar21 = lVar21 + lVar8 + local_68;
    lVar19 = lVar8 + lVar18 + lVar10 + lVar3;
    lVar23 = lVar2 - lVar19;
    lVar5 = (lVar9 * 9 ^ lVar7 + lVar20) * 9 + lVar5;
    lVar22 = lVar22 + lVar4 + lVar5;
    lVar13 = lVar7 + lVar6 + lVar8 + local_68 + lVar23 + lVar21;
    lVar18 = lVar7 + lVar1 + lVar21 * 9;
    lVar23 = lVar23 + lVar10 + lVar3;
    lVar20 = lVar22 + lVar5;
    lVar21 = lVar13 + lVar2;
    local_68 = MessagePack_Internal_FarmHash__Rotate64(lVar13,0x22,0);
    param_1 = param_1 + 0x40;
  } while (param_1 != lVar15);
  uVar11 = MessagePack_Internal_FarmHash__Rotate64(lVar22,0x1c,0);
  lVar22 = MessagePack_Internal_FarmHash__Rotate64(lVar23,0x14,0);
  lVar15 = lVar18 * 9 + lVar19;
  lVar20 = lVar20 + uVar16;
  uVar16 = lVar15 + lVar19;
  lVar19 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x37,0);
  lVar19 = MessagePack_Internal_FarmHash__Rotate64((uVar16 - lVar21) + lVar22 + lVar19,0x25,0);
  uVar12 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0xf,0);
  lVar18 = MessagePack_Internal_FarmHash__Rotate64(uVar16 ^ uVar12 ^ uVar11,0x2a,0);
  uVar16 = lVar19 * -0x651e95c4d06fbfb1 ^ local_68 * 9;
  lVar19 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x17,0);
  lVar23 = MessagePack_Internal_FarmHash__Rotate64(lVar20 + local_70,0x21,0);
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c12 = '\x01';
  }
  lVar21 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x3f,0);
  lVar13 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x37,0);
  lVar2 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x2f,0);
  lVar5 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x27,0);
  lVar21 = lVar21 + uVar11 * -0x651e95c4d06fbfb1;
  lVar1 = MessagePack_Internal_FarmHash__Rotate64(uVar16 + lVar20 + lVar21 + lVar5,0x15,0);
  lVar20 = lVar21 + lVar13 + lVar2;
  lVar13 = MessagePack_Internal_FarmHash__Rotate64(lVar20,0x2c,0);
  lVar2 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x2f,0);
  if (DAT_09520c12 == '\0') {
    FUN_03f5c2a4(&DAT_091cc168);
    DAT_09520c12 = '\x01';
  }
  uVar24 = lVar19 + lVar22 + lVar18 * -0x651e95c4d06fbfb1;
  lVar19 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x1f,0);
  lVar22 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0x17,0);
  lVar18 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -0xf,0);
  lVar3 = MessagePack_Internal_FarmHash__Fetch64(lVar14 + -7,0);
  lVar14 = lVar23 * -0x651e95c4d06fbfb1 + local_68 + lVar19;
  lVar2 = MessagePack_Internal_FarmHash__Rotate64(lVar2 + lVar14 + lVar3 + uVar24,0x15,0);
  lVar19 = lVar14 + lVar22 + lVar18;
  lVar22 = MessagePack_Internal_FarmHash__Rotate64(lVar19,0x2c,0);
  uVar17 = lVar19 + lVar3 ^ uVar24;
  uVar11 = lVar14 + lVar23 * -0x651e95c4d06fbfb1 + lVar22 + lVar2;
  uVar12 = (uVar17 ^ lVar5 + uVar16 + lVar20) * -0x651e95c4d06fbfb1;
  uVar24 = (uVar11 ^ lVar21 + uVar24 + lVar13 + lVar1) * -0x651e95c4d06fbfb1;
  uVar12 = (uVar17 ^ uVar12 >> 0x2f ^ uVar12) * -0x651e95c4d06fbfb1;
  lVar14 = MessagePack_Internal_FarmHash__Rotate64
                     ((uVar11 ^ uVar24 >> 0x2f ^ uVar24) * -0x651e95c4d06fbfb1,0x1e,0);
  uVar16 = lVar14 * -0x651e95c4d06fbfb1 ^ uVar16;
  uVar11 = (((uVar12 ^ uVar12 >> 0x2f) + lVar23) * -0x651e95c4d06fbfb1 - lVar15 ^ uVar16) *
           -0x651e95c4d06fbfb1;
  lVar15 = MessagePack_Internal_FarmHash__Rotate64
                     ((uVar16 ^ uVar11 >> 0x2f ^ uVar11) * -0x651e95c4d06fbfb1,0x1f,0);
  return lVar15 * -0x651e95c4d06fbfb1;
}

