// rea decompile_all
// name: System.Security.Cryptography.SHA1Managed$$SHATransform
// address: 0x7469a6c
// body: available
// range: 0x7469a6c-0x7469e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA1Managed__SHATransform(int *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = *param_2;
  uVar8 = param_2[1];
  uVar11 = param_2[2];
  uVar10 = param_2[3];
  uVar12 = param_2[4];
  System_Security_Cryptography_Utils__DWORDFromBigEndian(param_1,0x10);
  System_Security_Cryptography_SHA1Managed__SHAExpand(param_1);
  uVar6 = 0xfffffffffffffffb;
  piVar7 = param_1;
  do {
    uVar6 = uVar6 + 5;
    uVar2 = uVar12 + 0x5a827999 + (uVar9 >> 0x1b | uVar9 << 5) +
            (uVar11 & uVar8 | uVar10 & (uVar8 ^ 0xffffffff)) + *piVar7;
    uVar4 = uVar8 >> 2 | uVar8 << 0x1e;
    uVar5 = uVar9 >> 2 | uVar9 << 0x1e;
    uVar3 = uVar10 + 0x5a827999 + piVar7[1] +
            (uVar9 & (uVar8 >> 2 | uVar8 << 0x1e) | uVar11 & (uVar9 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar10 = uVar3 >> 2 | uVar3 * 0x40000000;
    piVar1 = piVar7 + 4;
    uVar9 = uVar11 + 0x5a827999 + piVar7[2] +
            (uVar2 & (uVar9 >> 2 | uVar9 << 0x1e) | uVar4 & (uVar2 ^ 0xffffffff)) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar8 = uVar4 + 0x5a827999 + piVar7[3] +
            (uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar5 & (uVar3 ^ 0xffffffff)) +
            (uVar9 >> 0x1b | uVar9 * 0x20);
    uVar11 = uVar9 >> 2 | uVar9 * 0x40000000;
    piVar7 = piVar7 + 5;
    uVar9 = uVar5 + 0x5a827999 + *piVar1 +
            (uVar9 & (uVar3 >> 2 | uVar3 * 0x40000000) | uVar12 & (uVar9 ^ 0xffffffff)) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
  } while (uVar6 < 0xf);
  uVar6 = 0xf;
  piVar7 = param_1 + 0x18;
  do {
    uVar6 = uVar6 + 5;
    uVar5 = uVar9 >> 2 | uVar9 << 0x1e;
    uVar2 = uVar12 + 0x6ed9eba1 + (uVar9 >> 0x1b | uVar9 << 5) +
            (uVar11 ^ uVar10 ^ uVar8) + piVar7[-4];
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar10 + 0x6ed9eba1 + piVar7[-3] + (uVar11 ^ (uVar8 >> 2 | uVar8 << 0x1e) ^ uVar9) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar10 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar4 = uVar11 + 0x6ed9eba1 + piVar7[-2] + (uVar5 ^ (uVar8 >> 2 | uVar8 << 0x1e) ^ uVar2) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar8 = (uVar8 >> 2 | uVar8 << 0x1e) + 0x6ed9eba1 + piVar7[-1] +
            (uVar12 ^ (uVar9 >> 2 | uVar9 << 0x1e) ^ uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar11 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar9 = uVar5 + 0x6ed9eba1 + *piVar7 + (uVar10 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar4) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    piVar7 = piVar7 + 5;
  } while (uVar6 < 0x23);
  uVar6 = 0x23;
  piVar7 = param_1 + 0x2c;
  do {
    uVar2 = uVar12 + 0x8f1bbcdc + (uVar9 >> 0x1b | uVar9 << 5) +
            ((uVar8 | uVar11) & uVar10 | uVar8 & uVar11) + piVar7[-4];
    uVar3 = uVar10 + 0x8f1bbcdc + piVar7[-3] +
            ((uVar9 | uVar8 >> 2 | uVar8 << 0x1e) & uVar11 | uVar9 & (uVar8 >> 2 | uVar8 << 0x1e)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar10 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar6 = uVar6 + 5;
    uVar4 = uVar11 + 0x8f1bbcdc + piVar7[-2] +
            ((uVar2 | uVar9 >> 2 | uVar9 << 0x1e) & (uVar8 >> 2 | uVar8 << 0x1e) |
            uVar2 & (uVar9 >> 2 | uVar9 << 0x1e)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar11 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = (uVar8 >> 2 | uVar8 << 0x1e) + 0x8f1bbcdc + piVar7[-1] +
            ((uVar3 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar9 >> 2 | uVar9 << 0x1e) |
            uVar3 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar9 = (uVar9 >> 2 | uVar9 << 0x1e) + 0x8f1bbcdc + *piVar7 +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar8 >> 0x1b | uVar8 * 0x20);
    piVar7 = piVar7 + 5;
  } while (uVar6 < 0x37);
  uVar6 = 0x37;
  piVar7 = param_1 + 0x40;
  do {
    uVar6 = uVar6 + 5;
    uVar5 = uVar9 >> 2 | uVar9 << 0x1e;
    uVar2 = uVar12 + 0xca62c1d6 + (uVar9 >> 0x1b | uVar9 << 5) +
            (uVar11 ^ uVar10 ^ uVar8) + piVar7[-4];
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar10 + 0xca62c1d6 + piVar7[-3] + (uVar11 ^ (uVar8 >> 2 | uVar8 << 0x1e) ^ uVar9) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar10 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar4 = uVar11 + 0xca62c1d6 + piVar7[-2] + (uVar5 ^ (uVar8 >> 2 | uVar8 << 0x1e) ^ uVar2) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar8 = (uVar8 >> 2 | uVar8 << 0x1e) + 0xca62c1d6 + piVar7[-1] +
            (uVar12 ^ (uVar9 >> 2 | uVar9 << 0x1e) ^ uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar11 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar9 = uVar5 + 0xca62c1d6 + *piVar7 + (uVar10 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar4) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    piVar7 = piVar7 + 5;
  } while (uVar6 < 0x4b);
  *param_2 = *param_2 + uVar9;
  param_2[1] = param_2[1] + uVar8;
  param_2[2] = param_2[2] + uVar11;
  param_2[3] = param_2[3] + uVar10;
  param_2[4] = param_2[4] + uVar12;
  return;
}

