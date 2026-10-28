// rea decompile_all
// name: FUN_03f7b93c
// address: 0x3f7b93c
// body: available
// range: 0x3f7b93c-0x3f7bacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03f7b93c(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  
  uVar3 = (uint)param_1[1];
  uVar4 = (uint)param_2[1];
  uVar5 = uVar3 >> 0x10 & 0xff;
  if (uVar5 == (uVar4 >> 0x10 & 0xff)) {
    do {
      uVar5 = uVar3 >> 0x1d & 1;
      uVar4 = uVar4 >> 0x1d & 1;
      bVar1 = uVar4 <= uVar5;
      if (uVar5 != uVar4) goto LAB_03f7b9e8;
      uVar4 = uVar3 >> 0x10 & 0xff;
      if (uVar4 < 0x14) {
        if (uVar4 != 0xf) {
          if ((1 < uVar4 - 0x11) && (uVar4 != 0x13)) {
            return 0;
          }
LAB_03f7ba1c:
          bVar1 = *param_1 == *param_2;
          uVar4 = 1;
          if (*param_1 < *param_2) {
            uVar4 = 0xffffffff;
          }
LAB_03f7ba30:
          uVar3 = 0;
          if (!bVar1) {
            uVar3 = uVar4;
          }
          return (ulong)uVar3;
        }
      }
      else if (uVar4 < 0x1d) {
        if (uVar4 != 0x14) {
          if (uVar4 != 0x15) {
            return 0;
          }
          puVar9 = (uint *)((undefined8 *)*param_1)[1];
          puVar7 = (uint *)((undefined8 *)*param_2)[1];
          if ((puVar9 != (uint *)0x0) && (puVar7 != (uint *)0x0)) {
            uVar3 = *puVar9;
            uVar6 = (ulong)uVar3;
            uVar4 = 1;
            if (uVar3 < *puVar7) {
              uVar4 = 0xffffffff;
            }
            if (uVar3 != *puVar7) {
              return (ulong)uVar4;
            }
            uVar2 = FUN_03f7b93c(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (uVar3 == 0) {
              return 0;
            }
            puVar10 = *(undefined8 **)(puVar9 + 2);
            puVar8 = *(undefined8 **)(puVar7 + 2);
            do {
              uVar2 = FUN_03f7b93c(*puVar10,*puVar8);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              uVar6 = uVar6 - 1;
              puVar10 = puVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar6 != 0);
            return uVar2;
          }
          uVar4 = 1;
          if (puVar9 == (uint *)0x0) {
            uVar4 = 0xffffffff;
          }
          bVar1 = puVar9 == puVar7;
          goto LAB_03f7ba30;
        }
        param_1 = (ulong *)*param_1;
        param_2 = (ulong *)*param_2;
        bVar1 = (byte)param_2[1] <= (byte)param_1[1];
        if ((byte)param_1[1] != (byte)param_2[1]) goto LAB_03f7b9e8;
      }
      else if (uVar4 != 0x1d) {
        if (uVar4 != 0x1e) {
          return 0;
        }
        goto LAB_03f7ba1c;
      }
      param_2 = (ulong *)*param_2;
      param_1 = (ulong *)*param_1;
      uVar3 = (uint)param_1[1];
      uVar4 = (uint)param_2[1];
      uVar5 = uVar3 >> 0x10 & 0xff;
    } while (uVar5 == (uVar4 >> 0x10 & 0xff));
  }
  bVar1 = (uVar4 >> 0x10 & 0xff) <= uVar5;
LAB_03f7b9e8:
  uVar4 = 1;
  if (!bVar1) {
    uVar4 = 0xffffffff;
  }
  return (ulong)uVar4;
}

