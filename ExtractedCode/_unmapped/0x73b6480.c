// rea decompile_all
// name: FUN_073b6480
// address: 0x73b6480
// body: available
// range: 0x73b6480-0x73b6b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_073b6480(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  
  if (0x18 < param_2) {
    lVar1 = param_1 + (ulong)param_2;
    iVar6 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -4,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * -0x3361d2af,0x11,0);
    iVar7 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -8,0);
    iVar8 = MessagePack_Internal_FarmHash__Rotate32(iVar7 * -0x3361d2af,0x11,0);
    iVar7 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -0x10,0);
    iVar7 = MessagePack_Internal_FarmHash__Rotate32(iVar7 * -0x3361d2af,0x11,0);
    iVar9 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -0xc,0);
    iVar9 = MessagePack_Internal_FarmHash__Rotate32(iVar9 * -0x3361d2af,0x11,0);
    iVar10 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -0x14,0);
    iVar10 = MessagePack_Internal_FarmHash__Rotate32(iVar10 * -0x3361d2af,0x11,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * 0x1b873593 ^ param_2,0x13,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32
                      (iVar6 * 5 + 0xe6546b64U ^ iVar7 * 0x1b873593,0x13,0);
    iVar7 = iVar6 * 5 + -0x19ab949c;
    iVar6 = MessagePack_Internal_FarmHash__Rotate32
                      (iVar8 * 0x1b873593 ^ param_2 * -0x3361d2af,0x13,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32
                      (iVar6 * 5 + 0xe6546b64U ^ iVar9 * 0x1b873593,0x13,0);
    iVar8 = iVar6 * 5 + -0x19ab949c;
    iVar6 = MessagePack_Internal_FarmHash__Rotate32
                      (param_2 * -0x3361d2af + iVar10 * 0x1b873593,0x13,0);
    iVar6 = iVar6 + 0x71;
    uVar14 = (ulong)(param_2 - 1) / 0x14;
    do {
      iVar9 = MessagePack_Internal_FarmHash__Fetch32(param_1,0);
      iVar10 = MessagePack_Internal_FarmHash__Fetch32(param_1 + 4,0);
      iVar11 = MessagePack_Internal_FarmHash__Fetch32(param_1 + 8,0);
      iVar12 = MessagePack_Internal_FarmHash__Fetch32(param_1 + 0xc,0);
      iVar13 = MessagePack_Internal_FarmHash__Fetch32(param_1 + 0x10,0);
      iVar4 = MessagePack_Internal_FarmHash__Rotate32(iVar12 * -0x3361d2af,0x11,0);
      iVar7 = MessagePack_Internal_FarmHash__Rotate32(iVar4 * 0x1b873593 ^ iVar9 + iVar7,0x13,0);
      iVar7 = iVar13 + -0x19ab949c + iVar7 * 5;
      iVar4 = MessagePack_Internal_FarmHash__Rotate32(iVar11 * -0x3361d2af,0x11,0);
      iVar8 = MessagePack_Internal_FarmHash__Rotate32(iVar4 * 0x1b873593 ^ iVar10 + iVar8,0x13,0);
      iVar8 = iVar9 + -0x19ab949c + iVar8 * 5;
      iVar9 = MessagePack_Internal_FarmHash__Rotate32
                        ((iVar10 + iVar13 * -0x3361d2af) * -0x3361d2af,0x11,0);
      iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar9 * 0x1b873593 ^ iVar11 + iVar6,0x13,0);
      uVar2 = (int)uVar14 - 1;
      uVar14 = (ulong)uVar2;
      param_1 = param_1 + 0x14;
      iVar6 = iVar12 + -0x19ab949c + iVar8 + iVar6 * 5;
      iVar8 = iVar6 + iVar8;
    } while (uVar2 != 0);
    iVar8 = MessagePack_Internal_FarmHash__Rotate32(iVar8,0xb,0);
    iVar8 = MessagePack_Internal_FarmHash__Rotate32(iVar8 * -0x3361d2af,0x11,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6,0xb,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * -0x3361d2af,0x11,0);
    iVar7 = MessagePack_Internal_FarmHash__Rotate32(iVar7 + iVar8 * -0x3361d2af,0x13,0);
    iVar7 = MessagePack_Internal_FarmHash__Rotate32(iVar7 * 5 + -0x19ab949c,0x11,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32((iVar7 + iVar6) * -0x3361d2af,0x13,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * 5 + -0x19ab949c,0x11,0);
    return iVar6 * -0x3361d2af;
  }
  if (0xc < param_2) {
    lVar3 = (ulong)(param_2 >> 1) + param_1;
    uVar5 = MessagePack_Internal_FarmHash__Fetch32(lVar3 + -4,0,0);
    iVar6 = MessagePack_Internal_FarmHash__Fetch32(param_1 + 4,0);
    lVar1 = param_1 + (ulong)param_2;
    iVar7 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -8,0);
    iVar8 = MessagePack_Internal_FarmHash__Fetch32(lVar3,0);
    iVar9 = MessagePack_Internal_FarmHash__Fetch32(param_1,0);
    iVar10 = MessagePack_Internal_FarmHash__Fetch32(lVar1 + -4,0);
    iVar11 = MessagePack_Internal_FarmHash__Rotate32(uVar5,0xc,0);
    iVar12 = MessagePack_Internal_FarmHash__Rotate32(iVar7 * -0x3361d2af,0x11,0);
    iVar12 = MessagePack_Internal_FarmHash__Rotate32
                       (iVar12 * 0x1b873593 ^ param_2 + iVar8 * -0x3361d2af,0x13,0);
    iVar13 = MessagePack_Internal_FarmHash__Rotate32(iVar11 + iVar10,3,0);
    iVar9 = MessagePack_Internal_FarmHash__Rotate32(iVar9 * -0x3361d2af,0x11,0);
    iVar9 = MessagePack_Internal_FarmHash__Rotate32
                      (iVar9 * 0x1b873593 ^ iVar11 + iVar10 + -0x19ab949c + iVar12 * 5,0x13,0);
    iVar10 = MessagePack_Internal_FarmHash__Rotate32(iVar13 + iVar7 + iVar10,0xc,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * -0x3361d2af,0x11,0);
    iVar6 = MessagePack_Internal_FarmHash__Rotate32
                      (iVar6 * 0x1b873593 ^ iVar13 + iVar7 + -0x19ab949c + iVar9 * 5,0x13,0);
    uVar2 = iVar8 + iVar10 + -0x19ab949c + iVar6 * 5;
    uVar2 = (uVar2 ^ uVar2 >> 0x10) * -0x7a143595;
    uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
    return uVar2 ^ uVar2 >> 0x10;
  }
  iVar6 = MessagePack_Internal_FarmHash__Fetch32(param_1,0,0);
  iVar7 = MessagePack_Internal_FarmHash__Fetch32(param_1 + (ulong)param_2 + -4,0);
  iVar8 = MessagePack_Internal_FarmHash__Fetch32((ulong)(param_2 >> 1 & 4) + param_1,0);
  iVar6 = MessagePack_Internal_FarmHash__Rotate32((iVar6 + param_2) * -0x3361d2af,0x11,0);
  iVar6 = MessagePack_Internal_FarmHash__Rotate32(iVar6 * 0x1b873593 ^ param_2 * 5,0x13,0);
  iVar7 = MessagePack_Internal_FarmHash__Rotate32((iVar7 + param_2 * 5) * -0x3361d2af,0x11,0);
  iVar6 = MessagePack_Internal_FarmHash__Rotate32
                    (iVar7 * 0x1b873593 ^ iVar6 * 5 + 0xe6546b64U,0x13,0);
  iVar7 = MessagePack_Internal_FarmHash__Rotate32(iVar8 * -0x3361d2af + 0x318f97d9,0x11,0);
  iVar6 = MessagePack_Internal_FarmHash__Rotate32
                    (iVar7 * 0x1b873593 ^ iVar6 * 5 + 0xe6546b64U,0x13,0);
  uVar2 = iVar6 * 5 + 0xe6546b64;
  uVar2 = (uVar2 ^ uVar2 >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  return uVar2 ^ uVar2 >> 0x10;
}

