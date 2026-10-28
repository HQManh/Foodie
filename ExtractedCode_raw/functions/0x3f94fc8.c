// rea decompile_all
// name: FUN_03f94fc8
// address: 0x3f94fc8
// body: available
// range: 0x3f94fc8-0x3f9515b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f94fc8(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar6;
  
  uVar4 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar4 < 3) {
    if (1 < uVar4) {
      if (uVar4 != 2) {
LAB_03f9506c:
        FUN_03f94d80(param_1,param_1 + 2,param_1 + 4,param_3);
        puVar6 = param_1 + 6;
        if (puVar6 != param_2) {
          lVar7 = 0;
          iVar8 = 0;
          puVar11 = param_1 + 4;
          do {
            puVar5 = puVar6;
            uVar4 = *puVar5;
            if (uVar4 < *puVar11) {
              uVar9 = puVar5[1];
              lVar1 = lVar7;
              do {
                lVar10 = lVar1;
                *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                     *(undefined8 *)((long)param_1 + lVar10 + 0x28);
                *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                     *(undefined8 *)((long)param_1 + lVar10 + 0x20);
                puVar6 = param_1;
                if (lVar10 == -0x20) goto LAB_03f950e4;
                lVar1 = lVar10 + -0x10;
              } while (uVar4 < *(ulong *)((long)param_1 + lVar10 + 0x10));
              puVar6 = (ulong *)((long)param_1 + lVar10 + 0x20);
LAB_03f950e4:
              iVar8 = iVar8 + 1;
              *puVar6 = uVar4;
              puVar6[1] = uVar9;
              if (iVar8 == 8) {
                uVar3 = 0;
                uVar2 = (uint)(puVar5 + 2 == param_2);
                goto LAB_03f95154;
              }
            }
            puVar6 = puVar5 + 2;
            lVar7 = lVar7 + 0x10;
            puVar11 = puVar5;
          } while (puVar6 != param_2);
        }
        uVar2 = (uint)puVar6;
        uVar3 = 1;
LAB_03f95154:
        uVar3 = uVar3 | uVar2;
        goto LAB_03f95130;
      }
      puVar6 = param_2 + -2;
      if (*puVar6 < *param_1) {
        uVar4 = *puVar6;
        uVar12 = param_1[1];
        uVar9 = *param_1;
        param_1[1] = param_2[-1];
        *param_1 = uVar4;
        param_2[-1] = uVar12;
        *puVar6 = uVar9;
      }
    }
  }
  else if (uVar4 == 3) {
    FUN_03f94d80(param_1,param_1 + 2,param_2 + -2,param_3);
  }
  else if (uVar4 == 4) {
    FUN_03f9515c(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
  }
  else {
    if (uVar4 != 5) goto LAB_03f9506c;
    FUN_03f951f8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
  }
  uVar3 = 1;
LAB_03f95130:
  return uVar3 & 1;
}

