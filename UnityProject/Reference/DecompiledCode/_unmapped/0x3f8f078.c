// rea decompile_all
// name: thunk_FUN_03f8ef2c
// address: 0x3f8f078
// body: available
// range: 0x3f8f078-0x3f8f07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * thunk_FUN_03f8ef2c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  void *unaff_x20;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  
  uVar5 = (ulong)*(ushort *)(DAT_09534d78 + 0x38);
  piVar4 = (int *)(*(long *)(DAT_09534d78 + 0x20) + DAT_09534d78);
  if (uVar5 != 0) {
    puVar8 = (ulong *)(piVar4 + 4);
    uVar6 = 0xffffffffffffffff;
    uVar9 = uVar5;
    do {
      uVar7 = uVar6;
      if (((int)puVar8[-2] == 1) && (uVar7 = *puVar8, uVar6 <= *puVar8)) {
        uVar7 = uVar6;
      }
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 7;
      uVar6 = uVar7;
    } while (uVar9 != 0);
    if (uVar7 != 0xffffffffffffffff) goto joined_r0x03f8ef9c;
  }
  uVar7 = 0;
joined_r0x03f8ef9c:
  if (*(ushort *)(DAT_09534d78 + 0x38) != 0) {
    do {
      if (*piVar4 == 4) {
        puVar10 = (uint *)((DAT_09534d78 - uVar7) + *(long *)(piVar4 + 4));
        puVar1 = (uint *)((long)puVar10 + *(long *)(piVar4 + 10));
        do {
          if (puVar1 <= puVar10) {
            return (void *)0x0;
          }
          uVar2 = puVar10[2];
          if (uVar2 == 3) {
            uVar3 = *puVar10;
            unaff_x20 = malloc(0x29);
            if (puVar10[1] == 0) {
              return unaff_x20;
            }
            iVar11 = 0;
            uVar12 = 0;
            do {
              snprintf((char *)((long)unaff_x20 + (long)iVar11),3,"%02x",
                       (ulong)*(byte *)((long)puVar10 + (long)(int)uVar12 + (ulong)uVar3 + 0xc));
              uVar12 = uVar12 + 1;
              iVar11 = iVar11 + 2;
            } while (uVar12 < puVar10[1]);
          }
          else {
            puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10 + (ulong)puVar10[1] + 0xc);
          }
        } while (uVar2 != 3);
        return unaff_x20;
      }
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 0xe;
    } while (uVar5 != 0);
  }
  return (void *)0x0;
}

