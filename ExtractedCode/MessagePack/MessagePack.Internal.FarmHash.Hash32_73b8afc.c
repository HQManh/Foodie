// rea decompile_all
// name: MessagePack.Internal.FarmHash$$Hash32
// address: 0x73b8afc
// body: available
// range: 0x73b8afc-0x73b8ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_Internal_FarmHash__Hash32(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_2 < 0x19) {
    if (param_2 < 0xd) {
      iVar2 = *param_1;
      iVar10 = *(int *)((long)param_1 + ((ulong)param_2 - 4));
      iVar3 = *(int *)(((ulong)(param_2 >> 1) & 4) + (long)param_1);
      if ((DAT_09520c1d & 1) == 0) {
        FUN_03f5c2a4(&DAT_091cc158);
        DAT_09520c1d = 1;
      }
      iVar10 = iVar10 + param_2 * 5;
      uVar8 = ((iVar2 + param_2) * -0x3361d2af >> 0x11 | (iVar2 + param_2) * 0x16a88000) *
              0x1b873593 ^ param_2 * 5;
      uVar11 = iVar3 * -0x3361d2af + 0x318f97d9;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64 ^
              ((uint)(iVar10 * -0x3361d2af) >> 0x11 | iVar10 * 0x16a88000) * 0x1b873593;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64 ^
              (uVar11 >> 0x11 | uVar11 * 0x8000) * 0x1b873593;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
    }
    else {
      piVar1 = (int *)((long)param_1 + (ulong)(param_2 >> 1));
      iVar2 = *param_1;
      iVar3 = param_1[1];
      uVar8 = piVar1[-1];
      iVar4 = *piVar1;
      iVar10 = *(int *)((long)param_1 + ((ulong)param_2 - 8));
      iVar5 = *(int *)((long)param_1 + ((ulong)param_2 - 4));
      if ((DAT_09520c1d & 1) == 0) {
        FUN_03f5c2a4(&DAT_091cc158);
        DAT_09520c1d = 1;
      }
      uVar11 = ((uint)(iVar10 * -0x3361d2af) >> 0x11 | iVar10 * 0x16a88000) * 0x1b873593 ^
               param_2 + iVar4 * -0x3361d2af;
      uVar8 = iVar5 + (uVar8 >> 0xc | uVar8 << 0x14);
      iVar10 = (uVar8 >> 3 | uVar8 * 0x20000000) + iVar10;
      uVar11 = uVar8 + 0xe6546b64 + (uVar11 >> 0x13 | uVar11 << 0xd) * 5 ^
               ((uint)(iVar2 * -0x3361d2af) >> 0x11 | iVar2 * 0x16a88000) * 0x1b873593;
      uVar8 = iVar10 + iVar5;
      uVar11 = iVar10 + -0x19ab949c + (uVar11 >> 0x13 | uVar11 << 0xd) * 5 ^
               ((uint)(iVar3 * -0x3361d2af) >> 0x11 | iVar3 * 0x16a88000) * 0x1b873593;
      uVar8 = iVar4 + -0x19ab949c + (uVar8 >> 0xc | uVar8 * 0x100000) +
              (uVar11 >> 0x13 | uVar11 << 0xd) * 5;
    }
    uVar8 = (uVar8 ^ uVar8 >> 0x10) * -0x7a143595;
    uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
    uVar8 = uVar8 ^ uVar8 >> 0x10;
  }
  else {
    iVar10 = *(int *)((long)param_1 + ((ulong)param_2 - 4));
    if ((DAT_09520c1d & 1) == 0) {
      FUN_03f5c2a4(&DAT_091cc158);
      DAT_09520c1d = 1;
    }
    iVar2 = *(int *)((long)param_1 + ((ulong)param_2 - 0xc));
    iVar4 = *(int *)((long)param_1 + ((ulong)param_2 - 8));
    iVar3 = *(int *)((long)param_1 + ((ulong)param_2 - 0x14));
    iVar5 = *(int *)((long)param_1 + ((ulong)param_2 - 0x10));
    uVar8 = ((uint)(iVar10 * -0x3361d2af) >> 0x11 | iVar10 * 0x16a88000) * 0x1b873593 ^ param_2;
    uVar11 = ((uint)(iVar4 * -0x3361d2af) >> 0x11 | iVar4 * 0x16a88000) * 0x1b873593 ^
             param_2 * -0x3361d2af;
    uVar8 = ((uint)(iVar5 * -0x3361d2af) >> 0x11 | iVar5 * 0x16a88000) * 0x1b873593 ^
            (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
    uVar11 = ((uint)(iVar2 * -0x3361d2af) >> 0x11 | iVar2 * 0x16a88000) * 0x1b873593 ^
             (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
    uVar6 = param_2 * -0x3361d2af +
            ((uint)(iVar3 * -0x3361d2af) >> 0x11 | iVar3 * 0x16a88000) * 0x1b873593;
    iVar10 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + -0x19ab949c;
    uVar9 = (ulong)(param_2 - 1) / 0x14;
    uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
    uVar8 = (uVar6 >> 0x13 | uVar6 * 0x2000) + 0x71;
    do {
      iVar3 = param_1[3];
      iVar2 = param_1[2];
      uVar7 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar7;
      iVar4 = param_1[1] + param_1[4] * -0x3361d2af;
      uVar11 = ((uint)(iVar2 * -0x3361d2af) >> 0x11 | iVar2 * 0x16a88000) * 0x1b873593 ^
               param_1[1] + uVar11;
      uVar8 = ((uint)(iVar4 * -0x3361d2af) >> 0x11 | iVar4 * 0x16a88000) * 0x1b873593 ^
              iVar2 + uVar8;
      uVar6 = ((uint)(iVar3 * -0x3361d2af) >> 0x11 | iVar3 * 0x16a88000) * 0x1b873593 ^
              *param_1 + iVar10;
      iVar2 = *param_1 + -0x19ab949c + (uVar11 >> 0x13 | uVar11 << 0xd) * 5;
      uVar8 = iVar3 + -0x19ab949c + iVar2 + (uVar8 >> 0x13 | uVar8 << 0xd) * 5;
      iVar10 = param_1[4] + -0x19ab949c + (uVar6 >> 0x13 | uVar6 << 0xd) * 5;
      uVar11 = uVar8 + iVar2;
      param_1 = param_1 + 5;
    } while (uVar7 != 0);
    uVar11 = iVar10 + ((uVar11 >> 0xb | uVar11 * 0x200000) * -0x3361d2af >> 0x11 |
                      (uVar11 >> 0xb) * 0x16a88000) * -0x3361d2af;
    uVar11 = (uVar11 >> 0x13 | uVar11 * 0x2000) * 5 + 0xe6546b64;
    iVar10 = (uVar11 >> 0x11 | uVar11 * 0x8000) +
             ((uVar8 >> 0xb | uVar8 * 0x200000) * -0x3361d2af >> 0x11 | (uVar8 >> 0xb) * 0x16a88000)
    ;
    uVar8 = ((uint)(iVar10 * -0x3361d2af) >> 0x13 | iVar10 * -0x3a55e000) * 5 + 0xe6546b64;
    uVar8 = (uVar8 >> 0x11 | uVar8 * 0x8000) * -0x3361d2af;
  }
  return uVar8;
}

